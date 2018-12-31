// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: parking_space.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "parking_space.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace hdmap_proto {

namespace {

const ::google::protobuf::Descriptor* ParkingSpace_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ParkingSpace_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_parking_5fspace_2eproto() {
  protobuf_AddDesc_parking_5fspace_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "parking_space.proto");
  GOOGLE_CHECK(file != NULL);
  ParkingSpace_descriptor_ = file->message_type(0);
  static const int ParkingSpace_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParkingSpace, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParkingSpace, tile_ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParkingSpace, parking_slots_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParkingSpace, link_ids_),
  };
  ParkingSpace_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ParkingSpace_descriptor_,
      ParkingSpace::default_instance_,
      ParkingSpace_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParkingSpace, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ParkingSpace, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ParkingSpace));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_parking_5fspace_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ParkingSpace_descriptor_, &ParkingSpace::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_parking_5fspace_2eproto() {
  delete ParkingSpace::default_instance_;
  delete ParkingSpace_reflection_;
}

void protobuf_AddDesc_parking_5fspace_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::hdmap_proto::protobuf_AddDesc_id_2eproto();
  ::hdmap_proto::protobuf_AddDesc_geometry_2eproto();
  ::hdmap_proto::protobuf_AddDesc_object_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023parking_space.proto\022\013hdmap_proto\032\010id.p"
    "roto\032\016geometry.proto\032\014object.proto\"\242\001\n\014P"
    "arkingSpace\022\033\n\002id\030\001 \002(\0132\017.hdmap_proto.Id"
    "\022!\n\010tile_ids\030\002 \003(\0132\017.hdmap_proto.Id\022/\n\rp"
    "arking_slots\030\004 \003(\0132\030.hdmap_proto.Parking"
    "Slot\022!\n\010link_ids\030\005 \003(\0132\017.hdmap_proto.Id", 239);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "parking_space.proto", &protobuf_RegisterTypes);
  ParkingSpace::default_instance_ = new ParkingSpace();
  ParkingSpace::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_parking_5fspace_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_parking_5fspace_2eproto {
  StaticDescriptorInitializer_parking_5fspace_2eproto() {
    protobuf_AddDesc_parking_5fspace_2eproto();
  }
} static_descriptor_initializer_parking_5fspace_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ParkingSpace::kIdFieldNumber;
const int ParkingSpace::kTileIdsFieldNumber;
const int ParkingSpace::kParkingSlotsFieldNumber;
const int ParkingSpace::kLinkIdsFieldNumber;
#endif  // !_MSC_VER

ParkingSpace::ParkingSpace()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:hdmap_proto.ParkingSpace)
}

void ParkingSpace::InitAsDefaultInstance() {
  id_ = const_cast< ::hdmap_proto::Id*>(&::hdmap_proto::Id::default_instance());
}

ParkingSpace::ParkingSpace(const ParkingSpace& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:hdmap_proto.ParkingSpace)
}

void ParkingSpace::SharedCtor() {
  _cached_size_ = 0;
  id_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ParkingSpace::~ParkingSpace() {
  // @@protoc_insertion_point(destructor:hdmap_proto.ParkingSpace)
  SharedDtor();
}

void ParkingSpace::SharedDtor() {
  if (this != default_instance_) {
    delete id_;
  }
}

void ParkingSpace::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ParkingSpace::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ParkingSpace_descriptor_;
}

const ParkingSpace& ParkingSpace::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_parking_5fspace_2eproto();
  return *default_instance_;
}

ParkingSpace* ParkingSpace::default_instance_ = NULL;

ParkingSpace* ParkingSpace::New() const {
  return new ParkingSpace;
}

