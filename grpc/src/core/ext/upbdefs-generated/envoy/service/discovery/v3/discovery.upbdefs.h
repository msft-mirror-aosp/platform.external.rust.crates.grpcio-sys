/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/discovery/v3/discovery.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_SERVICE_DISCOVERY_V3_DISCOVERY_PROTO_UPBDEFS_H_
#define ENVOY_SERVICE_DISCOVERY_V3_DISCOVERY_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_service_discovery_v3_discovery_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_service_discovery_v3_DiscoveryRequest_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.service.discovery.v3.DiscoveryRequest");
}

UPB_INLINE const upb_msgdef *envoy_service_discovery_v3_DiscoveryResponse_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.service.discovery.v3.DiscoveryResponse");
}

UPB_INLINE const upb_msgdef *envoy_service_discovery_v3_DeltaDiscoveryRequest_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.service.discovery.v3.DeltaDiscoveryRequest");
}

UPB_INLINE const upb_msgdef *envoy_service_discovery_v3_DeltaDiscoveryRequest_InitialResourceVersionsEntry_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.service.discovery.v3.DeltaDiscoveryRequest.InitialResourceVersionsEntry");
}

UPB_INLINE const upb_msgdef *envoy_service_discovery_v3_DeltaDiscoveryResponse_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.service.discovery.v3.DeltaDiscoveryResponse");
}

UPB_INLINE const upb_msgdef *envoy_service_discovery_v3_Resource_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_service_discovery_v3_discovery_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.service.discovery.v3.Resource");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_SERVICE_DISCOVERY_V3_DISCOVERY_PROTO_UPBDEFS_H_ */
