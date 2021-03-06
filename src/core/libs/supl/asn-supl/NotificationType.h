/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-INIT"
 *     found in "../supl-init.asn"
 */

#ifndef _NotificationType_H
#define _NotificationType_H

#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum NotificationType
    {
        NotificationType_noNotificationNoVerification = 0,
        NotificationType_notificationOnly = 1,
        NotificationType_notificationAndVerficationAllowedNA = 2,
        NotificationType_notificationAndVerficationDeniedNA = 3,
        NotificationType_privacyOverride = 4
        /*
         * Enumeration is extensible
         */
    } e_NotificationType;

    /* NotificationType */
    typedef ENUMERATED_t NotificationType_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_NotificationType;
    asn_struct_free_f NotificationType_free;
    asn_struct_print_f NotificationType_print;
    asn_constr_check_f NotificationType_constraint;
    ber_type_decoder_f NotificationType_decode_ber;
    der_type_encoder_f NotificationType_encode_der;
    xer_type_decoder_f NotificationType_decode_xer;
    xer_type_encoder_f NotificationType_encode_xer;
    per_type_decoder_f NotificationType_decode_uper;
    per_type_encoder_f NotificationType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif /* _NotificationType_H_ */
#include <asn_internal.h>
