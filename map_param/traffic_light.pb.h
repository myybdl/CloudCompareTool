// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: traffic_light.proto

#ifndef PROTOBUF_traffic_5flight_2eproto__INCLUDED
#define PROTOBUF_traffic_5flight_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "id.pb.h"
#include "geometry.pb.h"
// @@protoc_insertion_point(includes)

namespace hdmap_proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_traffic_5flight_2eproto();
void protobuf_AssignDesc_traffic_5flight_2eproto();
void protobuf_ShutdownFile_traffic_5flight_2eproto();

class TrafficLight;

enum TrafficLight_TrafficLightType {
  TrafficLight_TrafficLightType_NONE = 0,
  TrafficLight_TrafficLightType_CIRCLE = 1,
  TrafficLight_TrafficLightType_CROSS = 2,
  TrafficLight_TrafficLightType_PEDESTRIAN = 3,
  TrafficLight_TrafficLightType_BICYCLE = 4,
  TrafficLight_TrafficLightType_ARROW = 5,
  TrafficLight_TrafficLightType_TIME = 6
};
bool TrafficLight_TrafficLightType_IsValid(int value);
const TrafficLight_TrafficLightType TrafficLight_TrafficLightType_TrafficLightType_MIN = TrafficLight_TrafficLightType_NONE;
const TrafficLight_TrafficLightType TrafficLight_TrafficLightType_TrafficLightType_MAX = TrafficLight_TrafficLightType_TIME;
const int TrafficLight_TrafficLightType_TrafficLightType_ARRAYSIZE = TrafficLight_TrafficLightType_TrafficLightType_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficLight_TrafficLightType_descriptor();
inline const ::std::string& TrafficLight_TrafficLightType_Name(TrafficLight_TrafficLightType value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficLight_TrafficLightType_descriptor(), value);
}
inline bool TrafficLight_TrafficLightType_Parse(
    const ::std::string& name, TrafficLight_TrafficLightType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficLight_TrafficLightType>(
    TrafficLight_TrafficLightType_descriptor(), name, value);
}
enum TrafficLight_TrafficLightState {
  TrafficLight_TrafficLightState_UNKNOWN = 0,
  TrafficLight_TrafficLightState_RED = 1,
  TrafficLight_TrafficLightState_GREEN = 2,
  TrafficLight_TrafficLightState_BLUE = 3,
  TrafficLight_TrafficLightState_YELLOW = 4
};
bool TrafficLight_TrafficLightState_IsValid(int value);
const TrafficLight_TrafficLightState TrafficLight_TrafficLightState_TrafficLightState_MIN = TrafficLight_TrafficLightState_UNKNOWN;
const TrafficLight_TrafficLightState TrafficLight_TrafficLightState_TrafficLightState_MAX = TrafficLight_TrafficLightState_YELLOW;
const int TrafficLight_TrafficLightState_TrafficLightState_ARRAYSIZE = TrafficLight_TrafficLightState_TrafficLightState_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficLight_TrafficLightState_descriptor();
inline const ::std::string& TrafficLight_TrafficLightState_Name(TrafficLight_TrafficLightState value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficLight_TrafficLightState_descriptor(), value);
}
inline bool TrafficLight_TrafficLightState_Parse(
    const ::std::string& name, TrafficLight_TrafficLightState* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficLight_TrafficLightState>(
    TrafficLight_TrafficLightState_descriptor(), name, value);
}
// ===================================================================

class TrafficLight : public ::google::protobuf::Message {
 public:
  TrafficLight();
  virtual ~TrafficLight();

  TrafficLight(const TrafficLight& from);

  inline TrafficLight& operator=(const TrafficLight& from) {
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
  static const TrafficLight& default_instance();

  enum GeometryCase {
    kCborder = 4,
    kPborder = 5,
    GEOMETRY_NOT_SET = 0,
  };

  void Swap(TrafficLight* other);

  // implements Message ----------------------------------------------

  TrafficLight* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrafficLight& from);
  void MergeFrom(const TrafficLight& from);
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

