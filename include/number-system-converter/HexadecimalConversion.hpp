//
//  HexaDecimalConvertions.h
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef HexadecimalConversion_h
#define HexadecimalConversion_h

#include <string>

namespace NumSysConv
{
    // Class to do Hexadecimal to Binary, Decimal, and Octal conversions
    class HexadecimalConversion
    {
        std::vector <std::vector<bool>> binaryBasesOfHexadecimalNumber{{0,0,0,0},
            {0,0,0,1}, {0,0,1,0}, {0,0,1,1}, {0,1,0,0}, {0,1,0,1}, {0,1,1,0}, {0,1,1,1}, {1,0,0,0},
            {1,0,0,1}, {1,0,1,0}, {1,0,1,1}, {1,1,0,0}, {1,1,0,1}, {1,1,1,0}, {1,1,1,1}};
        
    public:
        
        // Here actual Hexadecimal to Binary conversion implemented
        void toBinary(std::string input) {
            std::cout << "Reached decimal conversions" << std::endl;
        }
        
        // Here list of Hexadecimal numbers converts to Binary numbers
        void toBinary(std::vector <std::string> input_list) {
            std::cout << "Reached decimal conversions" << std::endl;
        }
        
        // Here actual Hexadecimal to Decimal conversion implemented
        void toDecimal(std::string input) {
            std::cout << "Reached decimal conversions" << std::endl;
        }
        
        // Here list of Hexadecimal numbers converts to Decimal numbers
        void toDecimal(std::vector <std::string> input_list) {
            std::cout << "Reached decimal conversions" << std::endl;
        }
        
        // Here actual Hexadecimal to Octal conversion implemented
        void toOctal(std::string input) {
            std::cout << "Reached decimal conversions" << std::endl;
        }
        
        // Here list of Hexadecimal numbers converts to Octal numbers
        void toOctal(std::vector <std::string> input_list) {
            std::cout << "Reached decimal conversions" << std::endl;
        }
    };
}

#endif /* HexaDecimalConvertions_h */
