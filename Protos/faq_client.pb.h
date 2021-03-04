// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: faq_client.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_faq_5fclient_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_faq_5fclient_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_faq_5fclient_2eproto FAQ_PROTOS
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct FAQ_PROTOS TableStruct_faq_5fclient_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern FAQ_PROTOS const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_faq_5fclient_2eproto;
namespace faq_client {
class Empty;
class EmptyDefaultTypeInternal;
FAQ_PROTOS extern EmptyDefaultTypeInternal _Empty_default_instance_;
class InitRequest;
class InitRequestDefaultTypeInternal;
FAQ_PROTOS extern InitRequestDefaultTypeInternal _InitRequest_default_instance_;
class InitResponse;
class InitResponseDefaultTypeInternal;
FAQ_PROTOS extern InitResponseDefaultTypeInternal _InitResponse_default_instance_;
class LogMsg;
class LogMsgDefaultTypeInternal;
FAQ_PROTOS extern LogMsgDefaultTypeInternal _LogMsg_default_instance_;
}  // namespace faq_client
PROTOBUF_NAMESPACE_OPEN
template<> FAQ_PROTOS ::faq_client::Empty* Arena::CreateMaybeMessage<::faq_client::Empty>(Arena*);
template<> FAQ_PROTOS ::faq_client::InitRequest* Arena::CreateMaybeMessage<::faq_client::InitRequest>(Arena*);
template<> FAQ_PROTOS ::faq_client::InitResponse* Arena::CreateMaybeMessage<::faq_client::InitResponse>(Arena*);
template<> FAQ_PROTOS ::faq_client::LogMsg* Arena::CreateMaybeMessage<::faq_client::LogMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace faq_client {

// ===================================================================

class FAQ_PROTOS Empty PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:faq_client.Empty) */ {
 public:
  inline Empty() : Empty(nullptr) {}
  virtual ~Empty();

  Empty(const Empty& from);
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Empty& default_instance();

  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }
  inline void Swap(Empty* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Empty* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(nullptr);
  }

  Empty* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "faq_client.Empty";
  }
  protected:
  explicit Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_faq_5fclient_2eproto);
    return ::descriptor_table_faq_5fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:faq_client.Empty)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_faq_5fclient_2eproto;
};
// -------------------------------------------------------------------

class FAQ_PROTOS LogMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:faq_client.LogMsg) */ {
 public:
  inline LogMsg() : LogMsg(nullptr) {}
  virtual ~LogMsg();

  LogMsg(const LogMsg& from);
  LogMsg(LogMsg&& from) noexcept
    : LogMsg() {
    *this = ::std::move(from);
  }

  inline LogMsg& operator=(const LogMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogMsg& operator=(LogMsg&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogMsg& default_instance();

  static inline const LogMsg* internal_default_instance() {
    return reinterpret_cast<const LogMsg*>(
               &_LogMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LogMsg& a, LogMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(LogMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LogMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogMsg* New() const final {
    return CreateMaybeMessage<LogMsg>(nullptr);
  }

  LogMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogMsg& from);
  void MergeFrom(const LogMsg& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "faq_client.LogMsg";
  }
  protected:
  explicit LogMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_faq_5fclient_2eproto);
    return ::descriptor_table_faq_5fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 2,
    kPidFieldNumber = 1,
  };
  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // int32 pid = 1;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::int32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_pid() const;
  void _internal_set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:faq_client.LogMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::int32 pid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_faq_5fclient_2eproto;
};
// -------------------------------------------------------------------

class FAQ_PROTOS InitRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:faq_client.InitRequest) */ {
 public:
  inline InitRequest() : InitRequest(nullptr) {}
  virtual ~InitRequest();

  InitRequest(const InitRequest& from);
  InitRequest(InitRequest&& from) noexcept
    : InitRequest() {
    *this = ::std::move(from);
  }