  typedef TrafficLight_TrafficLightType TrafficLightType;
  static const TrafficLightType NONE = TrafficLight_TrafficLightType_NONE;
  static const TrafficLightType CIRCLE = TrafficLight_TrafficLightType_CIRCLE;
  static const TrafficLightType CROSS = TrafficLight_TrafficLightType_CROSS;
  static const TrafficLightType PEDESTRIAN = TrafficLight_TrafficLightType_PEDESTRIAN;
  static const TrafficLightType BICYCLE = TrafficLight_TrafficLightType_BICYCLE;
  static const TrafficLightType ARROW = TrafficLight_TrafficLightType_ARROW;
  static const TrafficLightType TIME = TrafficLight_TrafficLightType_TIME;
  static inline bool TrafficLightType_IsValid(int value) {
    return TrafficLight_TrafficLightType_IsValid(value);
  }
  static const TrafficLightType TrafficLightType_MIN =
    TrafficLight_TrafficLightType_TrafficLightType_MIN;
  static const TrafficLightType TrafficLightType_MAX =
    TrafficLight_TrafficLightType_TrafficLightType_MAX;
  static const int TrafficLightType_ARRAYSIZE =
    TrafficLight_TrafficLightType_TrafficLightType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TrafficLightType_descriptor() {
    return TrafficLight_TrafficLightType_descriptor();
  }
  static inline const ::std::string& TrafficLightType_Name(TrafficLightType value) {
    return TrafficLight_TrafficLightType_Name(value);
  }
  static inline bool TrafficLightType_Parse(const ::std::string& name,
      TrafficLightType* value) {
    return TrafficLight_TrafficLightType_Parse(name, value);
  }

  typedef TrafficLight_TrafficLightState TrafficLightState;
  static const TrafficLightState UNKNOWN = TrafficLight_TrafficLightState_UNKNOWN;
  static const TrafficLightState RED = TrafficLight_TrafficLightState_RED;
  static const TrafficLightState GREEN = TrafficLight_TrafficLightState_GREEN;
  static const TrafficLightState BLUE = TrafficLight_TrafficLightState_BLUE;
  static const TrafficLightState YELLOW = TrafficLight_TrafficLightState_YELLOW;
  static inline bool TrafficLightState_IsValid(int value) {
    return TrafficLight_TrafficLightState_IsValid(value);
  }
  static const TrafficLightState TrafficLightState_MIN =
    TrafficLight_TrafficLightState_TrafficLightState_MIN;
  static const TrafficLightState TrafficLightState_MAX =
    TrafficLight_TrafficLightState_TrafficLightState_MAX;
  static const int TrafficLightState_ARRAYSIZE =
    TrafficLight_TrafficLightState_TrafficLightState_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  TrafficLightState_descriptor() {
    return TrafficLight_TrafficLightState_descriptor();
  }
  static inline const ::std::string& TrafficLightState_Name(TrafficLightState value) {
    return TrafficLight_TrafficLightState_Name(value);
  }
  static inline bool TrafficLightState_Parse(const ::std::string& name,
      TrafficLightState* value) {
    return TrafficLight_TrafficLightState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .hdmap_proto.Id id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::hdmap_proto::Id& id() const;
  inline ::hdmap_proto::Id* mutable_id();
  inline ::hdmap_proto::Id* release_id();
  inline void set_allocated_id(::hdmap_proto::Id* id);

  // repeated .hdmap_proto.Id tile_id = 2;
  inline int tile_id_size() const;
  inline void clear_tile_id();
  static const int kTileIdFieldNumber = 2;
  inline const ::hdmap_proto::Id& tile_id(int index) const;
  inline ::hdmap_proto::Id* mutable_tile_id(int index);
  inline ::hdmap_proto::Id* add_tile_id();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >&
      tile_id() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >*
      mutable_tile_id();

  // optional .hdmap_proto.TrafficLight.TrafficLightType type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::hdmap_proto::TrafficLight_TrafficLightType type() const;
  inline void set_type(::hdmap_proto::TrafficLight_TrafficLightType value);

  // optional .hdmap_proto.Circle cborder = 4;
  inline bool has_cborder() const;
  inline void clear_cborder();
  static const int kCborderFieldNumber = 4;
  inline const ::hdmap_proto::Circle& cborder() const;
  inline ::hdmap_proto::Circle* mutable_cborder();
  inline ::hdmap_proto::Circle* release_cborder();
  inline void set_allocated_cborder(::hdmap_proto::Circle* cborder);

  // optional .hdmap_proto.Polygon pborder = 5;
  inline bool has_pborder() const;
  inline void clear_pborder();
  static const int kPborderFieldNumber = 5;
  inline const ::hdmap_proto::Polygon& pborder() const;
  inline ::hdmap_proto::Polygon* mutable_pborder();
  inline ::hdmap_proto::Polygon* release_pborder();
  inline void set_allocated_pborder(::hdmap_proto::Polygon* pborder);

  // optional .hdmap_proto.TrafficLight.TrafficLightState state = 6;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 6;
  inline ::hdmap_proto::TrafficLight_TrafficLightState state() const;
  inline void set_state(::hdmap_proto::TrafficLight_TrafficLightState value);

  // repeated .hdmap_proto.Id link_ids = 7;
  inline int link_ids_size() const;
  inline void clear_link_ids();
  static const int kLinkIdsFieldNumber = 7;
  inline const ::hdmap_proto::Id& link_ids(int index) const;
  inline ::hdmap_proto::Id* mutable_link_ids(int index);
  inline ::hdmap_proto::Id* add_link_ids();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >&
      link_ids() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >*
      mutable_link_ids();

  inline GeometryCase geometry_case() const;
  // @@protoc_insertion_point(class_scope:hdmap_proto.TrafficLight)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_cborder();
  inline void set_has_pborder();
  inline void set_has_state();
  inline void clear_has_state();

  inline bool has_geometry();
  void clear_geometry();
  inline void clear_has_geometry();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::hdmap_proto::Id* id_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id > tile_id_;
  int type_;
  int state_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id > link_ids_;
  union GeometryUnion {
    ::hdmap_proto::Circle* cborder_;
    ::hdmap_proto::Polygon* pborder_;
  } geometry_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_traffic_5flight_2eproto();
  friend void protobuf_AssignDesc_traffic_5flight_2eproto();
  friend void protobuf_ShutdownFile_traffic_5flight_2eproto();

  void InitAsDefaultInstance();
  static TrafficLight* default_instance_;
};
// ===================================================================


// ===================================================================

// TrafficLight

// required .hdmap_proto.Id id = 1;
inline bool TrafficLight::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrafficLight::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TrafficLight::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TrafficLight::clear_id() {
  if (id_ != NULL) id_->::hdmap_proto::Id::Clear();
  clear_has_id();
}
inline const ::hdmap_proto::Id& TrafficLight::id() const {
  // @@protoc_insertion_point(field_get:hdmap_proto.TrafficLight.id)
  return id_ != NULL ? *id_ : *default_instance_->id_;
}
inline ::hdmap_proto::Id* TrafficLight::mutable_id() {
  set_has_id();
  if (id_ == NULL) id_ = new ::hdmap_proto::Id;
  // @@protoc_insertion_point(field_mutable:hdmap_proto.TrafficLight.id)
  return id_;
}
inline ::hdmap_proto::Id* TrafficLight::release_id() {
  clear_has_id();
  ::hdmap_proto::Id* temp = id_;
  id_ = NULL;
  return temp;
}
inline void TrafficLight::set_allocated_id(::hdmap_proto::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:hdmap_proto.TrafficLight.id)
}

