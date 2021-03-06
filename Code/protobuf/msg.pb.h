// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace msg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msg_2eproto();
void protobuf_AssignDesc_msg_2eproto();
void protobuf_ShutdownFile_msg_2eproto();

class msg;

// ===================================================================

class msg : public ::google::protobuf::Message {
 public:
  msg();
  virtual ~msg();

  msg(const msg& from);

  inline msg& operator=(const msg& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const msg& default_instance();

  void Swap(msg* other);

  // implements Message ----------------------------------------------

  msg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const msg& from);
  void MergeFrom(const msg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string arg1 = 3;
  inline bool has_arg1() const;
  inline void clear_arg1();
  static const int kArg1FieldNumber = 3;
  inline const ::std::string& arg1() const;
  inline void set_arg1(const ::std::string& value);
  inline void set_arg1(const char* value);
  inline void set_arg1(const char* value, size_t size);
  inline ::std::string* mutable_arg1();
  inline ::std::string* release_arg1();
  inline void set_allocated_arg1(::std::string* arg1);

  // optional string arg2 = 4;
  inline bool has_arg2() const;
  inline void clear_arg2();
  static const int kArg2FieldNumber = 4;
  inline const ::std::string& arg2() const;
  inline void set_arg2(const ::std::string& value);
  inline void set_arg2(const char* value);
  inline void set_arg2(const char* value, size_t size);
  inline ::std::string* mutable_arg2();
  inline ::std::string* release_arg2();
  inline void set_allocated_arg2(::std::string* arg2);

  // optional string arg3 = 5;
  inline bool has_arg3() const;
  inline void clear_arg3();
  static const int kArg3FieldNumber = 5;
  inline const ::std::string& arg3() const;
  inline void set_arg3(const ::std::string& value);
  inline void set_arg3(const char* value);
  inline void set_arg3(const char* value, size_t size);
  inline ::std::string* mutable_arg3();
  inline ::std::string* release_arg3();
  inline void set_allocated_arg3(::std::string* arg3);

  // @@protoc_insertion_point(class_scope:msg.msg)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_arg1();
  inline void clear_has_arg1();
  inline void set_has_arg2();
  inline void clear_has_arg2();
  inline void set_has_arg3();
  inline void clear_has_arg3();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::std::string* arg1_;
  ::std::string* arg2_;
  ::std::string* arg3_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static msg* default_instance_;
};
// ===================================================================


// ===================================================================

// msg

// required string name = 1;
inline bool msg::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void msg::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void msg::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void msg::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& msg::name() const {
  // @@protoc_insertion_point(field_get:msg.msg.name)
  return *name_;
}
inline void msg::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:msg.msg.name)
}
inline void msg::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:msg.msg.name)
}
inline void msg::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:msg.msg.name)
}
inline ::std::string* msg::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:msg.msg.name)
  return name_;
}
inline ::std::string* msg::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void msg::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:msg.msg.name)
}

// required int32 id = 2;
inline bool msg::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void msg::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void msg::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void msg::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 msg::id() const {
  // @@protoc_insertion_point(field_get:msg.msg.id)
  return id_;
}
inline void msg::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:msg.msg.id)
}

