//
//  NumberSystemConverter.cpp
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <iterator>

#include "NumberSystemConverter.hpp"

// Here all the Decimal to Binary, Octal, and Hexadecimal conversion calls happen
void printDecimalConversions(const std::vector <int> input_list) {
    
    NumSysConv::DecimalConversion decimalConversion;
    
    // Decimal to Binary conversion
    std::cout << "Decimal to Binary List:" << std::endl;
    std::vector <std::vector<bool>> outputBinaryList =
            decimalConversion.toBinary(input_list);
    
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
    std::vector <std::string> outputHexadecimalList =
        decimalConversion.toHexadecimal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::cout << outputHexadecimalList[i] << std::endl;
    }
}

// Here all the Binary to Decimal, Octal, and Hexadecimal conversion calls happen
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
    std::vector <std::string> outputHexadecimalList =
            binaryConversion.toHexadecimal(input_list);

    for (int i = 0; i < input_list.size(); i++) {
        std::copy(input_list[i].begin(),
                  input_list[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));
        std::cout << " -> ";
        std::cout << outputHexadecimalList[i] << std::endl;
    }
}

// Here all the Octal to Binary, Decimal, and Hexadecimal conversion calls happen
void printOctalConversions(const std::vector <int> input_list) {
    NumSysConv::OctalConversion octalConversion;

    
    // Octal to Binary conversion
    std::cout << "Octal to Binary List:" << std::endl;
    std::vector <std::vector<bool>> outputBinaryList = octalConversion.toBinary(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::copy(outputBinaryList[i].begin(),
                  outputBinaryList[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));
        std::cout << std::endl;
    }
    
    // Octal to Decimal conversion
    std::cout << "\n\n" << "Octal to Decimal List:" << std::endl;
    std::vector <int> outputDecimalList = octalConversion.toDecimal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::cout << outputDecimalList[i] << std::endl;
    }
    
    // Octal to Hexadecimal conversion
    std::cout << "\n\n" << "Octal to Hexadecimal List:" << std::endl;
    std::vector <std::string> outputHexadecimalList =
        octalConversion.toHexadecimal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::cout << outputHexadecimalList[i] << std::endl;
    }
}

// Here all the Hexadecimal to Binary, Decimal, and Octal conversion calls happen
void printHexadecimalConversions(const std::vector <std::string> input_list) {
    NumSysConv::HexadecimalConversion hexadecimalConversion;

    
    // Hexadecimal to Binary conversion
    std::cout << "Hexadecimal to Binary List:" << std::endl;
    std::vector <std::vector<bool>> outputBinaryList = hexadecimalConversion.toBinary(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::copy(outputBinaryList[i].begin(),
                  outputBinaryList[i].end(),
                  std::ostream_iterator<bool>(std::cout, ""));
        std::cout << std::endl;
    }
    
    // Hexadecimal to Decimal conversion
    std::cout << "\n\n" << "Hexadecimal to Decimal List:" << std::endl;
    std::vector <long int> outputDecimalList = hexadecimalConversion.toDecimal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::cout << outputDecimalList[i] << std::endl;
    }
    
    // Hexadecimal to Octal conversion
    std::cout << "\n\n" << "Hexadecimal to Octal List:" << std::endl;
    std::vector <int> outputOctalList = hexadecimalConversion.toOctal(input_list);
    for (int i = 0; i < input_list.size(); i++) {
        std::cout << std::left << std::setw(7) << std::setfill(' ');
        std::cout << input_list[i] << " -> ";
        std::cout << outputOctalList[i] << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    printDecimalConversions({ 10, 7, 15, 251, 715 });
    std::cout << "\n------------------------------" << std::endl;
    printBinaryConversions({{1,0,1,0}, {1,1,1}, {1,1,1,1}, {1,1,1,1,1,1,1}, {1,0,1,0,1,0,1,0}});
    std::cout << "\n------------------------------" << std::endl;
    printOctalConversions({ 4, 7, 15, 251, 715 });
    std::cout << "\n------------------------------" << std::endl;
    printHexadecimalConversions({ "4", "7", "A5", "251", "7A" });
    return 0;
}
