/*
 * Copyright 2019-present Open Networking Foundation
 * Copyright (c) 2003-2018, Great Software Laboratory Pvt. Ltd.
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __STAGE1_SEC_H_
#define __STAGE1_SEC_H_

/* Common to HSS and MME */
#define AIA_RES_SIZE         8
#define AIA_AUTS_SIZE        14
#define AIA_AUTN_SIZE        16
#define AIA_RAND_SIZE        16
#define AIA_KASME_SIZE       32
#define AIA_NEXT_HOP_SIZE    32

#define HASH_SALT_LEN        7
#define HASH_KEY_LEN         512

#define NAS_INT_KEY_SIZE     16
#define NAS_SEC_KEY_SIZE     16
#define NAS_NEXT_HOP_SIZE    32
#define KENB_SIZE            32
#define HMAC_SIZE            1024

typedef struct RAND {
	unsigned char len;
	unsigned char val[AIA_RAND_SIZE];
} RAND;

typedef struct XRES {
	unsigned char len;
	unsigned char val[AIA_RES_SIZE];
} XRES;

typedef struct AUTS {
	unsigned char len;
	unsigned char val[AIA_AUTS_SIZE];
} AUTS;

typedef struct AUTN {
	unsigned char len;
	unsigned char val[AIA_AUTN_SIZE];
} AUTN;

typedef struct KASME {
	unsigned char len;
	unsigned char val[AIA_KASME_SIZE];
} KASME;

/**
 * @brief Create integrity key
 * @param[in] kasme key
 * @param[in] int_alg Integrity Algorithm Id
 * @param[out] int_key generated integrity key
 * @return void
 */
void create_integrity_key(uint8_t int_alg,
                          unsigned char *kasme, unsigned char *int_key);

/**
 * @brief Create ciphering key
 * @param[in] kasme key
 * @param[in] sec_alg Ciphering Algorithm Id
 * @param[out] sec_key generated ciphering key
 * @return void
 */
void create_ciphering_key(uint8_t sec_alg,
                          unsigned char *kasme, unsigned char *sec_key);

/**
 * @brief Create eNodeB key to exchange in init ctx message
 * @param [in]kasme key
 * @param [out]kenb_key output the generated key
 * @return void
 */
void create_kenb_key(unsigned char *kasme, unsigned char *kenb_key,
		unsigned int seq_no);


void calculate_hmac_sha256(const unsigned char *input_data,
	    int input_data_len, const unsigned char *key,
		int key_length, void *output, unsigned int *out_len);

#endif
