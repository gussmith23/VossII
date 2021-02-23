//-------------------------------------------------------------------
// Copyright 2020 Markus Aronsson
// SPDX-License-Identifier: Apache-2.0
//-------------------------------------------------------------------

/******************************************************************************/
/*                                                                            */
/*     Original author: Markus Aronsson, 2020                                 */
/*                                                                            */
/******************************************************************************/
/* iso.h -- header for iso.c */
#ifdef EXPORT_FORWARD_DECL
// Forward declarations that need to be exported to earlier .h files -----------

// Function prototypes for public functions ------------------------------------
void	    Iso_Init();
void	    Iso_Install_Functions();

#else /* EXPORT_FORWARD_DECL */
// Main include file -----------------------------------------------------------
#ifndef ISO_H
#define ISO_H

#include "fl.h"

typedef struct tbl_rec *tbl_ptr;
typedef struct tbl_rec {
    hash_record_ptr inps;
    hash_record_ptr outs;
    tbl_ptr         next;
} tbl_rec;

typedef struct mat_rec *mat_ptr;
typedef struct mat_rec {
    bool  **mat;
    unint rows;
    unint cols;
} mat_rec;

#endif /* ISO_H */
#endif /* EXPORT_FORWARD_DECL */
