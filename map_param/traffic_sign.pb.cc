// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: traffic_sign.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "traffic_sign.pb.h"

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

const ::google::protobuf::Descriptor* TrafficSign_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TrafficSign_reflection_ = NULL;
struct TrafficSignOneofInstance {
  const ::hdmap_proto::Circle* cborder_;
  const ::hdmap_proto::Polygon* pborder_;
}* TrafficSign_default_oneof_instance_ = NULL;
const ::google::protobuf::EnumDescriptor* TrafficSign_TrafficSignType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_traffic_5fsign_2eproto() {
  protobuf_AddDesc_traffic_5fsign_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "traffic_sign.proto");
  GOOGLE_CHECK(file != NULL);
  TrafficSign_descriptor_ = file->message_type(0);
  static const int TrafficSign_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, tile_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, type_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(TrafficSign_default_oneof_instance_, cborder_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(TrafficSign_default_oneof_instance_, pborder_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, link_ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, geometry_),
  };
  TrafficSign_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TrafficSign_descriptor_,
      TrafficSign::default_instance_,
      TrafficSign_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, _unknown_fields_),
      -1,
      TrafficSign_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TrafficSign, _oneof_case_[0]),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TrafficSign));
  TrafficSign_TrafficSignType_descriptor_ = TrafficSign_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_traffic_5fsign_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TrafficSign_descriptor_, &TrafficSign::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_traffic_5fsign_2eproto() {
  delete TrafficSign::default_instance_;
  delete TrafficSign_default_oneof_instance_;
  delete TrafficSign_reflection_;
}