// required string arg1 = 3;
inline bool msg::has_arg1() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void msg::set_has_arg1() {
  _has_bits_[0] |= 0x00000004u;
}
inline void msg::clear_has_arg1() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void msg::clear_arg1() {
  if (arg1_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg1_->clear();
  }
  clear_has_arg1();
}
inline const ::std::string& msg::arg1() const {
  // @@protoc_insertion_point(field_get:msg.msg.arg1)
  return *arg1_;
}
inline void msg::set_arg1(const ::std::string& value) {
  set_has_arg1();
  if (arg1_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg1_ = new ::std::string;
  }
  arg1_->assign(value);
  // @@protoc_insertion_point(field_set:msg.msg.arg1)
}
inline void msg::set_arg1(const char* value) {
  set_has_arg1();
  if (arg1_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg1_ = new ::std::string;
  }
  arg1_->assign(value);
  // @@protoc_insertion_point(field_set_char:msg.msg.arg1)
}
inline void msg::set_arg1(const char* value, size_t size) {
  set_has_arg1();
  if (arg1_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg1_ = new ::std::string;
  }
  arg1_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:msg.msg.arg1)
}
inline ::std::string* msg::mutable_arg1() {
  set_has_arg1();
  if (arg1_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg1_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:msg.msg.arg1)
  return arg1_;
}
inline ::std::string* msg::release_arg1() {
  clear_has_arg1();
  if (arg1_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = arg1_;
    arg1_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void msg::set_allocated_arg1(::std::string* arg1) {
  if (arg1_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete arg1_;
  }
  if (arg1) {
    set_has_arg1();
    arg1_ = arg1;
  } else {
    clear_has_arg1();
    arg1_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:msg.msg.arg1)
}

// optional string arg2 = 4;
inline bool msg::has_arg2() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void msg::set_has_arg2() {
  _has_bits_[0] |= 0x00000008u;
}
inline void msg::clear_has_arg2() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void msg::clear_arg2() {
  if (arg2_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg2_->clear();
  }
  clear_has_arg2();
}
inline const ::std::string& msg::arg2() const {
  // @@protoc_insertion_point(field_get:msg.msg.arg2)
  return *arg2_;
}
inline void msg::set_arg2(const ::std::string& value) {
  set_has_arg2();
  if (arg2_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg2_ = new ::std::string;
  }
  arg2_->assign(value);
  // @@protoc_insertion_point(field_set:msg.msg.arg2)
}
inline void msg::set_arg2(const char* value) {
  set_has_arg2();
  if (arg2_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg2_ = new ::std::string;
  }
  arg2_->assign(value);
  // @@protoc_insertion_point(field_set_char:msg.msg.arg2)
}
inline void msg::set_arg2(const char* value, size_t size) {
  set_has_arg2();
  if (arg2_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg2_ = new ::std::string;
  }
  arg2_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:msg.msg.arg2)
}
inline ::std::string* msg::mutable_arg2() {
  set_has_arg2();
  if (arg2_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg2_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:msg.msg.arg2)
  return arg2_;
}
inline ::std::string* msg::release_arg2() {
  clear_has_arg2();
  if (arg2_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = arg2_;
    arg2_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void msg::set_allocated_arg2(::std::string* arg2) {
  if (arg2_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete arg2_;
  }
  if (arg2) {
    set_has_arg2();
    arg2_ = arg2;
  } else {
    clear_has_arg2();
    arg2_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:msg.msg.arg2)
}

// optional string arg3 = 5;
inline bool msg::has_arg3() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void msg::set_has_arg3() {
  _has_bits_[0] |= 0x00000010u;
}
inline void msg::clear_has_arg3() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void msg::clear_arg3() {
  if (arg3_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg3_->clear();
  }
  clear_has_arg3();
}
inline const ::std::string& msg::arg3() const {
  // @@protoc_insertion_point(field_get:msg.msg.arg3)
  return *arg3_;
}
inline void msg::set_arg3(const ::std::string& value) {
  set_has_arg3();
  if (arg3_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg3_ = new ::std::string;
  }
  arg3_->assign(value);
  // @@protoc_insertion_point(field_set:msg.msg.arg3)
}
inline void msg::set_arg3(const char* value) {
  set_has_arg3();
  if (arg3_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg3_ = new ::std::string;
  }
  arg3_->assign(value);
  // @@protoc_insertion_point(field_set_char:msg.msg.arg3)
}
inline void msg::set_arg3(const char* value, size_t size) {
  set_has_arg3();
  if (arg3_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg3_ = new ::std::string;
  }
  arg3_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:msg.msg.arg3)
}
inline ::std::string* msg::mutable_arg3() {
  set_has_arg3();
  if (arg3_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    arg3_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:msg.msg.arg3)
  return arg3_;
}
inline ::std::string* msg::release_arg3() {
  clear_has_arg3();
  if (arg3_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = arg3_;
    arg3_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void msg::set_allocated_arg3(::std::string* arg3) {
  if (arg3_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete arg3_;
  }
  if (arg3) {
    set_has_arg3();
    arg3_ = arg3;
  } else {
    clear_has_arg3();
    arg3_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:msg.msg.arg3)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msg

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_2eproto__INCLUDED
