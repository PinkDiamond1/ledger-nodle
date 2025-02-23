/*******************************************************************************
 *  (c) 2019 - 2022 Zondax AG
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include <stddef.h>
#include <stdint.h>

// Based
// https://github.com/paritytech/substrate/blob/master/node/primitives/src/lib.rs

typedef struct {
    const uint8_t* _ptr;
} pd_AccountId_V5_t;

typedef struct {
    compactInt_t value;
} pd_CompactAccountIndex_V5_t;

typedef struct {
    uint8_t value;
    union {
        pd_AccountId_V5_t id;
        pd_CompactAccountIndex_V5_t index;
        pd_Bytes_t raw;
        const uint8_t* _ptr;
    };
} pd_AccountIdLookupOfT_V5_t;

typedef struct {
    uint32_t value;
} pd_CollectionId_V5_t;

typedef struct {
    uint32_t value;
} pd_ItemId_V5_t;

typedef struct {
    pd_Balance_t value;
} pd_ItemPrice_V5_t;

typedef struct {
    pd_BlockNumber_t height;
    uint32_t index;
} pd_Timepoint_V5_t;

typedef struct {
    pd_AccountId_V5_t accountid;
    pd_BalanceOf_t balance;
} pd_TupleAccountIdBalanceOf_V5_t;

typedef struct {
    pd_Hash_t hash;
} pd_CodeHash_V5_t;

typedef struct {
    pd_Compactu32_t accounts;
    pd_Compactu32_t sufficients;
    pd_Compactu32_t approvals;
} pd_DestroyWitness_V5_t;

typedef struct {
    uint8_t value;
    union {
        pd_AccountId_V5_t id;
        pd_CompactAccountIndex_V5_t index;
        pd_Bytes_t raw;
        const uint8_t* _ptr;
    };
} pd_LookupasStaticLookupSource_V5_t;

typedef struct {
    pd_Call_t call;
} pd_OpaqueCall_V5_t;

typedef struct {
    uint8_t some;
    pd_AccountIdLookupOfT_V5_t contained;
} pd_OptionAccountIdLookupOfT_V5_t;

typedef struct {
    uint8_t some;
    pd_ItemPrice_V5_t contained;
} pd_OptionItemPrice_V5_t;

typedef struct {
    uint8_t some;
    pd_Timepoint_V5_t contained;
} pd_OptionTimepoint_V5_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecTupleAccountIdBalanceOf_V5_t;

typedef struct {
    pd_BlockNumber_t start;
    pd_BlockNumber_t period;
    uint32_t period_count;
    pd_Balance_t balance;
} pd_VestingScheduleOf_V5_t;

typedef struct {
    uint64_t _len;
    uint64_t _lenBuffer;
    const uint8_t* _ptr;
} pd_BoundedVecu8_V5_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Keys_V5_t;

typedef struct {
    uint32_t value;
} pd_MemberCount_V5_t;

typedef struct {
    uint8_t some;
    pd_AccountId_V5_t contained;
} pd_OptionAccountId_V5_t;

typedef struct {
    uint8_t some;
    pd_CollectionId_V5_t contained;
} pd_OptionCollectionId_V5_t;

typedef struct {
    uint8_t some;
    pd_ItemId_V5_t contained;
} pd_OptionItemId_V5_t;

typedef struct {
    uint64_t value;
} pd_OverweightIndex_V5_t;

typedef struct {
    uint32_t value;
} pd_Perbill_V5_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccountId_V5_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecItemId_V5_t;

typedef struct {
    uint64_t value;
} pd_Weight_V5_t;

#ifdef __cplusplus
}
#endif