void protobuf_AddDesc_traffic_5fsign_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::hdmap_proto::protobuf_AddDesc_id_2eproto();
  ::hdmap_proto::protobuf_AddDesc_geometry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022traffic_sign.proto\022\013hdmap_proto\032\010id.pr"
    "oto\032\016geometry.proto\"\207\024\n\013TrafficSign\022\033\n\002i"
    "d\030\001 \002(\0132\017.hdmap_proto.Id\022 \n\007tile_id\030\002 \003("
    "\0132\017.hdmap_proto.Id\0226\n\004type\030\004 \001(\0162(.hdmap"
    "_proto.TrafficSign.TrafficSignType\022&\n\007cb"
    "order\030\005 \001(\0132\023.hdmap_proto.CircleH\000\022\'\n\007pb"
    "order\030\006 \001(\0132\024.hdmap_proto.PolygonH\000\022\r\n\005v"
    "alue\030\t \001(\002\022!\n\010link_ids\030\n \003(\0132\017.hdmap_pro"
    "to.Id\"\361\021\n\017TrafficSignType\022\013\n\007UNKNOWN\020\000\022\016"
    "\n\nP_Stop_For\020\001\022\016\n\nP_Slow_For\020\002\022\016\n\nP_Give"
    "_Way\020\003\022\013\n\007P_Noway\020\004\022\016\n\nP_No_Entry\020\005\022\020\n\014P"
    "_No_Parking\020\006\022\025\n\021P_No_Long_Parking\020\007\022\023\n\017"
    "P_Parking_Check\020\010\022\016\n\nP_No_Motor\020\t\022\023\n\017P_N"
    "o_Motorcycle\020\n\022\016\n\nP_No_Truck\020\013\022\026\n\022P_No_M"
    "oto_Tricycle\020\014\022\014\n\010P_No_Bus\020\r\022\014\n\010P_No_Car"
    "\020\016\022\020\n\014P_No_Trailer\020\017\022\020\n\014P_No_Tractor\020\020\022\027"
    "\n\023P_No_Cargo_Tricycle\020\021\022\022\n\016P_No_Non_Moto"
    "r\020\022\022\027\n\023P_No_Animal_Vehicle\020\023\022\026\n\022P_No_Hum"
    "an_Vehicle\020\024\022\035\n\031P_No_Human_Cargo_Triangl"
    "e\020\025\022!\n\035P_No_Human_Passenger_Triangle\020\026\022\016"
    "\n\nP_No_Human\020\027\022\022\n\016P_No_Left_Turn\020\030\022\023\n\017P_"
    "No_Right_Turn\020\031\022\030\n\024P_No_Left_Right_Turn\020"
    "\032\022\017\n\013P_No_Foward\020\033\022\025\n\021P_No_Forward_Left\020"
    "\034\022\026\n\022P_No_Forward_Right\020\035\022\017\n\013P_No_Return"
    "\020\036\022\020\n\014P_No_Horning\020\037\022\020\n\014P_Height_Lim\020 \022\017"
    "\n\013P_Width_Lim\020!\022\020\n\014P_Weight_Lim\020\"\022\026\n\022P_W"
    "eight_Lim_wheel\020#\022\017\n\013P_Speed_Lim\020$\022\023\n\017P_"
    "Speed_Lim_Rev\020%\022\020\n\014P_No_Passing\020&\022\022\n\016P_N"
    "o_Dangerous\020\'\022\014\n\010P_Custom\020(\022\013\n\007P_Other\020)"
    "\022\014\n\010W_T_Shap\020*\022\021\n\rW_T_Shap_Left\020+\022\022\n\016W_T"
    "_Shap_Right\020,\022\r\n\tW_T_Shaps\020-\022\013\n\007W_Cross\020"
    ".\022\014\n\010W_Circle\020/\022\014\n\010W_Y_Left\0200\022\r\n\tW_Y_Rig"
    "ht\0201\022\r\n\tW_YB_Left\0202\022\016\n\nW_YB_Right\0203\022\017\n\013W"
    "_Left_Turn\0204\022\020\n\014W_Right_Turn\0205\022\r\n\tW_RL_T"
    "urn\0206\022\r\n\tW_LR_Turn\0207\022\025\n\021W_Continuous_Tur"
    "n\0208\022\010\n\004W_Up\0209\022\n\n\006W_Down\020:\022\025\n\021W_Continuou"
    "s_Down\020;\022\024\n\020W_Accident_Prone\020<\022\014\n\010W_Dang"
    "er\020=\022\021\n\rW_Left_Narrow\020>\022\022\n\016W_Right_Narro"
    "w\020\?\022\017\n\013W_LR_Narrow\020@\022\023\n\017W_Narrow_Bridge\020"
    "A\022\n\n\006W_Slip\020B\022\020\n\014W_Pedestrain\020C\022\016\n\nW_Chi"
    "ldren\020D\022\013\n\007W_Cycle\020E\022\016\n\nW_Disabled\020F\022\017\n\013"
    "W_Side_Wind\020G\022\016\n\nW_Domestic\020H\022\014\n\010W_Anima"
    "l\020I\022\014\n\010W_Tunnel\020J\022\026\n\022W_Tunnel_Headlight\020"
    "K\022\023\n\017W_Traffic_Light\020L\022\022\n\016W_Left_Falling"
    "\020M\022\023\n\017W_Right_Falling\020N\022\020\n\014W_Mount_Left\020"
    "O\022\021\n\rW_Mount_Right\020P\022\r\n\tW_Village\020Q\022\017\n\013W"
    "_Dam_Right\020R\022\016\n\nW_Dam_Left\020S\022\013\n\007W_Ferry\020"
    "T\022\n\n\006W_Ford\020U\022\n\n\006W_Slow\020V\022\021\n\rW_Hump_Brid"
    "ge\020W\022\013\n\007W_Bumpy\020X\022\n\n\006W_Bump\020Y\022\017\n\013W_Low_L"
    "ying\020Z\022\r\n\tW_Working\020[\022\025\n\021W_Guarded_Railw"
    "ay\020\\\022\r\n\tW_Railway\020]\022\023\n\017W_Detour_Around\020^"
    "\022\021\n\rW_Detour_Left\020_\022\022\n\016W_Detour_Right\020`\022"
    "\020\n\014W_Merge_Left\020a\022\021\n\rW_Merge_Right\020b\022\r\n\t"
    "W_Two_Way\020c\022\013\n\007W_Tidal\020d\022\023\n\017W_Keep_Dista"
    "nce\020e\022\030\n\024W_Cross_Intersection\020f\022\024\n\020W_T_I"
    "ntersection\020g\022\023\n\017W_Vehicle_Queue\020h\022\t\n\005W_"
    "Ice\020i\022\n\n\006W_Rain\020j\022\t\n\005W_Fog\020k\022\021\n\rW_Bad_We"
    "ather\020l\022\013\n\007W_Other\020m\022\r\n\tI_Forward\020n\022\017\n\013I"
    "_Left_Turn\020o\022\020\n\014I_Right_Turn\020p\022\022\n\016I_Forw"
    "ard_Left\020q\022\023\n\017I_Forward_Right\020r\022\020\n\014I_Lef"
    "t_Right\020s\022\013\n\007I_Right\020t\022\n\n\006I_Left\020u\022\031\n\025I_"
    "Forward_Left_Stereo\020v\022\032\n\026I_Forward_Right"
    "_Stereo\020w\022\014\n\010I_Circle\020x\022\n\n\006I_Walk\020y\022\n\n\006I"
    "_Honk\020z\022\023\n\017I_Min_Speed_Lim\020{\022\014\n\010I_Motors"
    "\020|\022\020\n\014I_Non_Motors\020}\022\026\n\022I_Pedestrian_Cro"
    "ss\020~\022\013\n\007I_Other\020\177B\n\n\010geometry", 2629);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "traffic_sign.proto", &protobuf_RegisterTypes);
  TrafficSign::default_instance_ = new TrafficSign();
  TrafficSign_default_oneof_instance_ = new TrafficSignOneofInstance;
  TrafficSign::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_traffic_5fsign_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_traffic_5fsign_2eproto {
  StaticDescriptorInitializer_traffic_5fsign_2eproto() {
    protobuf_AddDesc_traffic_5fsign_2eproto();
  }
} static_descriptor_initializer_traffic_5fsign_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* TrafficSign_TrafficSignType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TrafficSign_TrafficSignType_descriptor_;
}
bool TrafficSign_TrafficSignType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const TrafficSign_TrafficSignType TrafficSign::UNKNOWN;
const TrafficSign_TrafficSignType TrafficSign::P_Stop_For;
const TrafficSign_TrafficSignType TrafficSign::P_Slow_For;
const TrafficSign_TrafficSignType TrafficSign::P_Give_Way;
const TrafficSign_TrafficSignType TrafficSign::P_Noway;
const TrafficSign_TrafficSignType TrafficSign::P_No_Entry;
const TrafficSign_TrafficSignType TrafficSign::P_No_Parking;
const TrafficSign_TrafficSignType TrafficSign::P_No_Long_Parking;
const TrafficSign_TrafficSignType TrafficSign::P_Parking_Check;
const TrafficSign_TrafficSignType TrafficSign::P_No_Motor;
const TrafficSign_TrafficSignType TrafficSign::P_No_Motorcycle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Truck;
const TrafficSign_TrafficSignType TrafficSign::P_No_Moto_Tricycle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Bus;
const TrafficSign_TrafficSignType TrafficSign::P_No_Car;
const TrafficSign_TrafficSignType TrafficSign::P_No_Trailer;
const TrafficSign_TrafficSignType TrafficSign::P_No_Tractor;
const TrafficSign_TrafficSignType TrafficSign::P_No_Cargo_Tricycle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Non_Motor;
const TrafficSign_TrafficSignType TrafficSign::P_No_Animal_Vehicle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Human_Vehicle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Human_Cargo_Triangle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Human_Passenger_Triangle;
const TrafficSign_TrafficSignType TrafficSign::P_No_Human;
const TrafficSign_TrafficSignType TrafficSign::P_No_Left_Turn;
const TrafficSign_TrafficSignType TrafficSign::P_No_Right_Turn;
const TrafficSign_TrafficSignType TrafficSign::P_No_Left_Right_Turn;
const TrafficSign_TrafficSignType TrafficSign::P_No_Foward;
const TrafficSign_TrafficSignType TrafficSign::P_No_Forward_Left;
const TrafficSign_TrafficSignType TrafficSign::P_No_Forward_Right;
const TrafficSign_TrafficSignType TrafficSign::P_No_Return;
const TrafficSign_TrafficSignType TrafficSign::P_No_Horning;
const TrafficSign_TrafficSignType TrafficSign::P_Height_Lim;
const TrafficSign_TrafficSignType TrafficSign::P_Width_Lim;
const TrafficSign_TrafficSignType TrafficSign::P_Weight_Lim;
const TrafficSign_TrafficSignType TrafficSign::P_Weight_Lim_wheel;
const TrafficSign_TrafficSignType TrafficSign::P_Speed_Lim;
const TrafficSign_TrafficSignType TrafficSign::P_Speed_Lim_Rev;
const TrafficSign_TrafficSignType TrafficSign::P_No_Passing;
const TrafficSign_TrafficSignType TrafficSign::P_No_Dangerous;
const TrafficSign_TrafficSignType TrafficSign::P_Custom;
const TrafficSign_TrafficSignType TrafficSign::P_Other;
const TrafficSign_TrafficSignType TrafficSign::W_T_Shap;
const TrafficSign_TrafficSignType TrafficSign::W_T_Shap_Left;
const TrafficSign_TrafficSignType TrafficSign::W_T_Shap_Right;
const TrafficSign_TrafficSignType TrafficSign::W_T_Shaps;
const TrafficSign_TrafficSignType TrafficSign::W_Cross;
const TrafficSign_TrafficSignType TrafficSign::W_Circle;
const TrafficSign_TrafficSignType TrafficSign::W_Y_Left;
const TrafficSign_TrafficSignType TrafficSign::W_Y_Right;
const TrafficSign_TrafficSignType TrafficSign::W_YB_Left;
const TrafficSign_TrafficSignType TrafficSign::W_YB_Right;
const TrafficSign_TrafficSignType TrafficSign::W_Left_Turn;
const TrafficSign_TrafficSignType TrafficSign::W_Right_Turn;
const TrafficSign_TrafficSignType TrafficSign::W_RL_Turn;
const TrafficSign_TrafficSignType TrafficSign::W_LR_Turn;
const TrafficSign_TrafficSignType TrafficSign::W_Continuous_Turn;
const TrafficSign_TrafficSignType TrafficSign::W_Up;
const TrafficSign_TrafficSignType TrafficSign::W_Down;
const TrafficSign_TrafficSignType TrafficSign::W_Continuous_Down;
const TrafficSign_TrafficSignType TrafficSign::W_Accident_Prone;
const TrafficSign_TrafficSignType TrafficSign::W_Danger;
const TrafficSign_TrafficSignType TrafficSign::W_Left_Narrow;
const TrafficSign_TrafficSignType TrafficSign::W_Right_Narrow;
const TrafficSign_TrafficSignType TrafficSign::W_LR_Narrow;
const TrafficSign_TrafficSignType TrafficSign::W_Narrow_Bridge;
const TrafficSign_TrafficSignType TrafficSign::W_Slip;
const TrafficSign_TrafficSignType TrafficSign::W_Pedestrain;
const TrafficSign_TrafficSignType TrafficSign::W_Children;
const TrafficSign_TrafficSignType TrafficSign::W_Cycle;
const TrafficSign_TrafficSignType TrafficSign::W_Disabled;
const TrafficSign_TrafficSignType TrafficSign::W_Side_Wind;
const TrafficSign_TrafficSignType TrafficSign::W_Domestic;
const TrafficSign_TrafficSignType TrafficSign::W_Animal;
const TrafficSign_TrafficSignType TrafficSign::W_Tunnel;
const TrafficSign_TrafficSignType TrafficSign::W_Tunnel_Headlight;
const TrafficSign_TrafficSignType TrafficSign::W_Traffic_Light;
const TrafficSign_TrafficSignType TrafficSign::W_Left_Falling;
const TrafficSign_TrafficSignType TrafficSign::W_Right_Falling;
const TrafficSign_TrafficSignType TrafficSign::W_Mount_Left;
const TrafficSign_TrafficSignType TrafficSign::W_Mount_Right;
const TrafficSign_TrafficSignType TrafficSign::W_Village;
const TrafficSign_TrafficSignType TrafficSign::W_Dam_Right;
const TrafficSign_TrafficSignType TrafficSign::W_Dam_Left;
const TrafficSign_TrafficSignType TrafficSign::W_Ferry;
const TrafficSign_TrafficSignType TrafficSign::W_Ford;
const TrafficSign_TrafficSignType TrafficSign::W_Slow;
const TrafficSign_TrafficSignType TrafficSign::W_Hump_Bridge;
const TrafficSign_TrafficSignType TrafficSign::W_Bumpy;
const TrafficSign_TrafficSignType TrafficSign::W_Bump;
const TrafficSign_TrafficSignType TrafficSign::W_Low_Lying;
const TrafficSign_TrafficSignType TrafficSign::W_Working;
const TrafficSign_TrafficSignType TrafficSign::W_Guarded_Railway;
const TrafficSign_TrafficSignType TrafficSign::W_Railway;
const TrafficSign_TrafficSignType TrafficSign::W_Detour_Around;
const TrafficSign_TrafficSignType TrafficSign::W_Detour_Left;
const TrafficSign_TrafficSignType TrafficSign::W_Detour_Right;
const TrafficSign_TrafficSignType TrafficSign::W_Merge_Left;
const TrafficSign_TrafficSignType TrafficSign::W_Merge_Right;
const TrafficSign_TrafficSignType TrafficSign::W_Two_Way;
const TrafficSign_TrafficSignType TrafficSign::W_Tidal;
const TrafficSign_TrafficSignType TrafficSign::W_Keep_Distance;
const TrafficSign_TrafficSignType TrafficSign::W_Cross_Intersection;
const TrafficSign_TrafficSignType TrafficSign::W_T_Intersection;
const TrafficSign_TrafficSignType TrafficSign::W_Vehicle_Queue;
const TrafficSign_TrafficSignType TrafficSign::W_Ice;
const TrafficSign_TrafficSignType TrafficSign::W_Rain;
const TrafficSign_TrafficSignType TrafficSign::W_Fog;
const TrafficSign_TrafficSignType TrafficSign::W_Bad_Weather;
const TrafficSign_TrafficSignType TrafficSign::W_Other;
const TrafficSign_TrafficSignType TrafficSign::I_Forward;
const TrafficSign_TrafficSignType TrafficSign::I_Left_Turn;
const TrafficSign_TrafficSignType TrafficSign::I_Right_Turn;
const TrafficSign_TrafficSignType TrafficSign::I_Forward_Left;
const TrafficSign_TrafficSignType TrafficSign::I_Forward_Right;
const TrafficSign_TrafficSignType TrafficSign::I_Left_Right;
const TrafficSign_TrafficSignType TrafficSign::I_Right;
const TrafficSign_TrafficSignType TrafficSign::I_Left;
const TrafficSign_TrafficSignType TrafficSign::I_Forward_Left_Stereo;
const TrafficSign_TrafficSignType TrafficSign::I_Forward_Right_Stereo;
const TrafficSign_TrafficSignType TrafficSign::I_Circle;
const TrafficSign_TrafficSignType TrafficSign::I_Walk;
const TrafficSign_TrafficSignType TrafficSign::I_Honk;
const TrafficSign_TrafficSignType TrafficSign::I_Min_Speed_Lim;
const TrafficSign_TrafficSignType TrafficSign::I_Motors;
const TrafficSign_TrafficSignType TrafficSign::I_Non_Motors;
const TrafficSign_TrafficSignType TrafficSign::I_Pedestrian_Cross;
const TrafficSign_TrafficSignType TrafficSign::I_Other;
const TrafficSign_TrafficSignType TrafficSign::TrafficSignType_MIN;
const TrafficSign_TrafficSignType TrafficSign::TrafficSignType_MAX;
const int TrafficSign::TrafficSignType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int TrafficSign::kIdFieldNumber;
const int TrafficSign::kTileIdFieldNumber;
const int TrafficSign::kTypeFieldNumber;
const int TrafficSign::kCborderFieldNumber;
const int TrafficSign::kPborderFieldNumber;
const int TrafficSign::kValueFieldNumber;
const int TrafficSign::kLinkIdsFieldNumber;
#endif  // !_MSC_VER

