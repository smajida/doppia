// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "stixels.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace doppia_protobuf {

namespace {

const ::google::protobuf::Descriptor* Stixel_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Stixel_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Stixel_Type_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Stixels_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Stixels_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_stixels_2eproto() {
  protobuf_AddDesc_stixels_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "stixels.proto");
  GOOGLE_CHECK(file != NULL);
  Stixel_descriptor_ = file->message_type(0);
  static const int Stixel_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, width_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, bottom_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, top_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, disparity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, backward_delta_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, valid_delta_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, backward_width_),
  };
  Stixel_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Stixel_descriptor_,
      Stixel::default_instance_,
      Stixel_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixel, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Stixel));
  Stixel_Type_descriptor_ = Stixel_descriptor_->enum_type(0);
  Stixels_descriptor_ = file->message_type(1);
  static const int Stixels_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixels, image_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixels, stixels_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixels, ground_top_and_bottom_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixels, ground_plane_),
  };
  Stixels_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Stixels_descriptor_,
      Stixels::default_instance_,
      Stixels_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixels, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Stixels, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Stixels));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_stixels_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Stixel_descriptor_, &Stixel::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Stixels_descriptor_, &Stixels::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_stixels_2eproto() {
  delete Stixel::default_instance_;
  delete Stixel_reflection_;
  delete Stixels::default_instance_;
  delete Stixels_reflection_;
}

void protobuf_AddDesc_stixels_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::doppia_protobuf::protobuf_AddDesc_ground_5ftop_5fand_5fbottom_2eproto();
  ::doppia_protobuf::protobuf_AddDesc_plane3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rstixels.proto\022\017doppia_protobuf\032\033ground"
    "_top_and_bottom.proto\032\rplane3d.proto\"\246\002\n"
    "\006Stixel\022\r\n\005width\030\001 \002(\r\022\t\n\001x\030\002 \002(\r\022\020\n\010bot"
    "tom_y\030\003 \002(\r\022\r\n\005top_y\030\004 \002(\r\022\021\n\tdisparity\030"
    "\005 \002(\r\022*\n\004type\030\006 \002(\0162\034.doppia_protobuf.St"
    "ixel.Type\022\033\n\020backward_delta_x\030\007 \001(\005:\0010\022\034"
    "\n\rvalid_delta_x\030\010 \001(\010:\005false\022\031\n\016backward"
    "_width\030\t \001(\005:\0011\"L\n\004Type\022\013\n\007Unknown\020\000\022\014\n\010"
    "Occluded\020\001\022\007\n\003Car\020\002\022\016\n\nPedestrian\020\003\022\020\n\014S"
    "taticObject\020\004\"\273\001\n\007Stixels\022\022\n\nimage_name\030"
    "\001 \001(\t\022(\n\007stixels\030\002 \003(\0132\027.doppia_protobuf"
    ".Stixel\022B\n\025ground_top_and_bottom\030\003 \001(\0132#"
    ".doppia_protobuf.GroundTopAndBottom\022.\n\014g"
    "round_plane\030\004 \001(\0132\030.doppia_protobuf.Plan"
    "e3d", 563);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "stixels.proto", &protobuf_RegisterTypes);
  Stixel::default_instance_ = new Stixel();
  Stixels::default_instance_ = new Stixels();
  Stixel::default_instance_->InitAsDefaultInstance();
  Stixels::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_stixels_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_stixels_2eproto {
  StaticDescriptorInitializer_stixels_2eproto() {
    protobuf_AddDesc_stixels_2eproto();
  }
} static_descriptor_initializer_stixels_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* Stixel_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Stixel_Type_descriptor_;
}
bool Stixel_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Stixel_Type Stixel::Unknown;
const Stixel_Type Stixel::Occluded;
const Stixel_Type Stixel::Car;
const Stixel_Type Stixel::Pedestrian;
const Stixel_Type Stixel::StaticObject;
const Stixel_Type Stixel::Type_MIN;
const Stixel_Type Stixel::Type_MAX;
const int Stixel::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Stixel::kWidthFieldNumber;
const int Stixel::kXFieldNumber;
const int Stixel::kBottomYFieldNumber;
const int Stixel::kTopYFieldNumber;
const int Stixel::kDisparityFieldNumber;
const int Stixel::kTypeFieldNumber;
const int Stixel::kBackwardDeltaXFieldNumber;
const int Stixel::kValidDeltaXFieldNumber;
const int Stixel::kBackwardWidthFieldNumber;
#endif  // !_MSC_VER