// repeated .hdmap_proto.Id tile_id = 2;
inline int TrafficLight::tile_id_size() const {
  return tile_id_.size();
}
inline void TrafficLight::clear_tile_id() {
  tile_id_.Clear();
}
inline const ::hdmap_proto::Id& TrafficLight::tile_id(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.TrafficLight.tile_id)
  return tile_id_.Get(index);
}
inline ::hdmap_proto::Id* TrafficLight::mutable_tile_id(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.TrafficLight.tile_id)
  return tile_id_.Mutable(index);
}
inline ::hdmap_proto::Id* TrafficLight::add_tile_id() {
  // @@protoc_insertion_point(field_add:hdmap_proto.TrafficLight.tile_id)
  return tile_id_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >&
TrafficLight::tile_id() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.TrafficLight.tile_id)
  return tile_id_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >*
TrafficLight::mutable_tile_id() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.TrafficLight.tile_id)
  return &tile_id_;
}

// optional .hdmap_proto.TrafficLight.TrafficLightType type = 3;
inline bool TrafficLight::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TrafficLight::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TrafficLight::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TrafficLight::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::hdmap_proto::TrafficLight_TrafficLightType TrafficLight::type() const {
  // @@protoc_insertion_point(field_get:hdmap_proto.TrafficLight.type)
  return static_cast< ::hdmap_proto::TrafficLight_TrafficLightType >(type_);
}
inline void TrafficLight::set_type(::hdmap_proto::TrafficLight_TrafficLightType value) {
  assert(::hdmap_proto::TrafficLight_TrafficLightType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:hdmap_proto.TrafficLight.type)
}