TrafficSign::TrafficSign()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:hdmap_proto.TrafficSign)
}

void TrafficSign::InitAsDefaultInstance() {
  id_ = const_cast< ::hdmap_proto::Id*>(&::hdmap_proto::Id::default_instance());
  TrafficSign_default_oneof_instance_->cborder_ = const_cast< ::hdmap_proto::Circle*>(&::hdmap_proto::Circle::default_instance());
  TrafficSign_default_oneof_instance_->pborder_ = const_cast< ::hdmap_proto::Polygon*>(&::hdmap_proto::Polygon::default_instance());
}

TrafficSign::TrafficSign(const TrafficSign& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:hdmap_proto.TrafficSign)
}

void TrafficSign::SharedCtor() {
  _cached_size_ = 0;
  id_ = NULL;
  type_ = 0;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  clear_has_geometry();
}

TrafficSign::~TrafficSign() {
  // @@protoc_insertion_point(destructor:hdmap_proto.TrafficSign)
  SharedDtor();
}

void TrafficSign::SharedDtor() {
  if (has_geometry()) {
    clear_geometry();
  }
  if (this != default_instance_) {
    delete id_;
  }
}

void TrafficSign::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TrafficSign::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TrafficSign_descriptor_;
}

const TrafficSign& TrafficSign::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_traffic_5fsign_2eproto();
  return *default_instance_;
}

