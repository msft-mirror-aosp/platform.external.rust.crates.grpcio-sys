/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/http/rbac/v3/rbac.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/extensions/filters/http/rbac/v3/rbac.upbdefs.h"
#include "envoy/extensions/filters/http/rbac/v3/rbac.upb.h"

extern _upb_DefPool_Init envoy_config_rbac_v3_rbac_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
static const char descriptor[725] = {'\n', '0', 'e', 'n', 'v', 'o', 'y', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '/', 'f', 'i', 'l', 't', 'e', 'r', 
's', '/', 'h', 't', 't', 'p', '/', 'r', 'b', 'a', 'c', '/', 'v', '3', '/', 'r', 'b', 'a', 'c', '.', 'p', 'r', 'o', 't', 'o', 
'\022', '%', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 'f', 'i', 'l', 't', 'e', 'r', 
's', '.', 'h', 't', 't', 'p', '.', 'r', 'b', 'a', 'c', '.', 'v', '3', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 
'f', 'i', 'g', '/', 'r', 'b', 'a', 'c', '/', 'v', '3', '/', 'r', 'b', 'a', 'c', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 
'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 
'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 
's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\"', '\336', '\001', '\n', '\004', 'R', 'B', 'A', 'C', '\022', '0', '\n', 
'\005', 'r', 'u', 'l', 'e', 's', '\030', '\001', ' ', '\001', '(', '\013', '2', '\032', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 
'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '3', '.', 'R', 'B', 'A', 'C', 'R', '\005', 'r', 'u', 'l', 'e', 's', '\022', '=', '\n', 
'\014', 's', 'h', 'a', 'd', 'o', 'w', '_', 'r', 'u', 'l', 'e', 's', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'b', 'a', 'c', '.', 'v', '3', '.', 'R', 'B', 'A', 'C', 'R', '\013', 's', 
'h', 'a', 'd', 'o', 'w', 'R', 'u', 'l', 'e', 's', '\022', '7', '\n', '\030', 's', 'h', 'a', 'd', 'o', 'w', '_', 'r', 'u', 'l', 'e', 
's', '_', 's', 't', 'a', 't', '_', 'p', 'r', 'e', 'f', 'i', 'x', '\030', '\003', ' ', '\001', '(', '\t', 'R', '\025', 's', 'h', 'a', 'd', 
'o', 'w', 'R', 'u', 'l', 'e', 's', 'S', 't', 'a', 't', 'P', 'r', 'e', 'f', 'i', 'x', ':', ',', '\232', '\305', '\210', '\036', '\'', '\n', 
'%', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'f', 'i', 'l', 't', 'e', 'r', '.', 'h', 't', 't', 'p', 
'.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'R', 'B', 'A', 'C', '\"', '\213', '\001', '\n', '\014', 'R', 'B', 'A', 'C', 'P', 'e', 'r', 
'R', 'o', 'u', 't', 'e', '\022', '?', '\n', '\004', 'r', 'b', 'a', 'c', '\030', '\002', ' ', '\001', '(', '\013', '2', '+', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 'f', 'i', 'l', 't', 'e', 'r', 's', '.', 'h', 't', 't', 
'p', '.', 'r', 'b', 'a', 'c', '.', 'v', '3', '.', 'R', 'B', 'A', 'C', 'R', '\004', 'r', 'b', 'a', 'c', ':', '4', '\232', '\305', '\210', 
'\036', '/', '\n', '-', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'f', 'i', 'l', 't', 'e', 'r', '.', 'h', 
't', 't', 'p', '.', 'r', 'b', 'a', 'c', '.', 'v', '2', '.', 'R', 'B', 'A', 'C', 'P', 'e', 'r', 'R', 'o', 'u', 't', 'e', 'J', 
'\004', '\010', '\001', '\020', '\002', 'B', '\237', '\001', '\n', '3', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 
'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 'f', 'i', 'l', 't', 'e', 'r', 's', '.', 'h', 
't', 't', 'p', '.', 'r', 'b', 'a', 'c', '.', 'v', '3', 'B', '\t', 'R', 'b', 'a', 'c', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 
'S', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', 
'-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 'e', 'x', 't', 'e', 
'n', 's', 'i', 'o', 'n', 's', '/', 'f', 'i', 'l', 't', 'e', 'r', 's', '/', 'h', 't', 't', 'p', '/', 'r', 'b', 'a', 'c', '/', 
'v', '3', ';', 'r', 'b', 'a', 'c', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[4] = {
  &envoy_config_rbac_v3_rbac_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_extensions_filters_http_rbac_v3_rbac_proto_upbdefinit = {
  deps,
  &envoy_extensions_filters_http_rbac_v3_rbac_proto_upb_file_layout,
  "envoy/extensions/filters/http/rbac/v3/rbac.proto",
  UPB_STRINGVIEW_INIT(descriptor, 725)
};
