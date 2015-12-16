/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU"
 * 	found in "../../asn1/ranap/RANAP-PDU.asn"
 */

#include "RANAP_RAB-SetupItem-RelocReq.h"

static asn_TYPE_member_t asn_MBR_RANAP_RAB_SetupItem_RelocReq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_RAB_SetupItem_RelocReq, rAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rAB-ID"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_RAB_SetupItem_RelocReq, nAS_SynchronisationIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_NAS_SynchronisationIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nAS-SynchronisationIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_RAB_SetupItem_RelocReq, rAB_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_RAB_Parameters,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rAB-Parameters"
		},
	{ ATF_POINTER, 2, offsetof(struct RANAP_RAB_SetupItem_RelocReq, dataVolumeReportingIndication),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_DataVolumeReportingIndication,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dataVolumeReportingIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_RAB_SetupItem_RelocReq, pDP_TypeInformation),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_PDP_TypeInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pDP-TypeInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_RAB_SetupItem_RelocReq, userPlaneInformation),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_UserPlaneInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"userPlaneInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_RAB_SetupItem_RelocReq, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANAP_RAB_SetupItem_RelocReq, iuTransportAssociation),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANAP_IuTransportAssociation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iuTransportAssociation"
		},
	{ ATF_POINTER, 2, offsetof(struct RANAP_RAB_SetupItem_RelocReq, service_Handover),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_Service_Handover,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"service-Handover"
		},
	{ ATF_POINTER, 1, offsetof(struct RANAP_RAB_SetupItem_RelocReq, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANAP_ProtocolExtensionContainer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_RANAP_RAB_SetupItem_RelocReq_oms_1[] = { 1, 3, 4, 8, 9 };
static const ber_tlv_tag_t asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANAP_RAB_SetupItem_RelocReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nAS-SynchronisationIndicator */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rAB-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dataVolumeReportingIndication */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pDP-TypeInformation */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* userPlaneInformation */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* iuTransportAssociation */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* service-Handover */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RANAP_RAB_SetupItem_RelocReq_specs_1 = {
	sizeof(struct RANAP_RAB_SetupItem_RelocReq),
	offsetof(struct RANAP_RAB_SetupItem_RelocReq, _asn_ctx),
	asn_MAP_RANAP_RAB_SetupItem_RelocReq_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RANAP_RAB_SetupItem_RelocReq_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	9,	/* Start extensions */
	11	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RANAP_RAB_SetupItem_RelocReq = {
	"RANAP_RAB-SetupItem-RelocReq",
	"RANAP_RAB-SetupItem-RelocReq",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1,
	sizeof(asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1)
		/sizeof(asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1[0]), /* 1 */
	asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1)
		/sizeof(asn_DEF_RANAP_RAB_SetupItem_RelocReq_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RANAP_RAB_SetupItem_RelocReq_1,
	10,	/* Elements count */
	&asn_SPC_RANAP_RAB_SetupItem_RelocReq_specs_1	/* Additional specs */
};

