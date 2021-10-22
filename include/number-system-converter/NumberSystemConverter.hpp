//
//  NumberSystemConverter .h
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef NumberSystemConverter__h
#define NumberSystemConverter__h

static int pow_10[10] = {
        1, 10, 100, 1000, 10000, 100000, 1000000,
        10000000, 100000000, 1000000000
    };

#include "BinaryConversion.hpp"
#include "DecimalConversion.hpp"
#include "OctalConversion.hpp"
#include "HexadecimalConversion.hpp"


#endif /* NumberSystemConverter__h */