void ParkingSpace::Clear() {
  if (has_id()) {
    if (id_ != NULL) id_->::hdmap_proto::Id::Clear();
  }
  tile_ids_.Clear();
  parking_slots_.Clear();
  link_ids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ParkingSpace::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:hdmap_proto.ParkingSpace)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .hdmap_proto.Id id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tile_ids;
        break;
      }

      // repeated .hdmap_proto.Id tile_ids = 2;
      case 2: {
        if (tag == 18) {
         parse_tile_ids:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_tile_ids()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tile_ids;
        if (input->ExpectTag(34)) goto parse_parking_slots;
        break;
      }

      // repeated .hdmap_proto.ParkingSlot parking_slots = 4;
      case 4: {
        if (tag == 34) {
         parse_parking_slots:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_parking_slots()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_parking_slots;
        if (input->ExpectTag(42)) goto parse_link_ids;
        break;
      }

      // repeated .hdmap_proto.Id link_ids = 5;
      case 5: {
        if (tag == 42) {
         parse_link_ids:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_link_ids()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_link_ids;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:hdmap_proto.ParkingSpace)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hdmap_proto.ParkingSpace)
  return false;
#undef DO_
}

void ParkingSpace::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hdmap_proto.ParkingSpace)
  // required .hdmap_proto.Id id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->id(), output);
  }

  // repeated .hdmap_proto.Id tile_ids = 2;
  for (int i = 0; i < this->tile_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->tile_ids(i), output);
  }

  // repeated .hdmap_proto.ParkingSlot parking_slots = 4;
  for (int i = 0; i < this->parking_slots_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->parking_slots(i), output);
  }

  // repeated .hdmap_proto.Id link_ids = 5;
  for (int i = 0; i < this->link_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->link_ids(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:hdmap_proto.ParkingSpace)
}

::google::protobuf::uint8* ParkingSpace::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:hdmap_proto.ParkingSpace)
  // required .hdmap_proto.Id id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->id(), target);
  }

  // repeated .hdmap_proto.Id tile_ids = 2;
  for (int i = 0; i < this->tile_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->tile_ids(i), target);
  }

  // repeated .hdmap_proto.ParkingSlot parking_slots = 4;
  for (int i = 0; i < this->parking_slots_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->parking_slots(i), target);
  }

  // repeated .hdmap_proto.Id link_ids = 5;
  for (int i = 0; i < this->link_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->link_ids(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hdmap_proto.ParkingSpace)
  return target;
}

int ParkingSpace::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .hdmap_proto.Id id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->id());
    }

  }
  // repeated .hdmap_proto.Id tile_ids = 2;
  total_size += 1 * this->tile_ids_size();
  for (int i = 0; i < this->tile_ids_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->tile_ids(i));
  }

  // repeated .hdmap_proto.ParkingSlot parking_slots = 4;
  total_size += 1 * this->parking_slots_size();
  for (int i = 0; i < this->parking_slots_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->parking_slots(i));
  }

  // repeated .hdmap_proto.Id link_ids = 5;
  total_size += 1 * this->link_ids_size();
  for (int i = 0; i < this->link_ids_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->link_ids(i));
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

void ParkingSpace::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ParkingSpace* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ParkingSpace*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ParkingSpace::MergeFrom(const ParkingSpace& from) {
  GOOGLE_CHECK_NE(&from, this);
  tile_ids_.MergeFrom(from.tile_ids_);
  parking_slots_.MergeFrom(from.parking_slots_);
  link_ids_.MergeFrom(from.link_ids_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      mutable_id()->::hdmap_proto::Id::MergeFrom(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ParkingSpace::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ParkingSpace::CopyFrom(const ParkingSpace& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParkingSpace::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_id()) {
    if (!this->id().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->tile_ids())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->parking_slots())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->link_ids())) return false;
  return true;
}

void ParkingSpace::Swap(ParkingSpace* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    tile_ids_.Swap(&other->tile_ids_);
    parking_slots_.Swap(&other->parking_slots_);
    link_ids_.Swap(&other->link_ids_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ParkingSpace::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ParkingSpace_descriptor_;
  metadata.reflection = ParkingSpace_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap_proto

// @@protoc_insertion_point(global_scope)