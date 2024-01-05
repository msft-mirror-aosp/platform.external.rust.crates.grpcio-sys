/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/value.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/collections/array_internal.h"
#include "upb/message/internal.h"
#include "upb/mini_table/enum_internal.h"
#include "envoy/type/matcher/v3/value.upb.h"
#include "envoy/type/matcher/v3/number.upb.h"
#include "envoy/type/matcher/v3/string.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_type_matcher_v3_ValueMatcher_submsgs[4] = {
  {.submsg = &envoy_type_matcher_v3_ValueMatcher_NullMatch_msg_init},
  {.submsg = &envoy_type_matcher_v3_DoubleMatcher_msg_init},
  {.submsg = &envoy_type_matcher_v3_StringMatcher_msg_init},
  {.submsg = &envoy_type_matcher_v3_ListMatcher_msg_init},
};

static const upb_MiniTableField envoy_type_matcher_v3_ValueMatcher__fields[6] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, 1, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), -1, 2, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8), -1, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 8), -1, kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 8), -1, 3, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_ValueMatcher_msg_init = {
  &envoy_type_matcher_v3_ValueMatcher_submsgs[0],
  &envoy_type_matcher_v3_ValueMatcher__fields[0],
  UPB_SIZE(8, 16), 6, kUpb_ExtMode_NonExtendable, 6, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
    {0x0008000002010012, &upb_pom_1bt_maxmaxb},
    {0x000800000302001a, &upb_pom_1bt_maxmaxb},
    {0x0008000004000020, &upb_pob1_1bt},
    {0x0008000005000028, &upb_pob1_1bt},
    {0x0008000006030032, &upb_pom_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

const upb_MiniTable envoy_type_matcher_v3_ValueMatcher_NullMatch_msg_init = {
  NULL,
  NULL,
  0, 0, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(255), 0,
};

static const upb_MiniTableSub envoy_type_matcher_v3_ListMatcher_submsgs[1] = {
  {.submsg = &envoy_type_matcher_v3_ValueMatcher_msg_init},
};

static const upb_MiniTableField envoy_type_matcher_v3_ListMatcher__fields[1] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, kUpb_FieldMode_Scalar | (UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_type_matcher_v3_ListMatcher_msg_init = {
  &envoy_type_matcher_v3_ListMatcher_submsgs[0],
  &envoy_type_matcher_v3_ListMatcher__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
  })
};

static const upb_MiniTable *messages_layout[3] = {
  &envoy_type_matcher_v3_ValueMatcher_msg_init,
  &envoy_type_matcher_v3_ValueMatcher_NullMatch_msg_init,
  &envoy_type_matcher_v3_ListMatcher_msg_init,
};

const upb_MiniTableFile envoy_type_matcher_v3_value_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  3,
  0,
  0,
};

#include "upb/port/undef.inc"