TrafficSign* TrafficSign::default_instance_ = NULL;

TrafficSign* TrafficSign::New() const {
  return new TrafficSign;
}

void TrafficSign::clear_geometry() {
  switch(geometry_case()) {
    case kCborder: {
      delete geometry_.cborder_;
      break;
    }
    case kPborder: {
      delete geometry_.pborder_;
      break;
    }
    case GEOMETRY_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = GEOMETRY_NOT_SET;
}


void TrafficSign::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<TrafficSign*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 37) {
    ZR_(type_, value_);
    if (has_id()) {
      if (id_ != NULL) id_->::hdmap_proto::Id::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  tile_id_.Clear();
  link_ids_.Clear();
  clear_geometry();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TrafficSign::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:hdmap_proto.TrafficSign)
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
        if (input->ExpectTag(18)) goto parse_tile_id;
        break;
      }

      // repeated .hdmap_proto.Id tile_id = 2;
      case 2: {
        if (tag == 18) {
         parse_tile_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_tile_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tile_id;
        if (input->ExpectTag(32)) goto parse_type;
        break;
      }

      // optional .hdmap_proto.TrafficSign.TrafficSignType type = 4;
      case 4: {
        if (tag == 32) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::hdmap_proto::TrafficSign_TrafficSignType_IsValid(value)) {
            set_type(static_cast< ::hdmap_proto::TrafficSign_TrafficSignType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_cborder;
        break;
      }

      // optional .hdmap_proto.Circle cborder = 5;
      case 5: {
        if (tag == 42) {
         parse_cborder:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cborder()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_pborder;
        break;
      }

      // optional .hdmap_proto.Polygon pborder = 6;
      case 6: {
        if (tag == 50) {
         parse_pborder:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pborder()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(77)) goto parse_value;
        break;
      }

      // optional float value = 9;
      case 9: {
        if (tag == 77) {
         parse_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_link_ids;
        break;
      }

      // repeated .hdmap_proto.Id link_ids = 10;
      case 10: {
        if (tag == 82) {
         parse_link_ids:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_link_ids()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(82)) goto parse_link_ids;
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
  // @@protoc_insertion_point(parse_success:hdmap_proto.TrafficSign)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:hdmap_proto.TrafficSign)
  return false;
#undef DO_
}

void TrafficSign::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:hdmap_proto.TrafficSign)
  // required .hdmap_proto.Id id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->id(), output);
  }

  // repeated .hdmap_proto.Id tile_id = 2;
  for (int i = 0; i < this->tile_id_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->tile_id(i), output);
  }

  // optional .hdmap_proto.TrafficSign.TrafficSignType type = 4;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->type(), output);
  }

  // optional .hdmap_proto.Circle cborder = 5;
  if (has_cborder()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->cborder(), output);
  }

  // optional .hdmap_proto.Polygon pborder = 6;
  if (has_pborder()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->pborder(), output);
  }

  // optional float value = 9;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(9, this->value(), output);
  }

  // repeated .hdmap_proto.Id link_ids = 10;
  for (int i = 0; i < this->link_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->link_ids(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:hdmap_proto.TrafficSign)
}

