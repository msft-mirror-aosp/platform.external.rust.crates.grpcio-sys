/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/proxy_protocol.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/core/v3/proxy_protocol.upbdefs.h"

extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_config_core_v3_ProxyProtocolConfig_msginit;

static const upb_msglayout *layouts[1] = {
  &envoy_config_core_v3_ProxyProtocolConfig_msginit,
};

static const char descriptor[324] = {'\n', ')', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'p', 'r', 
'o', 'x', 'y', '_', 'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', '.', 'p', 'r', 'o', 't', 'o', '\022', '\024', 'e', 'n', 'v', 'o', 'y', 
'.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 
'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 
'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '}', '\n', '\023', 
'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'K', '\n', '\007', 'v', 'e', 
'r', 's', 'i', 'o', 'n', '\030', '\001', ' ', '\001', '(', '\016', '2', '1', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'C', 'o', 
'n', 'f', 'i', 'g', '.', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'R', '\007', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\"', '\031', '\n', '\007', 
'V', 'e', 'r', 's', 'i', 'o', 'n', '\022', '\006', '\n', '\002', 'V', '1', '\020', '\000', '\022', '\006', '\n', '\002', 'V', '2', '\020', '\001', 'B', 'B', 
'\n', '\"', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 
'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', 'B', '\022', 'P', 'r', 'o', 'x', 'y', 'P', 'r', 'o', 't', 'o', 'c', 'o', 
'l', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[3] = {
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_core_v3_proxy_protocol_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/config/core/v3/proxy_protocol.proto",
  UPB_STRVIEW_INIT(descriptor, 324)
};
