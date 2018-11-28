// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lane.proto

#ifndef PROTOBUF_lane_2eproto__INCLUDED
#define PROTOBUF_lane_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include "attribute.pb.h"
#include "geometry.pb.h"
#include "lane_marking.pb.h"
#include "traffic_light.pb.h"
#include "traffic_sign.pb.h"
// @@protoc_insertion_point(includes)

namespace hdmap_proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lane_2eproto();
void protobuf_AssignDesc_lane_2eproto();
void protobuf_ShutdownFile_lane_2eproto();

class Lane;

enum Lane_LaneType {
  Lane_LaneType_NONE = 0,
  Lane_LaneType_CITY_DRIVING = 1,
  Lane_LaneType_BIKING = 2,
  Lane_LaneType_SIDEWALK = 3,
  Lane_LaneType_PARKING = 4
};
bool Lane_LaneType_IsValid(int value);
const Lane_LaneType Lane_LaneType_LaneType_MIN = Lane_LaneType_NONE;
const Lane_LaneType Lane_LaneType_LaneType_MAX = Lane_LaneType_PARKING;
const int Lane_LaneType_LaneType_ARRAYSIZE = Lane_LaneType_LaneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Lane_LaneType_descriptor();
inline const ::std::string& Lane_LaneType_Name(Lane_LaneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Lane_LaneType_descriptor(), value);
}
inline bool Lane_LaneType_Parse(
    const ::std::string& name, Lane_LaneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Lane_LaneType>(
    Lane_LaneType_descriptor(), name, value);
}
enum Lane_LaneDirection {
  Lane_LaneDirection_FORWARD = 1,
  Lane_LaneDirection_BACKWARD = 2,
  Lane_LaneDirection_BIDIRECTION = 3
};
bool Lane_LaneDirection_IsValid(int value);
const Lane_LaneDirection Lane_LaneDirection_LaneDirection_MIN = Lane_LaneDirection_FORWARD;
const Lane_LaneDirection Lane_LaneDirection_LaneDirection_MAX = Lane_LaneDirection_BIDIRECTION;
const int Lane_LaneDirection_LaneDirection_ARRAYSIZE = Lane_LaneDirection_LaneDirection_MAX + 1;

const ::google::protobuf::EnumDescriptor* Lane_LaneDirection_descriptor();
inline const ::std::string& Lane_LaneDirection_Name(Lane_LaneDirection value) {
  return ::google::protobuf::internal::NameOfEnum(
    Lane_LaneDirection_descriptor(), value);
}
inline bool Lane_LaneDirection_Parse(
    const ::std::string& name, Lane_LaneDirection* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Lane_LaneDirection>(
    Lane_LaneDirection_descriptor(), name, value);
}
// ===================================================================

class Lane : public ::google::protobuf::Message {
 public:
  Lane();
  virtual ~Lane();

  Lane(const Lane& from);

  inline Lane& operator=(const Lane& from) {
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
  static const Lane& default_instance();

  void Swap(Lane* other);

  // implements Message ----------------------------------------------

  Lane* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Lane& from);
  void MergeFrom(const Lane& from);
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

  typedef Lane_LaneType LaneType;
  static const LaneType NONE = Lane_LaneType_NONE;
  static const LaneType CITY_DRIVING = Lane_LaneType_CITY_DRIVING;
  static const LaneType BIKING = Lane_LaneType_BIKING;
  static const LaneType SIDEWALK = Lane_LaneType_SIDEWALK;
  static const LaneType PARKING = Lane_LaneType_PARKING;
  static inline bool LaneType_IsValid(int value) {
    return Lane_LaneType_IsValid(value);
  }
  static const LaneType LaneType_MIN =
    Lane_LaneType_LaneType_MIN;
  static const LaneType LaneType_MAX =
    Lane_LaneType_LaneType_MAX;
  static const int LaneType_ARRAYSIZE =
    Lane_LaneType_LaneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LaneType_descriptor() {
    return Lane_LaneType_descriptor();
  }
  static inline const ::std::string& LaneType_Name(LaneType value) {
    return Lane_LaneType_Name(value);
  }
  static inline bool LaneType_Parse(const ::std::string& name,
      LaneType* value) {
    return Lane_LaneType_Parse(name, value);
  }

