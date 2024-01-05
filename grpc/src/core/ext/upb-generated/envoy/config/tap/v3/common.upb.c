/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/tap/v3/common.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/collections/array_internal.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "envoy/config/tap/v3/common.upb.h"
#include "envoy/config/common/matcher/v3/matcher.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/grpc_service.upb.h"
#include "envoy/config/route/v3/route_components.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_config_tap_v3_TapConfig_submsgs[4] = {
  {.submsg = &envoy_config_tap_v3_MatchPredicate_msg_init},
  {.submsg = &envoy_config_tap_v3_OutputConfig_msg_init},
  {.submsg = &envoy_config_core_v3_RuntimeFractionalPercent_msg_init},
  {.submsg = &envoy_config_common_matcher_v3_MatchPredicate_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_TapConfig__fields[4] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 3, 2, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), 4, 3, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_TapConfig_msg_init = {
  &envoy_config_tap_v3_TapConfig_submsgs[0],
  &envoy_config_tap_v3_TapConfig__fields[0],
  UPB_SIZE(24, 40), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_max64b},
    {0x0010000002010012, &upb_psm_1bt_max64b},
    {0x001800000302001a, &upb_psm_1bt_maxmaxb},
    {0x0020000004030022, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_MatchPredicate_submsgs[9] = {
  {.submsg = &envoy_config_tap_v3_MatchPredicate_MatchSet_msg_init},
  {.submsg = &envoy_config_tap_v3_MatchPredicate_MatchSet_msg_init},
  {.submsg = &envoy_config_tap_v3_MatchPredicate_msg_init},
  {.submsg = &envoy_config_tap_v3_HttpHeadersMatch_msg_init},
  {.submsg = &envoy_config_tap_v3_HttpHeadersMatch_msg_init},
  {.submsg = &envoy_config_tap_v3_HttpHeadersMatch_msg_init},
  {.submsg = &envoy_config_tap_v3_HttpHeadersMatch_msg_init},
  {.submsg = &envoy_config_tap_v3_HttpGenericBodyMatch_msg_init},
  {.submsg = &envoy_config_tap_v3_HttpGenericBodyMatch_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_MatchPredicate__fields[10] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, 1, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), -1, 2, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8), -1, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 8), -1, 3, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 8), -1, 4, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(4, 8), -1, 5, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(4, 8), -1, 6, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(4, 8), -1, 7, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {10, UPB_SIZE(4, 8), -1, 8, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_MatchPredicate_msg_init = {
  &envoy_config_tap_v3_MatchPredicate_submsgs[0],
  &envoy_config_tap_v3_MatchPredicate__fields[0],
  UPB_SIZE(8, 16), 10, kUpb_ExtMode_NonExtendable, 10, UPB_FASTTABLE_MASK(120), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
    {0x0008000002010012, &upb_pom_1bt_max64b},
    {0x000800000302001a, &upb_pom_1bt_max64b},
    {0x0008000004000020, &upb_pob1_1bt},
    {0x000800000503002a, &upb_pom_1bt_max64b},
    {0x0008000006040032, &upb_pom_1bt_max64b},
    {0x000800000705003a, &upb_pom_1bt_max64b},
    {0x0008000008060042, &upb_pom_1bt_max64b},
    {0x000800000907004a, &upb_pom_1bt_max64b},
    {0x000800000a080052, &upb_pom_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_MatchPredicate_MatchSet_submsgs[1] = {
  {.submsg = &envoy_config_tap_v3_MatchPredicate_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_MatchPredicate_MatchSet__fields[1] = {
  {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_MatchPredicate_MatchSet_msg_init = {
  &envoy_config_tap_v3_MatchPredicate_MatchSet_submsgs[0],
  &envoy_config_tap_v3_MatchPredicate_MatchSet__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_HttpHeadersMatch_submsgs[1] = {
  {.submsg = &envoy_config_route_v3_HeaderMatcher_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_HttpHeadersMatch__fields[1] = {
  {1, 0, 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_HttpHeadersMatch_msg_init = {
  &envoy_config_tap_v3_HttpHeadersMatch_submsgs[0],
  &envoy_config_tap_v3_HttpHeadersMatch__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_maxmaxb},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_HttpGenericBodyMatch_submsgs[1] = {
  {.submsg = &envoy_config_tap_v3_HttpGenericBodyMatch_GenericTextMatch_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_HttpGenericBodyMatch__fields[2] = {
  {1, 0, 0, kUpb_NoSub, 13, kUpb_FieldMode_Scalar | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_HttpGenericBodyMatch_msg_init = {
  &envoy_config_tap_v3_HttpGenericBodyMatch_submsgs[0],
  &envoy_config_tap_v3_HttpGenericBodyMatch__fields[0],
  UPB_SIZE(8, 16), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000008, &upb_psv4_1bt},
    {0x000800003f000012, &upb_prm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField envoy_config_tap_v3_HttpGenericBodyMatch_GenericTextMatch__fields[2] = {
  {1, UPB_SIZE(4, 8), -1, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, kUpb_NoSub, 12, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_HttpGenericBodyMatch_GenericTextMatch_msg_init = {
  NULL,
  &envoy_config_tap_v3_HttpGenericBodyMatch_GenericTextMatch__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pos_1bt},
    {0x0008000002000012, &upb_pob_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_OutputConfig_submsgs[3] = {
  {.submsg = &envoy_config_tap_v3_OutputSink_msg_init},
  {.submsg = &google_protobuf_UInt32Value_msg_init},
  {.submsg = &google_protobuf_UInt32Value_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_OutputConfig__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 11, kUpb_FieldMode_Array | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 1, 1, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 2, 2, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 1), 0, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_OutputConfig_msg_init = {
  &envoy_config_tap_v3_OutputConfig_submsgs[0],
  &envoy_config_tap_v3_OutputConfig__fields[0],
  UPB_SIZE(24, 32), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_prm_1bt_max64b},
    {0x0010000001010012, &upb_psm_1bt_maxmaxb},
    {0x001800000202001a, &upb_psm_1bt_maxmaxb},
    {0x000100003f000020, &upb_psb1_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_OutputSink_submsgs[4] = {
  {.submsg = &envoy_config_tap_v3_StreamingAdminSink_msg_init},
  {.submsg = &envoy_config_tap_v3_FilePerTapSink_msg_init},
  {.submsg = &envoy_config_tap_v3_StreamingGrpcSink_msg_init},
  {.submsg = &envoy_config_tap_v3_BufferedAdminSink_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_OutputSink__fields[5] = {
  {1, 0, 0, kUpb_NoSub, 5, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsAlternate | (kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, 8, -5, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, 8, -5, 1, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, 8, -5, 2, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, 8, -5, 3, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_OutputSink_msg_init = {
  &envoy_config_tap_v3_OutputSink_submsgs[0],
  &envoy_config_tap_v3_OutputSink__fields[0],
  16, 5, kUpb_ExtMode_NonExtendable, 5, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000008, &upb_psv4_1bt},
    {0x0008000402000012, &upb_pom_1bt_max64b},
    {0x000800040301001a, &upb_pom_1bt_max64b},
    {0x0008000404020022, &upb_pom_1bt_max64b},
    {0x000800040503002a, &upb_pom_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

const upb_MiniTable envoy_config_tap_v3_StreamingAdminSink_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

static const upb_MiniTableSub envoy_config_tap_v3_BufferedAdminSink_submsgs[1] = {
  {.submsg = &google_protobuf_Duration_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_BufferedAdminSink__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 4, kUpb_FieldMode_Scalar | (kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 16), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_BufferedAdminSink_msg_init = {
  &envoy_config_tap_v3_BufferedAdminSink_submsgs[0],
  &envoy_config_tap_v3_BufferedAdminSink__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f000008, &upb_psv8_1bt},
    {0x0010000001000012, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField envoy_config_tap_v3_FilePerTapSink__fields[1] = {
  {1, 0, 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_FilePerTapSink_msg_init = {
  NULL,
  &envoy_config_tap_v3_FilePerTapSink__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_pss_1bt},
  })
};

static const upb_MiniTableSub envoy_config_tap_v3_StreamingGrpcSink_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_GrpcService_msg_init},
};

static const upb_MiniTableField envoy_config_tap_v3_StreamingGrpcSink__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 9, kUpb_FieldMode_Scalar | (kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 24), 1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_config_tap_v3_StreamingGrpcSink_msg_init = {
  &envoy_config_tap_v3_StreamingGrpcSink_submsgs[0],
  &envoy_config_tap_v3_StreamingGrpcSink__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x0018000001000012, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[12] = {
  &envoy_config_tap_v3_TapConfig_msg_init,
  &envoy_config_tap_v3_MatchPredicate_msg_init,
  &envoy_config_tap_v3_MatchPredicate_MatchSet_msg_init,
  &envoy_config_tap_v3_HttpHeadersMatch_msg_init,
  &envoy_config_tap_v3_HttpGenericBodyMatch_msg_init,
  &envoy_config_tap_v3_HttpGenericBodyMatch_GenericTextMatch_msg_init,
  &envoy_config_tap_v3_OutputConfig_msg_init,
  &envoy_config_tap_v3_OutputSink_msg_init,
  &envoy_config_tap_v3_StreamingAdminSink_msg_init,
  &envoy_config_tap_v3_BufferedAdminSink_msg_init,
  &envoy_config_tap_v3_FilePerTapSink_msg_init,
  &envoy_config_tap_v3_StreamingGrpcSink_msg_init,
};

const upb_MiniTableFile envoy_config_tap_v3_common_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  12,
  0,
  0,
};

#include "upb/port/undef.inc"

