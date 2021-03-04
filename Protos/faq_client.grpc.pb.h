// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: faq_client.proto
#ifndef GRPC_faq_5fclient_2eproto__INCLUDED
#define GRPC_faq_5fclient_2eproto__INCLUDED

#include "faq_client.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace faq_client {

class Client final {
 public:
  static constexpr char const* service_full_name() {
    return "faq_client.Client";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Log(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::faq_client::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::Empty>> AsyncLog(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::Empty>>(AsyncLogRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::Empty>> PrepareAsyncLog(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::Empty>>(PrepareAsyncLogRaw(context, request, cq));
    }
    virtual ::grpc::Status Init(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::faq_client::InitResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::InitResponse>> AsyncInit(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::InitResponse>>(AsyncInitRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::InitResponse>> PrepareAsyncInit(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::InitResponse>>(PrepareAsyncInitRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Log(::grpc::ClientContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Log(::grpc::ClientContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Log(::grpc::ClientContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      virtual void Init(::grpc::ClientContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Init(::grpc::ClientContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Init(::grpc::ClientContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::Empty>* AsyncLogRaw(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::Empty>* PrepareAsyncLogRaw(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::InitResponse>* AsyncInitRaw(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faq_client::InitResponse>* PrepareAsyncInitRaw(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Log(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::faq_client::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::Empty>> AsyncLog(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::Empty>>(AsyncLogRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::Empty>> PrepareAsyncLog(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::Empty>>(PrepareAsyncLogRaw(context, request, cq));
    }
    ::grpc::Status Init(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::faq_client::InitResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::InitResponse>> AsyncInit(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::InitResponse>>(AsyncInitRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::InitResponse>> PrepareAsyncInit(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faq_client::InitResponse>>(PrepareAsyncInitRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Log(::grpc::ClientContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Log(::grpc::ClientContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Log(::grpc::ClientContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      void Init(::grpc::ClientContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Init(::grpc::ClientContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Init(::grpc::ClientContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::faq_client::Empty>* AsyncLogRaw(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faq_client::Empty>* PrepareAsyncLogRaw(::grpc::ClientContext* context, const ::faq_client::LogMsg& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faq_client::InitResponse>* AsyncInitRaw(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::faq_client::InitResponse>* PrepareAsyncInitRaw(::grpc::ClientContext* context, const ::faq_client::InitRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Log_;
    const ::grpc::internal::RpcMethod rpcmethod_Init_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class FAQ_PROTOS Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    Service(const Service&) = delete;
    Service& operator=(const Service&) = delete;
    virtual ::grpc::Status Log(::grpc::ServerContext* context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response);
    virtual ::grpc::Status Init(::grpc::ServerContext* context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Log : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Log() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Log() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Log(::grpc::ServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLog(::grpc::ServerContext* context, ::faq_client::LogMsg* request, ::grpc::ServerAsyncResponseWriter< ::faq_client::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Init : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Init() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Init() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Init(::grpc::ServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInit(::grpc::ServerContext* context, ::faq_client::InitRequest* request, ::grpc::ServerAsyncResponseWriter< ::faq_client::InitResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Log<WithAsyncMethod_Init<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Log : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Log() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::faq_client::LogMsg, ::faq_client::Empty>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::faq_client::LogMsg* request, ::faq_client::Empty* response) { return this->Log(context, request, response); }));}
    void SetMessageAllocatorFor_Log(
        ::grpc::experimental::MessageAllocator< ::faq_client::LogMsg, ::faq_client::Empty>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::faq_client::LogMsg, ::faq_client::Empty>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Log() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Log(::grpc::ServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Log(
      ::grpc::CallbackServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Log(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Init : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Init() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::faq_client::InitRequest, ::faq_client::InitResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::faq_client::InitRequest* request, ::faq_client::InitResponse* response) { return this->Init(context, request, response); }));}
    void SetMessageAllocatorFor_Init(
        ::grpc::experimental::MessageAllocator< ::faq_client::InitRequest, ::faq_client::InitResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(1);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(1);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::faq_client::InitRequest, ::faq_client::InitResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Init() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Init(::grpc::ServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Init(
      ::grpc::CallbackServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Init(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Log<ExperimentalWithCallbackMethod_Init<Service > > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Log<ExperimentalWithCallbackMethod_Init<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Log : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Log() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Log() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Log(::grpc::ServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Init : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Init() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Init() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Init(::grpc::ServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Log : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Log() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Log() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Log(::grpc::ServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestLog(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Init : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Init() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Init() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Init(::grpc::ServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestInit(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Log : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Log() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Log(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Log() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Log(::grpc::ServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Log(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Log(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Init : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Init() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Init(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Init() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Init(::grpc::ServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Init(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Init(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Log : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Log() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::faq_client::LogMsg, ::faq_client::Empty>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::faq_client::LogMsg, ::faq_client::Empty>* streamer) {
                       return this->StreamedLog(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Log() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Log(::grpc::ServerContext* /*context*/, const ::faq_client::LogMsg* /*request*/, ::faq_client::Empty* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedLog(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faq_client::LogMsg,::faq_client::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Init : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Init() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler<
          ::faq_client::InitRequest, ::faq_client::InitResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::faq_client::InitRequest, ::faq_client::InitResponse>* streamer) {
                       return this->StreamedInit(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Init() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Init(::grpc::ServerContext* /*context*/, const ::faq_client::InitRequest* /*request*/, ::faq_client::InitResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedInit(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faq_client::InitRequest,::faq_client::InitResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Log<WithStreamedUnaryMethod_Init<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Log<WithStreamedUnaryMethod_Init<Service > > StreamedService;
};

}  // namespace faq_client


#endif  // GRPC_faq_5fclient_2eproto__INCLUDED