  typedef Lane_LaneDirection LaneDirection;
  static const LaneDirection FORWARD = Lane_LaneDirection_FORWARD;
  static const LaneDirection BACKWARD = Lane_LaneDirection_BACKWARD;
  static const LaneDirection BIDIRECTION = Lane_LaneDirection_BIDIRECTION;
  static inline bool LaneDirection_IsValid(int value) {
    return Lane_LaneDirection_IsValid(value);
  }
  static const LaneDirection LaneDirection_MIN =
    Lane_LaneDirection_LaneDirection_MIN;
  static const LaneDirection LaneDirection_MAX =
    Lane_LaneDirection_LaneDirection_MAX;
  static const int LaneDirection_ARRAYSIZE =
    Lane_LaneDirection_LaneDirection_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  LaneDirection_descriptor() {
    return Lane_LaneDirection_descriptor();
  }
  static inline const ::std::string& LaneDirection_Name(LaneDirection value) {
    return Lane_LaneDirection_Name(value);
  }
  static inline bool LaneDirection_Parse(const ::std::string& name,
      LaneDirection* value) {
    return Lane_LaneDirection_Parse(name, value);
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

  // repeated .hdmap_proto.Id tile_ids = 2;
  inline int tile_ids_size() const;
  inline void clear_tile_ids();
  static const int kTileIdsFieldNumber = 2;
  inline const ::hdmap_proto::Id& tile_ids(int index) const;
  inline ::hdmap_proto::Id* mutable_tile_ids(int index);
  inline ::hdmap_proto::Id* add_tile_ids();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >&
      tile_ids() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >*
      mutable_tile_ids();

  // required .hdmap_proto.Lane.LaneType type = 4;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 4;
  inline ::hdmap_proto::Lane_LaneType type() const;
  inline void set_type(::hdmap_proto::Lane_LaneType value);

  // optional .hdmap_proto.Lane.LaneDirection direction = 5;
  inline bool has_direction() const;
  inline void clear_direction();
  static const int kDirectionFieldNumber = 5;
  inline ::hdmap_proto::Lane_LaneDirection direction() const;
  inline void set_direction(::hdmap_proto::Lane_LaneDirection value);

  // repeated .hdmap_proto.CurveControl controls = 6;
  inline int controls_size() const;
  inline void clear_controls();
  static const int kControlsFieldNumber = 6;
  inline const ::hdmap_proto::CurveControl& controls(int index) const;
  inline ::hdmap_proto::CurveControl* mutable_controls(int index);
  inline ::hdmap_proto::CurveControl* add_controls();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveControl >&
      controls() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveControl >*
      mutable_controls();

  // repeated .hdmap_proto.CurveAttr attrs = 7;
  inline int attrs_size() const;
  inline void clear_attrs();
  static const int kAttrsFieldNumber = 7;
  inline const ::hdmap_proto::CurveAttr& attrs(int index) const;
  inline ::hdmap_proto::CurveAttr* mutable_attrs(int index);
  inline ::hdmap_proto::CurveAttr* add_attrs();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveAttr >&
      attrs() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveAttr >*
      mutable_attrs();

  // repeated .hdmap_proto.LaneMarking lane_markings = 8;
  inline int lane_markings_size() const;
  inline void clear_lane_markings();
  static const int kLaneMarkingsFieldNumber = 8;
  inline const ::hdmap_proto::LaneMarking& lane_markings(int index) const;
  inline ::hdmap_proto::LaneMarking* mutable_lane_markings(int index);
  inline ::hdmap_proto::LaneMarking* add_lane_markings();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::LaneMarking >&
      lane_markings() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::LaneMarking >*
      mutable_lane_markings();

  // repeated .hdmap_proto.TrafficLight traffic_lights = 9;
  inline int traffic_lights_size() const;
  inline void clear_traffic_lights();
  static const int kTrafficLightsFieldNumber = 9;
  inline const ::hdmap_proto::TrafficLight& traffic_lights(int index) const;
  inline ::hdmap_proto::TrafficLight* mutable_traffic_lights(int index);
  inline ::hdmap_proto::TrafficLight* add_traffic_lights();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficLight >&
      traffic_lights() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficLight >*
      mutable_traffic_lights();

  // repeated .hdmap_proto.TrafficSign traffic_signs = 10;
  inline int traffic_signs_size() const;
  inline void clear_traffic_signs();
  static const int kTrafficSignsFieldNumber = 10;
  inline const ::hdmap_proto::TrafficSign& traffic_signs(int index) const;
  inline ::hdmap_proto::TrafficSign* mutable_traffic_signs(int index);
  inline ::hdmap_proto::TrafficSign* add_traffic_signs();
  inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficSign >&
      traffic_signs() const;
  inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficSign >*
      mutable_traffic_signs();

  // repeated uint64 predecessor_ids = 20;
  inline int predecessor_ids_size() const;
  inline void clear_predecessor_ids();
  static const int kPredecessorIdsFieldNumber = 20;
  inline ::google::protobuf::uint64 predecessor_ids(int index) const;
  inline void set_predecessor_ids(int index, ::google::protobuf::uint64 value);
  inline void add_predecessor_ids(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      predecessor_ids() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_predecessor_ids();

  // repeated uint64 successor_ids = 21;
  inline int successor_ids_size() const;
  inline void clear_successor_ids();
  static const int kSuccessorIdsFieldNumber = 21;
  inline ::google::protobuf::uint64 successor_ids(int index) const;
  inline void set_successor_ids(int index, ::google::protobuf::uint64 value);
  inline void add_successor_ids(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      successor_ids() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_successor_ids();

  // @@protoc_insertion_point(class_scope:hdmap_proto.Lane)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_direction();
  inline void clear_has_direction();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::hdmap_proto::Id* id_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id > tile_ids_;
  int type_;
  int direction_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveControl > controls_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveAttr > attrs_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::LaneMarking > lane_markings_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficLight > traffic_lights_;
  ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficSign > traffic_signs_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > predecessor_ids_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > successor_ids_;
  friend void  protobuf_AddDesc_lane_2eproto();
  friend void protobuf_AssignDesc_lane_2eproto();
  friend void protobuf_ShutdownFile_lane_2eproto();

  void InitAsDefaultInstance();
  static Lane* default_instance_;
};
// ===================================================================


// ===================================================================

// Lane

// required .hdmap_proto.Id id = 1;
inline bool Lane::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Lane::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Lane::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Lane::clear_id() {
  if (id_ != NULL) id_->::hdmap_proto::Id::Clear();
  clear_has_id();
}
inline const ::hdmap_proto::Id& Lane::id() const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.id)
  return id_ != NULL ? *id_ : *default_instance_->id_;
}
inline ::hdmap_proto::Id* Lane::mutable_id() {
  set_has_id();
  if (id_ == NULL) id_ = new ::hdmap_proto::Id;
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.id)
  return id_;
}
inline ::hdmap_proto::Id* Lane::release_id() {
  clear_has_id();
  ::hdmap_proto::Id* temp = id_;
  id_ = NULL;
  return temp;
}
inline void Lane::set_allocated_id(::hdmap_proto::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:hdmap_proto.Lane.id)
}

