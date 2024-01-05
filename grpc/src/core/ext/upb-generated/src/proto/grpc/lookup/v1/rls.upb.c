/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/lookup/v1/rls.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/collections/array_internal.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "src/proto/grpc/lookup/v1/rls.upb.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub grpc_lookup_v1_RouteLookupRequest_submsgs[1] = {
  {.submsg = &grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msg_init},
};

static const upb_MiniTableField grpc_lookup_v1_RouteLookupRequest__fields[4] = {
  {3, 8, 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(0, 24), 0, 0, 11, kUpb_FieldMode_Map | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 0), 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(16, 32), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable grpc_lookup_v1_RouteLookupRequest_msg_init = {
  &grpc_lookup_v1_RouteLookupRequest_submsgs[0],
  &grpc_lookup_v1_RouteLookupRequest__fields[0],
  UPB_SIZE(24, 48), 4, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00001a, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000028, &upb_psv4_1bt},
    {0x002000003f000032, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField grpc_lookup_v1_RouteLookupRequest_KeyMapEntry__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 12, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), 0, kUpb_NoSub, 12, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msg_init = {
  NULL,
  &grpc_lookup_v1_RouteLookupRequest_KeyMapEntry__fields[0],
  UPB_SIZE(24, 40), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x001800003f000012, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField grpc_lookup_v1_RouteLookupResponse__fields[2] = {
  {2, UPB_SIZE(4, 0), 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(0, 16), 0, kUpb_NoSub, 9, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable grpc_lookup_v1_RouteLookupResponse_msg_init = {
  NULL,
  &grpc_lookup_v1_RouteLookupResponse__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000012, &upb_pss_1bt},
    {0x001000003f00001a, &upb_prs_1bt},
  })
};

static const upb_MiniTable *messages_layout[3] = {
  &grpc_lookup_v1_RouteLookupRequest_msg_init,
  &grpc_lookup_v1_RouteLookupRequest_KeyMapEntry_msg_init,
  &grpc_lookup_v1_RouteLookupResponse_msg_init,
};

const upb_MiniTableFile src_proto_grpc_lookup_v1_rls_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  3,
  0,
  0,
};

#include "upb/port/undef.inc"

