/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/clusters/aggregate/v3/cluster.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_CLUSTERS_AGGREGATE_V3_CLUSTER_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_CLUSTERS_AGGREGATE_V3_CLUSTER_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_extensions_clusters_aggregate_v3_ClusterConfig;
typedef struct envoy_extensions_clusters_aggregate_v3_ClusterConfig envoy_extensions_clusters_aggregate_v3_ClusterConfig;
extern const upb_msglayout envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit;


/* envoy.extensions.clusters.aggregate.v3.ClusterConfig */

UPB_INLINE envoy_extensions_clusters_aggregate_v3_ClusterConfig *envoy_extensions_clusters_aggregate_v3_ClusterConfig_new(upb_arena *arena) {
  return (envoy_extensions_clusters_aggregate_v3_ClusterConfig *)_upb_msg_new(&envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit, arena);
}
UPB_INLINE envoy_extensions_clusters_aggregate_v3_ClusterConfig *envoy_extensions_clusters_aggregate_v3_ClusterConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_clusters_aggregate_v3_ClusterConfig *ret = envoy_extensions_clusters_aggregate_v3_ClusterConfig_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit, arena)) ? ret : NULL;
}
UPB_INLINE envoy_extensions_clusters_aggregate_v3_ClusterConfig *envoy_extensions_clusters_aggregate_v3_ClusterConfig_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  envoy_extensions_clusters_aggregate_v3_ClusterConfig *ret = envoy_extensions_clusters_aggregate_v3_ClusterConfig_new(arena);
  return (ret && _upb_decode(buf, size, ret, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *envoy_extensions_clusters_aggregate_v3_ClusterConfig_serialize(const envoy_extensions_clusters_aggregate_v3_ClusterConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_clusters_aggregate_v3_ClusterConfig_msginit, arena, len);
}

UPB_INLINE upb_strview const* envoy_extensions_clusters_aggregate_v3_ClusterConfig_clusters(const envoy_extensions_clusters_aggregate_v3_ClusterConfig *msg, size_t *len) { return (upb_strview const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE upb_strview* envoy_extensions_clusters_aggregate_v3_ClusterConfig_mutable_clusters(envoy_extensions_clusters_aggregate_v3_ClusterConfig *msg, size_t *len) {
  return (upb_strview*)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE upb_strview* envoy_extensions_clusters_aggregate_v3_ClusterConfig_resize_clusters(envoy_extensions_clusters_aggregate_v3_ClusterConfig *msg, size_t len, upb_arena *arena) {
  return (upb_strview*)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_extensions_clusters_aggregate_v3_ClusterConfig_add_clusters(envoy_extensions_clusters_aggregate_v3_ClusterConfig *msg, upb_strview val, upb_arena *arena) {
  return _upb_array_append_accessor2(msg, UPB_SIZE(0, 0), UPB_SIZE(3, 4), &val,
      arena);
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_EXTENSIONS_CLUSTERS_AGGREGATE_V3_CLUSTER_PROTO_UPB_H_ */