// repeated .hdmap_proto.Id tile_ids = 2;
inline int Lane::tile_ids_size() const {
  return tile_ids_.size();
}
inline void Lane::clear_tile_ids() {
  tile_ids_.Clear();
}
inline const ::hdmap_proto::Id& Lane::tile_ids(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.tile_ids)
  return tile_ids_.Get(index);
}
inline ::hdmap_proto::Id* Lane::mutable_tile_ids(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.tile_ids)
  return tile_ids_.Mutable(index);
}
inline ::hdmap_proto::Id* Lane::add_tile_ids() {
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.tile_ids)
  return tile_ids_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >&
Lane::tile_ids() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.tile_ids)
  return tile_ids_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::Id >*
Lane::mutable_tile_ids() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.tile_ids)
  return &tile_ids_;
}

// required .hdmap_proto.Lane.LaneType type = 4;
inline bool Lane::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Lane::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Lane::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Lane::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::hdmap_proto::Lane_LaneType Lane::type() const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.type)
  return static_cast< ::hdmap_proto::Lane_LaneType >(type_);
}
inline void Lane::set_type(::hdmap_proto::Lane_LaneType value) {
  assert(::hdmap_proto::Lane_LaneType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:hdmap_proto.Lane.type)
}

// optional .hdmap_proto.Lane.LaneDirection direction = 5;
inline bool Lane::has_direction() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Lane::set_has_direction() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Lane::clear_has_direction() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Lane::clear_direction() {
  direction_ = 1;
  clear_has_direction();
}
inline ::hdmap_proto::Lane_LaneDirection Lane::direction() const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.direction)
  return static_cast< ::hdmap_proto::Lane_LaneDirection >(direction_);
}
inline void Lane::set_direction(::hdmap_proto::Lane_LaneDirection value) {
  assert(::hdmap_proto::Lane_LaneDirection_IsValid(value));
  set_has_direction();
  direction_ = value;
  // @@protoc_insertion_point(field_set:hdmap_proto.Lane.direction)
}