  inline InitRequest& operator=(const InitRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline InitRequest& operator=(InitRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const InitRequest& default_instance();

  static inline const InitRequest* internal_default_instance() {
    return reinterpret_cast<const InitRequest*>(
               &_InitRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(InitRequest& a, InitRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(InitRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InitRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InitRequest* New() const final {
    return CreateMaybeMessage<InitRequest>(nullptr);
  }

  InitRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InitRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InitRequest& from);
  void MergeFrom(const InitRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(InitRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "faq_client.InitRequest";
  }
  protected:
  explicit InitRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_faq_5fclient_2eproto);
    return ::descriptor_table_faq_5fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kPidFieldNumber = 1,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 pid = 1;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::int32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_pid() const;
  void _internal_set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:faq_client.InitRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::int32 pid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_faq_5fclient_2eproto;
};
// -------------------------------------------------------------------

class FAQ_PROTOS InitResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:faq_client.InitResponse) */ {
 public:
  inline InitResponse() : InitResponse(nullptr) {}
  virtual ~InitResponse();

  InitResponse(const InitResponse& from);
  InitResponse(InitResponse&& from) noexcept
    : InitResponse() {
    *this = ::std::move(from);
  }

  inline InitResponse& operator=(const InitResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline InitResponse& operator=(InitResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const InitResponse& default_instance();

  static inline const InitResponse* internal_default_instance() {
    return reinterpret_cast<const InitResponse*>(
               &_InitResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(InitResponse& a, InitResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(InitResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(InitResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InitResponse* New() const final {
    return CreateMaybeMessage<InitResponse>(nullptr);
  }

  InitResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InitResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const InitResponse& from);
  void MergeFrom(const InitResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(InitResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "faq_client.InitResponse";
  }
  protected:
  explicit InitResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_faq_5fclient_2eproto);
    return ::descriptor_table_faq_5fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnableFieldNumber = 1,
  };
  // bool enable = 1;
  void clear_enable();
  bool enable() const;
  void set_enable(bool value);
  private:
  bool _internal_enable() const;
  void _internal_set_enable(bool value);
  public:

  // @@protoc_insertion_point(class_scope:faq_client.InitResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool enable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_faq_5fclient_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Empty

// -------------------------------------------------------------------

// LogMsg

// int32 pid = 1;
inline void LogMsg::clear_pid() {
  pid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LogMsg::_internal_pid() const {
  return pid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LogMsg::pid() const {
  // @@protoc_insertion_point(field_get:faq_client.LogMsg.pid)
  return _internal_pid();
}
inline void LogMsg::_internal_set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  pid_ = value;
}
inline void LogMsg::set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_pid(value);
  // @@protoc_insertion_point(field_set:faq_client.LogMsg.pid)
}

// string message = 2;
inline void LogMsg::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& LogMsg::message() const {
  // @@protoc_insertion_point(field_get:faq_client.LogMsg.message)
  return _internal_message();
}
inline void LogMsg::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:faq_client.LogMsg.message)
}
inline std::string* LogMsg::mutable_message() {
  // @@protoc_insertion_point(field_mutable:faq_client.LogMsg.message)
  return _internal_mutable_message();
}
inline const std::string& LogMsg::_internal_message() const {
  return message_.Get();
}
inline void LogMsg::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void LogMsg::set_message(std::string&& value) {
  
  message_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:faq_client.LogMsg.message)
}
inline void LogMsg::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:faq_client.LogMsg.message)
}
inline void LogMsg::set_message(const char* value,
    size_t size) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:faq_client.LogMsg.message)
}
inline std::string* LogMsg::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* LogMsg::release_message() {
  // @@protoc_insertion_point(field_release:faq_client.LogMsg.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LogMsg::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:faq_client.LogMsg.message)
}

// -------------------------------------------------------------------

// InitRequest

// int32 pid = 1;
inline void InitRequest::clear_pid() {
  pid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 InitRequest::_internal_pid() const {
  return pid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 InitRequest::pid() const {
  // @@protoc_insertion_point(field_get:faq_client.InitRequest.pid)
  return _internal_pid();
}
inline void InitRequest::_internal_set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  pid_ = value;
}
inline void InitRequest::set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_pid(value);
  // @@protoc_insertion_point(field_set:faq_client.InitRequest.pid)
}

// string name = 2;
inline void InitRequest::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& InitRequest::name() const {
  // @@protoc_insertion_point(field_get:faq_client.InitRequest.name)
  return _internal_name();
}
inline void InitRequest::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:faq_client.InitRequest.name)
}
inline std::string* InitRequest::mutable_name() {
  // @@protoc_insertion_point(field_mutable:faq_client.InitRequest.name)
  return _internal_mutable_name();
}
inline const std::string& InitRequest::_internal_name() const {
  return name_.Get();
}
inline void InitRequest::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void InitRequest::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:faq_client.InitRequest.name)
}
inline void InitRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:faq_client.InitRequest.name)
}
inline void InitRequest::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:faq_client.InitRequest.name)
}
inline std::string* InitRequest::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* InitRequest::release_name() {
  // @@protoc_insertion_point(field_release:faq_client.InitRequest.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void InitRequest::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:faq_client.InitRequest.name)
}

// -------------------------------------------------------------------

// InitResponse

// bool enable = 1;
inline void InitResponse::clear_enable() {
  enable_ = false;
}
inline bool InitResponse::_internal_enable() const {
  return enable_;
}
inline bool InitResponse::enable() const {
  // @@protoc_insertion_point(field_get:faq_client.InitResponse.enable)
  return _internal_enable();
}
inline void InitResponse::_internal_set_enable(bool value) {
  
  enable_ = value;
}
inline void InitResponse::set_enable(bool value) {
  _internal_set_enable(value);
  // @@protoc_insertion_point(field_set:faq_client.InitResponse.enable)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace faq_client

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_faq_5fclient_2eproto
