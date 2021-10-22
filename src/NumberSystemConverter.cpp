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

void printDecimalConversions(const std::vector <int> input_list) {
    
    NumSysConv::DecimalConversion decimalConversion;
    
    
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

void printBinaryConversions(const std::vector <std::vector<bool>> input_list) {
    
    NumSysConv::BinaryConversion binaryConversion;

    
    // Binary to Decimal conversion
    std::cout << "\n\n" << "Binary to Decimal List:" << std::endl;
    std::vector <int> outputDecimalList = binaryConversion.toDecimal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::copy(input_list[i].begin(),
                  input_list[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));

        std::cout << " -> " << outputDecimalList[i] << std::endl;
    }

    // Binary to Octal conversion
    std::cout << "\n\n" << "Binary to Octal List:" << std::endl;
    std::vector <int> outputOctalList = binaryConversion.toOctal(input_list);

    for (int i = 0; i < input_list.size(); i++) {
        std::copy(input_list[i].begin(),
                  input_list[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));

        std::cout << " -> " << outputOctalList[i] << std::endl;
    }
    
    // Binary to Hexadecimal conversion
    std::cout << "\n\n" << "Binary to Hexadecimal List:" << std::endl;
    std::vector <std::vector <unsigned char>> outputHexadecimal = binaryConversion.toHexadecimal(input_list);

    for (int i = 0; i < input_list.size(); i++) {
        std::copy(input_list[i].begin(),
                  input_list[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));
        std::cout << " -> ";
        std::copy(outputHexadecimal[i].begin(),
                  outputHexadecimal[i].end(),
                  std::ostream_iterator<unsigned char>(std::cout, ""));
        std::cout << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    printDecimalConversions({ 10, 7, 15, 251, 715 });
    std::cout << "\n------------------------------" << std::endl;
    printBinaryConversions({ {1,0,1,0}, {1,1,1}, {1,1,1,1}, {1,1,1,1,1,1,1}, {1,0,1,0,1,0,1,0} });
    return 0;
}