::google::protobuf::uint8* TrafficSign::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:hdmap_proto.TrafficSign)
  // required .hdmap_proto.Id id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->id(), target);
  }

  // repeated .hdmap_proto.Id tile_id = 2;
  for (int i = 0; i < this->tile_id_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->tile_id(i), target);
  }

  // optional .hdmap_proto.TrafficSign.TrafficSignType type = 4;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->type(), target);
  }

  // optional .hdmap_proto.Circle cborder = 5;
  if (has_cborder()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->cborder(), target);
  }

  // optional .hdmap_proto.Polygon pborder = 6;
  if (has_pborder()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->pborder(), target);
  }

  // optional float value = 9;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(9, this->value(), target);
  }

  // repeated .hdmap_proto.Id link_ids = 10;
  for (int i = 0; i < this->link_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        10, this->link_ids(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hdmap_proto.TrafficSign)
  return target;
}

int TrafficSign::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .hdmap_proto.Id id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->id());
    }

    // optional .hdmap_proto.TrafficSign.TrafficSignType type = 4;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional float value = 9;
    if (has_value()) {
      total_size += 1 + 4;
    }

  }
  // repeated .hdmap_proto.Id tile_id = 2;
  total_size += 1 * this->tile_id_size();
  for (int i = 0; i < this->tile_id_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->tile_id(i));
  }

  // repeated .hdmap_proto.Id link_ids = 10;
  total_size += 1 * this->link_ids_size();
  for (int i = 0; i < this->link_ids_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->link_ids(i));
  }

  switch (geometry_case()) {
    // optional .hdmap_proto.Circle cborder = 5;
    case kCborder: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cborder());
      break;
    }
    // optional .hdmap_proto.Polygon pborder = 6;
    case kPborder: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pborder());
      break;
    }
    case GEOMETRY_NOT_SET: {
      break;
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

void TrafficSign::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TrafficSign* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TrafficSign*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TrafficSign::MergeFrom(const TrafficSign& from) {
  GOOGLE_CHECK_NE(&from, this);
  tile_id_.MergeFrom(from.tile_id_);
  link_ids_.MergeFrom(from.link_ids_);
  switch (from.geometry_case()) {
    case kCborder: {
      mutable_cborder()->::hdmap_proto::Circle::MergeFrom(from.cborder());
      break;
    }
    case kPborder: {
      mutable_pborder()->::hdmap_proto::Polygon::MergeFrom(from.pborder());
      break;
    }
    case GEOMETRY_NOT_SET: {
      break;
    }
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      mutable_id()->::hdmap_proto::Id::MergeFrom(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TrafficSign::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrafficSign::CopyFrom(const TrafficSign& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrafficSign::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_id()) {
    if (!this->id().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->tile_id())) return false;
  if (has_cborder()) {
    if (!this->cborder().IsInitialized()) return false;
  }
  if (has_pborder()) {
    if (!this->pborder().IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->link_ids())) return false;
  return true;
}

void TrafficSign::Swap(TrafficSign* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    tile_id_.Swap(&other->tile_id_);
    std::swap(type_, other->type_);
    std::swap(value_, other->value_);
    link_ids_.Swap(&other->link_ids_);
    std::swap(geometry_, other->geometry_);
    std::swap(_oneof_case_[0], other->_oneof_case_[0]);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TrafficSign::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TrafficSign_descriptor_;
  metadata.reflection = TrafficSign_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap_proto

// @@protoc_insertion_point(global_scope)
