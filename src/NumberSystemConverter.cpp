//
//  NumberSystemConverter.cpp
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <algorithm>

#include "NumberSystemConverter.hpp"

void printDecimalConversions() {
    
    NumSysConv::DecimalConversion decimalConversion;
    const std::vector <int> input_list({ 10, 7, 15, 251, 715 });

    
    // Decimal to Binary conversion
    std::cout << "Decimal to Binary List:" << std::endl;
    std::vector <std::vector<bool>> outputBinaryList = decimalConversion.toBinary(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::copy(outputBinaryList[i].begin(),
                  outputBinaryList[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));
        std::cout << std::endl;
    }
    
    // Decimal to Octal conversion
    std::cout << "\n\n" << "Decimal to Octal List:" << std::endl;
    std::vector <int> outputOctalList = decimalConversion.toOctal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::cout << outputOctalList[i] << std::endl;
    }
    
    // Decimal to Hexadecimal conversion
    std::cout << "\n\n" << "Decimal to Hexadecimal List:" << std::endl;
    std::vector <std::vector<unsigned char>> outputHexadecimalList =
        decimalConversion.toHexadecimal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::copy(outputHexadecimalList[i].begin(),
                  outputHexadecimalList[i].end(),
                  std::ostream_iterator<unsigned char>(std::cout, ""));
        std::cout << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    printDecimalConversions();
    return 0;
}
