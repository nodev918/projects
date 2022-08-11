/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/grpc_service.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/grpc_service.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/empty.upb.h"
#include "google/protobuf/struct.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/sensitive.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_submsgs[4] = {
  {.submsg = &envoy_config_core_v3_GrpcService_EnvoyGrpc_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &envoy_config_core_v3_HeaderValue_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService__fields[4] = {
  {1, UPB_SIZE(16, 24), UPB_SIZE(-5, -5), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), UPB_SIZE(-5, -5), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 8), UPB_SIZE(1, 1), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(12, 16), UPB_SIZE(0, 0), 3, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_msginit = {
  &envoy_config_core_v3_GrpcService_submsgs[0],
  &envoy_config_core_v3_GrpcService__fields[0],
  UPB_SIZE(20, 40), 4, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_EnvoyGrpc__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_EnvoyGrpc_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_EnvoyGrpc__fields[0],
  UPB_SIZE(16, 40), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_submsgs[5] = {
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_msginit},
  {.submsg = &google_protobuf_Struct_msginit},
  {.submsg = &google_protobuf_UInt32Value_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc__fields[8] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 24), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(20, 40), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(28, 56), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(36, 72), UPB_SIZE(2, 2), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(40, 80), UPB_SIZE(3, 3), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(44, 88), UPB_SIZE(4, 4), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc__fields[0],
  UPB_SIZE(48, 104), 8, kUpb_ExtMode_NonExtendable, 8, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_submsgs[3] = {
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
  {.submsg = &envoy_config_core_v3_DataSource_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials__fields[3] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(2, 2), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), UPB_SIZE(3, 3), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials__fields[0],
  UPB_SIZE(16, 40), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_GoogleLocalCredentials_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 8), 0, kUpb_ExtMode_NonExtendable, 0, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_submsgs[3] = {
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_msginit},
  {.submsg = &google_protobuf_Empty_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_GoogleLocalCredentials_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials__fields[3] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials__fields[0],
  UPB_SIZE(8, 24), 3, kUpb_ExtMode_NonExtendable, 3, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_submsgs[5] = {
  {.submsg = &google_protobuf_Empty_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_msginit},
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials__fields[7] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 1, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 2, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 3, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), 4, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials__fields[0],
  UPB_SIZE(12, 24), 7, kUpb_ExtMode_NonExtendable, 7, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 4, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials__fields[0],
  UPB_SIZE(16, 40), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_submsgs[1] = {
  {.submsg = &google_protobuf_Any_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), UPB_SIZE(-1, -1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin__fields[0],
  UPB_SIZE(16, 40), 2, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService__fields[9] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(16, 32), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(24, 48), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(32, 64), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(40, 80), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(48, 96), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(56, 112), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(64, 128), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService__fields[0],
  UPB_SIZE(72, 152), 9, kUpb_ExtMode_NonExtendable, 9, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Map | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs__fields[0],
  UPB_SIZE(4, 8), 1, kUpb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-1, -1), kUpb_NoSub, 3, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value__fields[0],
  UPB_SIZE(12, 24), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value_msginit},
};

static const upb_MiniTable_Field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[14] = {
  &envoy_config_core_v3_GrpcService_msginit,
  &envoy_config_core_v3_GrpcService_EnvoyGrpc_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_GoogleLocalCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_msginit,
};

const upb_MiniTable_File envoy_config_core_v3_grpc_service_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  14,
  0,
  0,
};

#include "upb/port_undef.inc"

