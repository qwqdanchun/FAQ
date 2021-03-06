using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net.Sockets;
using System.Net;

namespace Logger
{
    class Program
    {
        static void Main(string[] args)
        {
            var server = new UdpClient(47381);
            while (true)
            {
                IPEndPoint remote = new IPEndPoint(IPAddress.Any, 0);
                var data = server.Receive(ref remote);
                Console.ForegroundColor = ConsoleColor.DarkGray;
                Console.Write("[{0}] ", DateTime.Now.ToLongTimeString());
                Console.ResetColor();
                Console.WriteLine(Encoding.UTF8.GetString(data));
            }
        }
    }
}
