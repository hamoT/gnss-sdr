/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef	_MsrAssistBTS_R98_ExpOTD_H_
#define	_MsrAssistBTS_R98_ExpOTD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ExpectedOTD.h"
#include "ExpOTDUncertainty.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MsrAssistBTS-R98-ExpOTD */
typedef struct MsrAssistBTS_R98_ExpOTD {
	ExpectedOTD_t	 expectedOTD;
	ExpOTDUncertainty_t	 expOTDUncertainty;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MsrAssistBTS_R98_ExpOTD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MsrAssistBTS_R98_ExpOTD;
extern asn_SEQUENCE_specifics_t asn_SPC_MsrAssistBTS_R98_ExpOTD_specs_1;
extern asn_TYPE_member_t asn_MBR_MsrAssistBTS_R98_ExpOTD_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MsrAssistBTS_R98_ExpOTD_H_ */
#include <asn_internal.h>