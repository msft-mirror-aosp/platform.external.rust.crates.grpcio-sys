/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/security.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "google/protobuf/descriptor.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Field udpa_annotations_FieldSecurityAnnotation__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(1, 1), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable udpa_annotations_FieldSecurityAnnotation_msginit = {
  NULL,
  &udpa_annotations_FieldSecurityAnnotation__fields[0],
  UPB_SIZE(2, 8), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable *messages_layout[1] = {
  &udpa_annotations_FieldSecurityAnnotation_msginit,
};

extern const upb_MiniTable google_protobuf_FieldOptions_msginit;
extern const upb_MiniTable udpa_annotations_FieldSecurityAnnotation_msginit;
const upb_MiniTable_Extension udpa_annotations_security_ext = {
  {11122993, UPB_SIZE(0, 0), UPB_SIZE(0, 0), 0, 11, kUpb_FieldMode_Scalar | kUpb_LabelFlags_IsExtension | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  &google_protobuf_FieldOptions_msginit,
  {.submsg = &udpa_annotations_FieldSecurityAnnotation_msginit},

};

static const upb_MiniTable_Extension *extensions_layout[1] = {
  &udpa_annotations_security_ext,
};

const upb_MiniTable_File udpa_annotations_security_proto_upb_file_layout = {
  messages_layout,
  NULL,
  extensions_layout,
  1,
  0,
  1,
};

#include "upb/port_undef.inc"