Stixel::Stixel()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Stixel::InitAsDefaultInstance() {
}

Stixel::Stixel(const Stixel& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Stixel::SharedCtor() {
  _cached_size_ = 0;
  width_ = 0u;
  x_ = 0u;
  bottom_y_ = 0u;
  top_y_ = 0u;
  disparity_ = 0u;
  type_ = 0;
  backward_delta_x_ = 0;
  valid_delta_x_ = false;
  backward_width_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Stixel::~Stixel() {
  SharedDtor();
}

void Stixel::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Stixel::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Stixel::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Stixel_descriptor_;
}

const Stixel& Stixel::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_stixels_2eproto();  return *default_instance_;
}

Stixel* Stixel::default_instance_ = NULL;

Stixel* Stixel::New() const {
  return new Stixel;
}

void Stixel::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    width_ = 0u;
    x_ = 0u;
    bottom_y_ = 0u;
    top_y_ = 0u;
    disparity_ = 0u;
    type_ = 0;
    backward_delta_x_ = 0;
    valid_delta_x_ = false;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    backward_width_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Stixel::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 width = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &width_)));
          set_has_width();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_x;
        break;
      }
      
      // required uint32 x = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_bottom_y;
        break;
      }
      
      // required uint32 bottom_y = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bottom_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &bottom_y_)));
          set_has_bottom_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_top_y;
        break;
      }
      
      // required uint32 top_y = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_top_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &top_y_)));
          set_has_top_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_disparity;
        break;
      }
      
      // required uint32 disparity = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_disparity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &disparity_)));
          set_has_disparity();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_type;
        break;
      }
      
      // required .doppia_protobuf.Stixel.Type type = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::doppia_protobuf::Stixel_Type_IsValid(value)) {
            set_type(static_cast< ::doppia_protobuf::Stixel_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(6, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_backward_delta_x;
        break;
      }
      
      // optional int32 backward_delta_x = 7 [default = 0];
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_backward_delta_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &backward_delta_x_)));
          set_has_backward_delta_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_valid_delta_x;
        break;
      }
      
      // optional bool valid_delta_x = 8 [default = false];
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_valid_delta_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &valid_delta_x_)));
          set_has_valid_delta_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_backward_width;
        break;
      }
      
      // optional int32 backward_width = 9 [default = 1];
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_backward_width:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &backward_width_)));
          set_has_backward_width();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Stixel::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 width = 1;
  if (has_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->width(), output);
  }
  
  // required uint32 x = 2;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->x(), output);
  }
  
  // required uint32 bottom_y = 3;
  if (has_bottom_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->bottom_y(), output);
  }
  
  // required uint32 top_y = 4;
  if (has_top_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->top_y(), output);
  }
  
  // required uint32 disparity = 5;
  if (has_disparity()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->disparity(), output);
  }
  
  // required .doppia_protobuf.Stixel.Type type = 6;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->type(), output);
  }
  
  // optional int32 backward_delta_x = 7 [default = 0];
  if (has_backward_delta_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->backward_delta_x(), output);
  }
  
  // optional bool valid_delta_x = 8 [default = false];
  if (has_valid_delta_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->valid_delta_x(), output);
  }
  
  // optional int32 backward_width = 9 [default = 1];
  if (has_backward_width()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->backward_width(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Stixel::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 width = 1;
  if (has_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->width(), target);
  }
  
  // required uint32 x = 2;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->x(), target);
  }
  
  // required uint32 bottom_y = 3;
  if (has_bottom_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->bottom_y(), target);
  }
  
  // required uint32 top_y = 4;
  if (has_top_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->top_y(), target);
  }
  
  // required uint32 disparity = 5;
  if (has_disparity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->disparity(), target);
  }
  
  // required .doppia_protobuf.Stixel.Type type = 6;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->type(), target);
  }
  
  // optional int32 backward_delta_x = 7 [default = 0];
  if (has_backward_delta_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->backward_delta_x(), target);
  }
  
  // optional bool valid_delta_x = 8 [default = false];
  if (has_valid_delta_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->valid_delta_x(), target);
  }
  
  // optional int32 backward_width = 9 [default = 1];
  if (has_backward_width()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(9, this->backward_width(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Stixel::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 width = 1;
    if (has_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->width());
    }
    
    // required uint32 x = 2;
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->x());
    }
    
    // required uint32 bottom_y = 3;
    if (has_bottom_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->bottom_y());
    }
    
    // required uint32 top_y = 4;
    if (has_top_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->top_y());
    }
    
    // required uint32 disparity = 5;
    if (has_disparity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->disparity());
    }
    
    // required .doppia_protobuf.Stixel.Type type = 6;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }
    
    // optional int32 backward_delta_x = 7 [default = 0];
    if (has_backward_delta_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->backward_delta_x());
    }
    
    // optional bool valid_delta_x = 8 [default = false];
    if (has_valid_delta_x()) {
      total_size += 1 + 1;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 backward_width = 9 [default = 1];
    if (has_backward_width()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->backward_width());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Stixel::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Stixel* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Stixel*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Stixel::MergeFrom(const Stixel& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_width()) {
      set_width(from.width());
    }
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_bottom_y()) {
      set_bottom_y(from.bottom_y());
    }
    if (from.has_top_y()) {
      set_top_y(from.top_y());
    }
    if (from.has_disparity()) {
      set_disparity(from.disparity());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_backward_delta_x()) {
      set_backward_delta_x(from.backward_delta_x());
    }
    if (from.has_valid_delta_x()) {
      set_valid_delta_x(from.valid_delta_x());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_backward_width()) {
      set_backward_width(from.backward_width());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Stixel::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Stixel::CopyFrom(const Stixel& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Stixel::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;
  
  return true;
}

void Stixel::Swap(Stixel* other) {
  if (other != this) {
    std::swap(width_, other->width_);
    std::swap(x_, other->x_);
    std::swap(bottom_y_, other->bottom_y_);
    std::swap(top_y_, other->top_y_);
    std::swap(disparity_, other->disparity_);
    std::swap(type_, other->type_);
    std::swap(backward_delta_x_, other->backward_delta_x_);
    std::swap(valid_delta_x_, other->valid_delta_x_);
    std::swap(backward_width_, other->backward_width_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Stixel::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Stixel_descriptor_;
  metadata.reflection = Stixel_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Stixels::kImageNameFieldNumber;
const int Stixels::kStixelsFieldNumber;
const int Stixels::kGroundTopAndBottomFieldNumber;
const int Stixels::kGroundPlaneFieldNumber;
#endif  // !_MSC_VER

Stixels::Stixels()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Stixels::InitAsDefaultInstance() {
  ground_top_and_bottom_ = const_cast< ::doppia_protobuf::GroundTopAndBottom*>(&::doppia_protobuf::GroundTopAndBottom::default_instance());
  ground_plane_ = const_cast< ::doppia_protobuf::Plane3d*>(&::doppia_protobuf::Plane3d::default_instance());
}

Stixels::Stixels(const Stixels& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Stixels::SharedCtor() {
  _cached_size_ = 0;
  image_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ground_top_and_bottom_ = NULL;
  ground_plane_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Stixels::~Stixels() {
  SharedDtor();
}

void Stixels::SharedDtor() {
  if (image_name_ != &::google::protobuf::internal::kEmptyString) {
    delete image_name_;
  }
  if (this != default_instance_) {
    delete ground_top_and_bottom_;
    delete ground_plane_;
  }
}

void Stixels::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Stixels::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Stixels_descriptor_;
}

const Stixels& Stixels::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_stixels_2eproto();  return *default_instance_;
}

Stixels* Stixels::default_instance_ = NULL;

Stixels* Stixels::New() const {
  return new Stixels;
}

void Stixels::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_image_name()) {
      if (image_name_ != &::google::protobuf::internal::kEmptyString) {
        image_name_->clear();
      }
    }
    if (has_ground_top_and_bottom()) {
      if (ground_top_and_bottom_ != NULL) ground_top_and_bottom_->::doppia_protobuf::GroundTopAndBottom::Clear();
    }
    if (has_ground_plane()) {
      if (ground_plane_ != NULL) ground_plane_->::doppia_protobuf::Plane3d::Clear();
    }
  }
  stixels_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Stixels::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string image_name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_image_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->image_name().data(), this->image_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_stixels;
        break;
      }
      
      // repeated .doppia_protobuf.Stixel stixels = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_stixels:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_stixels()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_stixels;
        if (input->ExpectTag(26)) goto parse_ground_top_and_bottom;
        break;
      }
      
      // optional .doppia_protobuf.GroundTopAndBottom ground_top_and_bottom = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ground_top_and_bottom:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ground_top_and_bottom()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_ground_plane;
        break;
      }
      
      // optional .doppia_protobuf.Plane3d ground_plane = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ground_plane:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ground_plane()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Stixels::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string image_name = 1;
  if (has_image_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->image_name().data(), this->image_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->image_name(), output);
  }
  
  // repeated .doppia_protobuf.Stixel stixels = 2;
  for (int i = 0; i < this->stixels_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->stixels(i), output);
  }
  
  // optional .doppia_protobuf.GroundTopAndBottom ground_top_and_bottom = 3;
  if (has_ground_top_and_bottom()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->ground_top_and_bottom(), output);
  }
  
  // optional .doppia_protobuf.Plane3d ground_plane = 4;
  if (has_ground_plane()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->ground_plane(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Stixels::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string image_name = 1;
  if (has_image_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->image_name().data(), this->image_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->image_name(), target);
  }
  
  // repeated .doppia_protobuf.Stixel stixels = 2;
  for (int i = 0; i < this->stixels_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->stixels(i), target);
  }
  
  // optional .doppia_protobuf.GroundTopAndBottom ground_top_and_bottom = 3;
  if (has_ground_top_and_bottom()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->ground_top_and_bottom(), target);
  }
  
  // optional .doppia_protobuf.Plane3d ground_plane = 4;
  if (has_ground_plane()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->ground_plane(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Stixels::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string image_name = 1;
    if (has_image_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->image_name());
    }
    
    // optional .doppia_protobuf.GroundTopAndBottom ground_top_and_bottom = 3;
    if (has_ground_top_and_bottom()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ground_top_and_bottom());
    }
    
    // optional .doppia_protobuf.Plane3d ground_plane = 4;
    if (has_ground_plane()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ground_plane());
    }
    
  }
  // repeated .doppia_protobuf.Stixel stixels = 2;
  total_size += 1 * this->stixels_size();
  for (int i = 0; i < this->stixels_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->stixels(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Stixels::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Stixels* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Stixels*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Stixels::MergeFrom(const Stixels& from) {
  GOOGLE_CHECK_NE(&from, this);
  stixels_.MergeFrom(from.stixels_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_image_name()) {
      set_image_name(from.image_name());
    }
    if (from.has_ground_top_and_bottom()) {
      mutable_ground_top_and_bottom()->::doppia_protobuf::GroundTopAndBottom::MergeFrom(from.ground_top_and_bottom());
    }
    if (from.has_ground_plane()) {
      mutable_ground_plane()->::doppia_protobuf::Plane3d::MergeFrom(from.ground_plane());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Stixels::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Stixels::CopyFrom(const Stixels& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Stixels::IsInitialized() const {
  
  for (int i = 0; i < stixels_size(); i++) {
    if (!this->stixels(i).IsInitialized()) return false;
  }
  if (has_ground_top_and_bottom()) {
    if (!this->ground_top_and_bottom().IsInitialized()) return false;
  }
  if (has_ground_plane()) {
    if (!this->ground_plane().IsInitialized()) return false;
  }
  return true;
}

void Stixels::Swap(Stixels* other) {
  if (other != this) {
    std::swap(image_name_, other->image_name_);
    stixels_.Swap(&other->stixels_);
    std::swap(ground_top_and_bottom_, other->ground_top_and_bottom_);
    std::swap(ground_plane_, other->ground_plane_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Stixels::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Stixels_descriptor_;
  metadata.reflection = Stixels_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace doppia_protobuf

// @@protoc_insertion_point(global_scope)
