/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 */

#ifndef	_RANAP_MBMSSynchronisationInformation_H_
#define	_RANAP_MBMSSynchronisationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RANAP_MBMSHCIndicator.h"
#include "RANAP_IPMulticastAddress.h"
#include "RANAP_GTP-TEI.h"
#include "RANAP_ProtocolExtensionContainer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANAP_MBMSSynchronisationInformation */
typedef struct RANAP_MBMSSynchronisationInformation {
	RANAP_MBMSHCIndicator_t	 mBMSHCIndicator;
	RANAP_IPMulticastAddress_t	 iPMulticastAddress;
	RANAP_GTP_TEI_t	 gTPDLTEID;
	RANAP_ProtocolExtensionContainer_t	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANAP_MBMSSynchronisationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANAP_MBMSSynchronisationInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _RANAP_MBMSSynchronisationInformation_H_ */
#include <asn_internal.h>
