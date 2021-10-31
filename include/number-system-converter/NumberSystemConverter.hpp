//
//  NumberSystemConverter .h
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef NumberSystemConverter__h
#define NumberSystemConverter__h

static int pow_8[10] = {
    1, 8, 64, 512, 4096, 32768, 262144, 2097152,
    16777216, 134217728
};

static long int pow_16[10] = {
    1, 16, 256, 4096, 65536, 1048576, 16777216,
    268435456, 4294967296, 68719476736
};

// Actual source header files
#include "BinaryConversion.hpp"
#include "DecimalConversion.hpp"
#include "OctalConversion.hpp"
#include "HexadecimalConversion.hpp"


#endif /* NumberSystemConverter__h */