// optional .hdmap_proto.Circle cborder = 4;
inline bool TrafficLight::has_cborder() const {
  return geometry_case() == kCborder;
}
inline void TrafficLight::set_has_cborder() {
  _oneof_case_[0] = kCborder;
}
inline void TrafficLight::clear_cborder() {
  if (has_cborder()) {
    delete geometry_.cborder_;
    clear_has_geometry();
  }
}
inline const ::hdmap_proto::Circle& TrafficLight::cborder() const {
  return has_cborder() ? *geometry_.cborder_
                      : ::hdmap_proto::Circle::default_instance();
}
inline ::hdmap_proto::Circle* TrafficLight::mutable_cborder() {
  if (!has_cborder()) {
    clear_geometry();
    set_has_cborder();
    geometry_.cborder_ = new ::hdmap_proto::Circle;
  }
  return geometry_.cborder_;
}
inline ::hdmap_proto::Circle* TrafficLight::release_cborder() {
  if (has_cborder()) {
    clear_has_geometry();
    ::hdmap_proto::Circle* temp = geometry_.cborder_;
    geometry_.cborder_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void TrafficLight::set_allocated_cborder(::hdmap_proto::Circle* cborder) {
  clear_geometry();
  if (cborder) {
    set_has_cborder();
    geometry_.cborder_ = cborder;
  }
}

// optional .hdmap_proto.Polygon pborder = 5;
inline bool TrafficLight::has_pborder() const {
  return geometry_case() == kPborder;
}
inline void TrafficLight::set_has_pborder() {
  _oneof_case_[0] = kPborder;
}
inline void TrafficLight::clear_pborder() {
  if (has_pborder()) {
    delete geometry_.pborder_;
    clear_has_geometry();
  }
}
inline const ::hdmap_proto::Polygon& TrafficLight::pborder() const {
  return has_pborder() ? *geometry_.pborder_
                      : ::hdmap_proto::Polygon::default_instance();
}
inline ::hdmap_proto::Polygon* TrafficLight::mutable_pborder() {
  if (!has_pborder()) {
    clear_geometry();
    set_has_pborder();
    geometry_.pborder_ = new ::hdmap_proto::Polygon;
  }
  return geometry_.pborder_;
}
inline ::hdmap_proto::Polygon* TrafficLight::release_pborder() {
  if (has_pborder()) {
    clear_has_geometry();
    ::hdmap_proto::Polygon* temp = geometry_.pborder_;
    geometry_.pborder_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void TrafficLight::set_allocated_pborder(::hdmap_proto::Polygon* pborder) {
  clear_geometry();
  if (pborder) {
    set_has_pborder();
    geometry_.pborder_ = pborder;
  }
}

// optional .hdmap_proto.TrafficLight.TrafficLightState state = 6;
inline bool TrafficLight::has_state() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TrafficLight::set_has_state() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TrafficLight::clear_has_state() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TrafficLight::clear_state() {
  state_ = 0;
  clear_has_state();
}
inline ::hdmap_proto::TrafficLight_TrafficLightState TrafficLight::state() const {
  // @@protoc_insertion_point(field_get:hdmap_proto.TrafficLight.state)
  return static_cast< ::hdmap_proto::TrafficLight_TrafficLightState >(state_);
}
inline void TrafficLight::set_state(::hdmap_proto::TrafficLight_TrafficLightState value) {
  assert(::hdmap_proto::TrafficLight_TrafficLightState_IsValid(value));
  set_has_state();
  state_ = value;
  // @@protoc_insertion_point(field_set:hdmap_proto.TrafficLight.state)
}

// repeated .hdmap_proto.Id link_ids = 7;
inline int TrafficLight::link_ids_size() const {
  return link_ids_.size();
}
inline void TrafficLight::clear_link_ids() {
  link_ids_.Clear();
}
inline const ::hdmap_proto::Id& TrafficLight::link_ids(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.TrafficLight.link_ids)
  return link_ids_.Get(index);
}
inline ::hdmap_proto::Id* TrafficLight::mutable_link_ids(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.TrafficLight.link_ids)
  return link_ids_.Mutable(index);
}
inline ::hdmap_proto::Id* TrafficLight::add_link_ids() {
  // @@protoc_insertion_point(field_add:hdmap_proto.TrafficLight.link_ids)
  return link_ids_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >&
TrafficLight::link_ids() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.TrafficLight.link_ids)
  return link_ids_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >*
TrafficLight::mutable_link_ids() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.TrafficLight.link_ids)
  return &link_ids_;
}

inline bool TrafficLight::has_geometry() {
  return geometry_case() != GEOMETRY_NOT_SET;
}
inline void TrafficLight::clear_has_geometry() {
  _oneof_case_[0] = GEOMETRY_NOT_SET;
}
inline TrafficLight::GeometryCase TrafficLight::geometry_case() const {
  return TrafficLight::GeometryCase(_oneof_case_[0]);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap_proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::hdmap_proto::TrafficLight_TrafficLightType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hdmap_proto::TrafficLight_TrafficLightType>() {
  return ::hdmap_proto::TrafficLight_TrafficLightType_descriptor();
}
template <> struct is_proto_enum< ::hdmap_proto::TrafficLight_TrafficLightState> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hdmap_proto::TrafficLight_TrafficLightState>() {
  return ::hdmap_proto::TrafficLight_TrafficLightState_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_traffic_5flight_2eproto__INCLUDED
