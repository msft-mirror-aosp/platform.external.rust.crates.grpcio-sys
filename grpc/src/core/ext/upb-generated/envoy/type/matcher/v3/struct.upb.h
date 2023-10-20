/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_STRUCT_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_V3_STRUCT_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_matcher_v3_StructMatcher;
struct envoy_type_matcher_v3_StructMatcher_PathSegment;
typedef struct envoy_type_matcher_v3_StructMatcher envoy_type_matcher_v3_StructMatcher;
typedef struct envoy_type_matcher_v3_StructMatcher_PathSegment envoy_type_matcher_v3_StructMatcher_PathSegment;
extern const upb_MiniTable envoy_type_matcher_v3_StructMatcher_msginit;
extern const upb_MiniTable envoy_type_matcher_v3_StructMatcher_PathSegment_msginit;
struct envoy_type_matcher_v3_ValueMatcher;
extern const upb_MiniTable envoy_type_matcher_v3_ValueMatcher_msginit;



/* envoy.type.matcher.v3.StructMatcher */

UPB_INLINE envoy_type_matcher_v3_StructMatcher* envoy_type_matcher_v3_StructMatcher_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_StructMatcher*)_upb_Message_New(&envoy_type_matcher_v3_StructMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_StructMatcher* envoy_type_matcher_v3_StructMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_StructMatcher* ret = envoy_type_matcher_v3_StructMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_StructMatcher_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_StructMatcher* envoy_type_matcher_v3_StructMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_StructMatcher* ret = envoy_type_matcher_v3_StructMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_StructMatcher_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_StructMatcher_serialize(const envoy_type_matcher_v3_StructMatcher* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_StructMatcher_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_type_matcher_v3_StructMatcher_serialize_ex(const envoy_type_matcher_v3_StructMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_StructMatcher_msginit, options, arena, len);
}
UPB_INLINE bool envoy_type_matcher_v3_StructMatcher_has_path(const envoy_type_matcher_v3_StructMatcher* msg) {
  return _upb_has_submsg_nohasbit(msg, UPB_SIZE(4, 8));
}
UPB_INLINE void envoy_type_matcher_v3_StructMatcher_clear_path(const envoy_type_matcher_v3_StructMatcher* msg) {
  _upb_array_detach(msg, UPB_SIZE(4, 8));
}
UPB_INLINE const envoy_type_matcher_v3_StructMatcher_PathSegment* const* envoy_type_matcher_v3_StructMatcher_path(const envoy_type_matcher_v3_StructMatcher* msg, size_t* len) {
  return (const envoy_type_matcher_v3_StructMatcher_PathSegment* const*)_upb_array_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE bool envoy_type_matcher_v3_StructMatcher_has_value(const envoy_type_matcher_v3_StructMatcher* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_type_matcher_v3_StructMatcher_clear_value(const envoy_type_matcher_v3_StructMatcher* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const upb_Message*) = NULL;
}
UPB_INLINE const struct envoy_type_matcher_v3_ValueMatcher* envoy_type_matcher_v3_StructMatcher_value(const envoy_type_matcher_v3_StructMatcher* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const struct envoy_type_matcher_v3_ValueMatcher*);
}

UPB_INLINE envoy_type_matcher_v3_StructMatcher_PathSegment** envoy_type_matcher_v3_StructMatcher_mutable_path(envoy_type_matcher_v3_StructMatcher* msg, size_t* len) {
  return (envoy_type_matcher_v3_StructMatcher_PathSegment**)_upb_array_mutable_accessor(msg, UPB_SIZE(4, 8), len);
}
UPB_INLINE envoy_type_matcher_v3_StructMatcher_PathSegment** envoy_type_matcher_v3_StructMatcher_resize_path(envoy_type_matcher_v3_StructMatcher* msg, size_t len, upb_Arena* arena) {
  return (envoy_type_matcher_v3_StructMatcher_PathSegment**)_upb_Array_Resize_accessor2(msg, UPB_SIZE(4, 8), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher_PathSegment* envoy_type_matcher_v3_StructMatcher_add_path(envoy_type_matcher_v3_StructMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_StructMatcher_PathSegment* sub = (struct envoy_type_matcher_v3_StructMatcher_PathSegment*)_upb_Message_New(&envoy_type_matcher_v3_StructMatcher_PathSegment_msginit, arena);
  bool ok = _upb_Array_Append_accessor2(msg, UPB_SIZE(4, 8), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_type_matcher_v3_StructMatcher_set_value(envoy_type_matcher_v3_StructMatcher *msg, struct envoy_type_matcher_v3_ValueMatcher* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), struct envoy_type_matcher_v3_ValueMatcher*) = value;
}
UPB_INLINE struct envoy_type_matcher_v3_ValueMatcher* envoy_type_matcher_v3_StructMatcher_mutable_value(envoy_type_matcher_v3_StructMatcher* msg, upb_Arena* arena) {
  struct envoy_type_matcher_v3_ValueMatcher* sub = (struct envoy_type_matcher_v3_ValueMatcher*)envoy_type_matcher_v3_StructMatcher_value(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_ValueMatcher*)_upb_Message_New(&envoy_type_matcher_v3_ValueMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_v3_StructMatcher_set_value(msg, sub);
  }
  return sub;
}

/* envoy.type.matcher.v3.StructMatcher.PathSegment */

UPB_INLINE envoy_type_matcher_v3_StructMatcher_PathSegment* envoy_type_matcher_v3_StructMatcher_PathSegment_new(upb_Arena* arena) {
  return (envoy_type_matcher_v3_StructMatcher_PathSegment*)_upb_Message_New(&envoy_type_matcher_v3_StructMatcher_PathSegment_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_StructMatcher_PathSegment* envoy_type_matcher_v3_StructMatcher_PathSegment_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_type_matcher_v3_StructMatcher_PathSegment* ret = envoy_type_matcher_v3_StructMatcher_PathSegment_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_StructMatcher_PathSegment_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_StructMatcher_PathSegment* envoy_type_matcher_v3_StructMatcher_PathSegment_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_type_matcher_v3_StructMatcher_PathSegment* ret = envoy_type_matcher_v3_StructMatcher_PathSegment_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_type_matcher_v3_StructMatcher_PathSegment_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_type_matcher_v3_StructMatcher_PathSegment_serialize(const envoy_type_matcher_v3_StructMatcher_PathSegment* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_StructMatcher_PathSegment_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_type_matcher_v3_StructMatcher_PathSegment_serialize_ex(const envoy_type_matcher_v3_StructMatcher_PathSegment* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_type_matcher_v3_StructMatcher_PathSegment_msginit, options, arena, len);
}
typedef enum {
  envoy_type_matcher_v3_StructMatcher_PathSegment_segment_key = 1,
  envoy_type_matcher_v3_StructMatcher_PathSegment_segment_NOT_SET = 0
} envoy_type_matcher_v3_StructMatcher_PathSegment_segment_oneofcases;
UPB_INLINE envoy_type_matcher_v3_StructMatcher_PathSegment_segment_oneofcases envoy_type_matcher_v3_StructMatcher_PathSegment_segment_case(const envoy_type_matcher_v3_StructMatcher_PathSegment* msg) {
  return (envoy_type_matcher_v3_StructMatcher_PathSegment_segment_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t);
}
UPB_INLINE bool envoy_type_matcher_v3_StructMatcher_PathSegment_has_key(const envoy_type_matcher_v3_StructMatcher_PathSegment* msg) {
  return _upb_getoneofcase(msg, UPB_SIZE(0, 0)) == 1;
}
UPB_INLINE void envoy_type_matcher_v3_StructMatcher_PathSegment_clear_key(const envoy_type_matcher_v3_StructMatcher_PathSegment* msg) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8), upb_StringView_FromDataAndSize(NULL, 0), UPB_SIZE(0, 0), envoy_type_matcher_v3_StructMatcher_PathSegment_segment_NOT_SET);
}
UPB_INLINE upb_StringView envoy_type_matcher_v3_StructMatcher_PathSegment_key(const envoy_type_matcher_v3_StructMatcher_PathSegment* msg) {
  return UPB_READ_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8), UPB_SIZE(0, 0), 1, upb_StringView_FromString(""));
}

UPB_INLINE void envoy_type_matcher_v3_StructMatcher_PathSegment_set_key(envoy_type_matcher_v3_StructMatcher_PathSegment *msg, upb_StringView value) {
  UPB_WRITE_ONEOF(msg, upb_StringView, UPB_SIZE(4, 8), value, UPB_SIZE(0, 0), 1);
}

extern const upb_MiniTable_File envoy_type_matcher_v3_struct_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_STRUCT_PROTO_UPB_H_ */