// repeated .hdmap_proto.CurveControl controls = 6;
inline int Lane::controls_size() const {
  return controls_.size();
}
inline void Lane::clear_controls() {
  controls_.Clear();
}
inline const ::hdmap_proto::CurveControl& Lane::controls(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.controls)
  return controls_.Get(index);
}
inline ::hdmap_proto::CurveControl* Lane::mutable_controls(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.controls)
  return controls_.Mutable(index);
}
inline ::hdmap_proto::CurveControl* Lane::add_controls() {
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.controls)
  return controls_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveControl >&
Lane::controls() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.controls)
  return controls_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveControl >*
Lane::mutable_controls() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.controls)
  return &controls_;
}

// repeated .hdmap_proto.CurveAttr attrs = 7;
inline int Lane::attrs_size() const {
  return attrs_.size();
}
inline void Lane::clear_attrs() {
  attrs_.Clear();
}
inline const ::hdmap_proto::CurveAttr& Lane::attrs(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.attrs)
  return attrs_.Get(index);
}
inline ::hdmap_proto::CurveAttr* Lane::mutable_attrs(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.attrs)
  return attrs_.Mutable(index);
}
inline ::hdmap_proto::CurveAttr* Lane::add_attrs() {
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.attrs)
  return attrs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveAttr >&
Lane::attrs() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.attrs)
  return attrs_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::CurveAttr >*
Lane::mutable_attrs() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.attrs)
  return &attrs_;
}

// repeated .hdmap_proto.LaneMarking lane_markings = 8;
inline int Lane::lane_markings_size() const {
  return lane_markings_.size();
}
inline void Lane::clear_lane_markings() {
  lane_markings_.Clear();
}
inline const ::hdmap_proto::LaneMarking& Lane::lane_markings(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.lane_markings)
  return lane_markings_.Get(index);
}
inline ::hdmap_proto::LaneMarking* Lane::mutable_lane_markings(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.lane_markings)
  return lane_markings_.Mutable(index);
}
inline ::hdmap_proto::LaneMarking* Lane::add_lane_markings() {
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.lane_markings)
  return lane_markings_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::LaneMarking >&
Lane::lane_markings() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.lane_markings)
  return lane_markings_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::LaneMarking >*
Lane::mutable_lane_markings() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.lane_markings)
  return &lane_markings_;
}

