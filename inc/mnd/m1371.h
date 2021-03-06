/*
 ============================================================================
 Name        : m1371.h
 Author      : Malcolm Herring
 Version     : 0.1
 Description : Marine Network Data Library
 Copyright   : © 2016 Malcolm Herring.
 This file is part of libmnd.
 ============================================================================
 */

#ifndef m1371_h
#define m1371_h

#include <unistd.h>
#include <stdint.h>

typedef enum { MESG, ATON, NSTS, TYPE } MLU;

// Function to convert M.1371 encapsulated data to text.

extern char* translateM1371(uint8_t encData[], int encLen, int pad);

// encData is encapsulated data array
// encLen is number of valis bytes in encData
// pad is number of padding bytes
// Return value: pointer to conversion string

// Function to access M.1371 lookup tables.

extern char* lookupM1371(int val, MLU tab);

// val is enumeration value
// tab table to be used
// Return value: pointer to conversion string

#endif /* m1371_h */
