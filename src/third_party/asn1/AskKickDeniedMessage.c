/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "AskKickDeniedMessage.h"

static int
kickDeniedReason_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
kickDeniedReason_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
kickDeniedReason_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	kickDeniedReason_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
kickDeniedReason_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	kickDeniedReason_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
kickDeniedReason_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	kickDeniedReason_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
kickDeniedReason_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	kickDeniedReason_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
kickDeniedReason_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	kickDeniedReason_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
kickDeniedReason_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	kickDeniedReason_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_INTEGER_enum_map_t asn_MAP_kickDeniedReason_value2enum_4[] = {
	{ 0,	26,	"kickDeniedInvalidGameState" },
	{ 1,	21,	"kickDeniedNotPossible" },
	{ 2,	23,	"kickDeniedTryAgainLater" },
	{ 3,	27,	"kickDeniedAlreadyInProgress" },
	{ 4,	25,	"kickDeniedInvalidPlayerId" }
};
static unsigned int asn_MAP_kickDeniedReason_enum2value_4[] = {
	3,	/* kickDeniedAlreadyInProgress(3) */
	0,	/* kickDeniedInvalidGameState(0) */
	4,	/* kickDeniedInvalidPlayerId(4) */
	1,	/* kickDeniedNotPossible(1) */
	2	/* kickDeniedTryAgainLater(2) */
};
static asn_INTEGER_specifics_t asn_SPC_kickDeniedReason_specs_4 = {
	asn_MAP_kickDeniedReason_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_kickDeniedReason_enum2value_4,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_kickDeniedReason_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_kickDeniedReason_4 = {
	"kickDeniedReason",
	"kickDeniedReason",
	kickDeniedReason_4_free,
	kickDeniedReason_4_print,
	kickDeniedReason_4_constraint,
	kickDeniedReason_4_decode_ber,
	kickDeniedReason_4_encode_der,
	kickDeniedReason_4_decode_xer,
	kickDeniedReason_4_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_kickDeniedReason_tags_4,
	sizeof(asn_DEF_kickDeniedReason_tags_4)
		/sizeof(asn_DEF_kickDeniedReason_tags_4[0]), /* 1 */
	asn_DEF_kickDeniedReason_tags_4,	/* Same as above */
	sizeof(asn_DEF_kickDeniedReason_tags_4)
		/sizeof(asn_DEF_kickDeniedReason_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_kickDeniedReason_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_AskKickDeniedMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AskKickDeniedMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AskKickDeniedMessage, playerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AskKickDeniedMessage, kickDeniedReason),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_kickDeniedReason_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"kickDeniedReason"
		},
};
static ber_tlv_tag_t asn_DEF_AskKickDeniedMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (65 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AskKickDeniedMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* gameId at 549 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 }, /* playerId at 550 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, 0, 0 } /* kickDeniedReason at 552 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AskKickDeniedMessage_specs_1 = {
	sizeof(struct AskKickDeniedMessage),
	offsetof(struct AskKickDeniedMessage, _asn_ctx),
	asn_MAP_AskKickDeniedMessage_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AskKickDeniedMessage = {
	"AskKickDeniedMessage",
	"AskKickDeniedMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AskKickDeniedMessage_tags_1,
	sizeof(asn_DEF_AskKickDeniedMessage_tags_1)
		/sizeof(asn_DEF_AskKickDeniedMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_AskKickDeniedMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_AskKickDeniedMessage_tags_1)
		/sizeof(asn_DEF_AskKickDeniedMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_AskKickDeniedMessage_1,
	3,	/* Elements count */
	&asn_SPC_AskKickDeniedMessage_specs_1	/* Additional specs */
};

