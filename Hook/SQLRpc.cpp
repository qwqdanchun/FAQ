#include "pch.h"
#include "SQLRpc.h"

#include <vector>
#include <string>


#include "faq_hook.pb.h"
#include "SQLiteQuery.h"
#include "Utils.h"

using namespace std;


struct FieldInfo
{
    string name;
    int type;
};

SQLRpc* SQLRpc::_rpcInstance = nullptr;

SQLRpc::SQLRpc(HookSQLite3DB* db): db(db), server("0.0.0.0", "47382")
{
    _rpcInstance = this;
}

SQLRpc::~SQLRpc()
{
    _rpcInstance = nullptr;
}

SQLRpc* SQLRpc::Get()
{
    return _rpcInstance;
}


void SQLRpc::serve()
{
    if(!server.listen())
        return;
    while(true)
    {
        if(!server.waitClient())
            break;

        while(true)
        {
            string sql;
            logFmt("Wait for next query");
            if(!server.recv(sql))
                break;
            // logFmt("Recv SQL: %s", sql.c_str());

            if(!query(sql))
                break;
            // logFmt("Complete query");
        }
    }
    
}

bool SQLRpc::sendQueryRow(const faq::SQLiteQueryRow& row)
{
    string output;
    row.SerializeToString(&output);
    return server.send(output);
}



bool SQLRpc::query(string sql)
{
    // logFmt("Call to query");

    auto query = HookSQLite3Query();
    int result;
    db->execQuery(query.innerPtr, sql.c_str(), &result);
    int fieldCount = 0;
    bool firstRow = true;
    vector<string> fieldNames;

    logFmt("SQL: %s", sql.c_str());
    logFmt("Result: %d", result);
    if(!server.send<int>(result))
        return false;
    if (result == SQLITE_ROW || result == SQLITE_OK)
    {
        while(!query.eof())
        {
            faq::SQLiteQueryRow resultRow;
            if(firstRow)
            {
                fieldCount = query.numFields();
                for(int i = 0; i < fieldCount; i ++)
                {
                    auto name = query.fieldName(i);
                    // logFmt("[%d] Name %s", i, name);
                    fieldNames.push_back(string(name));   
                }
            }

            for(int idx = 0; idx < fieldCount; idx++)
            {
                auto resultField = resultRow.add_fields();
                
                if(firstRow)
                {
                    resultField->set_name(fieldNames[idx]);
                }
                auto type = query.fieldDataType(idx);
                // logFmt("[%d] Type %d", idx, type);
                switch (type)
                {
                    case SQLITE_INTEGER:
                        resultField->set_int_(query.getIntField(idx, 0));
                        break;
                    case SQLITE_BLOB:
                        {
                            int size;
                            auto buf = query.getBlobField(idx, &size);
                            resultField->set_blob(buf, size);
                            break;
                        }
                    case SQLITE_FLOAT:
                        resultField->set_float_(query.getFloatField(idx, 0));
                        break;
                    case SQLITE_TEXT:
                        {
                            int size;
                            auto buf = query.getStringField(idx, "");
                            resultField->set_string(buf);
                            break;
                        }
                    case SQLITE_NULL:
                        resultField->set_null(true);
                        break;
                    default:
                        resultField->set_null(false);
                }
            }

            firstRow = false;
            query.nextRow();
            sendQueryRow(resultRow);
        }
    }
    
    if(!server.send<int>(0))
        return false;
    
    return true;
}