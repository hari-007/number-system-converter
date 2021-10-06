//
//  NumberSystemConverter.cpp
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.

#include <stdlib.h>
#include <iostream>
#include "NumberSystemConverter.hpp"


int main(int argc, const char * argv[]) {
    
    NumSysConv::DecimalConversion decimalConversion;

    decimalConversion.toBinary(15);
    
//    int input_list[] = { 22, 8, 500, 127, 16385 };
//    decimalConversion.toBinary(input_list, sizeof(input_list));
    return 0;
}