// repeated .hdmap_proto.TrafficLight traffic_lights = 9;
inline int Lane::traffic_lights_size() const {
  return traffic_lights_.size();
}
inline void Lane::clear_traffic_lights() {
  traffic_lights_.Clear();
}
inline const ::hdmap_proto::TrafficLight& Lane::traffic_lights(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.traffic_lights)
  return traffic_lights_.Get(index);
}
inline ::hdmap_proto::TrafficLight* Lane::mutable_traffic_lights(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.traffic_lights)
  return traffic_lights_.Mutable(index);
}
inline ::hdmap_proto::TrafficLight* Lane::add_traffic_lights() {
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.traffic_lights)
  return traffic_lights_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficLight >&
Lane::traffic_lights() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.traffic_lights)
  return traffic_lights_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficLight >*
Lane::mutable_traffic_lights() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.traffic_lights)
  return &traffic_lights_;
}

// repeated .hdmap_proto.TrafficSign traffic_signs = 10;
inline int Lane::traffic_signs_size() const {
  return traffic_signs_.size();
}
inline void Lane::clear_traffic_signs() {
  traffic_signs_.Clear();
}
inline const ::hdmap_proto::TrafficSign& Lane::traffic_signs(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.traffic_signs)
  return traffic_signs_.Get(index);
}
inline ::hdmap_proto::TrafficSign* Lane::mutable_traffic_signs(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap_proto.Lane.traffic_signs)
  return traffic_signs_.Mutable(index);
}
inline ::hdmap_proto::TrafficSign* Lane::add_traffic_signs() {
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.traffic_signs)
  return traffic_signs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficSign >&
Lane::traffic_signs() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.traffic_signs)
  return traffic_signs_;
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap_proto::TrafficSign >*
Lane::mutable_traffic_signs() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.traffic_signs)
  return &traffic_signs_;
}

// repeated uint64 predecessor_ids = 20;
inline int Lane::predecessor_ids_size() const {
  return predecessor_ids_.size();
}
inline void Lane::clear_predecessor_ids() {
  predecessor_ids_.Clear();
}
inline ::google::protobuf::uint64 Lane::predecessor_ids(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.predecessor_ids)
  return predecessor_ids_.Get(index);
}
inline void Lane::set_predecessor_ids(int index, ::google::protobuf::uint64 value) {
  predecessor_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:hdmap_proto.Lane.predecessor_ids)
}
inline void Lane::add_predecessor_ids(::google::protobuf::uint64 value) {
  predecessor_ids_.Add(value);
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.predecessor_ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Lane::predecessor_ids() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.predecessor_ids)
  return predecessor_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Lane::mutable_predecessor_ids() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.predecessor_ids)
  return &predecessor_ids_;
}

// repeated uint64 successor_ids = 21;
inline int Lane::successor_ids_size() const {
  return successor_ids_.size();
}
inline void Lane::clear_successor_ids() {
  successor_ids_.Clear();
}
inline ::google::protobuf::uint64 Lane::successor_ids(int index) const {
  // @@protoc_insertion_point(field_get:hdmap_proto.Lane.successor_ids)
  return successor_ids_.Get(index);
}
inline void Lane::set_successor_ids(int index, ::google::protobuf::uint64 value) {
  successor_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:hdmap_proto.Lane.successor_ids)
}
inline void Lane::add_successor_ids(::google::protobuf::uint64 value) {
  successor_ids_.Add(value);
  // @@protoc_insertion_point(field_add:hdmap_proto.Lane.successor_ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
Lane::successor_ids() const {
  // @@protoc_insertion_point(field_list:hdmap_proto.Lane.successor_ids)
  return successor_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
Lane::mutable_successor_ids() {
  // @@protoc_insertion_point(field_mutable_list:hdmap_proto.Lane.successor_ids)
  return &successor_ids_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap_proto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::hdmap_proto::Lane_LaneType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hdmap_proto::Lane_LaneType>() {
  return ::hdmap_proto::Lane_LaneType_descriptor();
}
template <> struct is_proto_enum< ::hdmap_proto::Lane_LaneDirection> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hdmap_proto::Lane_LaneDirection>() {
  return ::hdmap_proto::Lane_LaneDirection_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lane_2eproto__INCLUDED