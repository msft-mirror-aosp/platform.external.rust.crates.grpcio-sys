/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/value.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_VALUE_PROTO_UPBDEFS_H_
#define ENVOY_TYPE_MATCHER_V3_VALUE_PROTO_UPBDEFS_H_

#include "upb/reflection/def.h"
#include "upb/reflection/def_pool_internal.h"
#include "upb/port/def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/reflection/def.h"

#include "upb/port/def.inc"

extern _upb_DefPool_Init envoy_type_matcher_v3_value_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_ValueMatcher_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_value_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.ValueMatcher");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_ValueMatcher_NullMatch_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_value_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.ValueMatcher.NullMatch");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_ListMatcher_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_value_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.ListMatcher");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_VALUE_PROTO_UPBDEFS_H_ */
