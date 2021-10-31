//
//  HexaDecimalConvertions.h
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef HexadecimalConversion_h
#define HexadecimalConversion_h

namespace NumSysConv
{
    // Class to do Hexadecimal to Binary, Decimal, and Octal conversions
    class HexadecimalConversion
    {
        // Can also use Map, but don't want to introduce new include as the iteration cost is same
        std::vector <std::vector<bool>> binaryBasesOfHexadecimalNumber{{0,0,0,0},
            {0,0,0,1}, {0,0,1,0}, {0,0,1,1}, {0,1,0,0}, {0,1,0,1}, {0,1,1,0}, {0,1,1,1}, {1,0,0,0},
            {1,0,0,1}, {1,0,1,0}, {1,0,1,1}, {1,1,0,0}, {1,1,0,1}, {1,1,1,0}, {1,1,1,1}};
        
    public:
        
        // Here actual Hexadecimal to Binary conversion implemented
        std::vector <bool> toBinary(std::string input) {
            std::vector <bool> outputVector(0);
            for (char const &eachChar: input) {
                // Here converts the char to int numerical value
                int value = eachChar - '0';
                outputVector.insert(outputVector.end(),
                                    binaryBasesOfHexadecimalNumber[value].begin(),
                                    binaryBasesOfHexadecimalNumber[value].end());
            }
            return outputVector;           
        }
        
        // Here list of Hexadecimal numbers converts to Binary numbers
        std::vector <std::vector <bool>> toBinary(std::vector <std::string> input_list) {
            std::vector <std::vector <bool>> output_list(0);
            
            // iterate over given input list and convert each to binary
            for (auto const &eachInput: input_list) {
                output_list.push_back(toBinary(eachInput));
            }
            
            return output_list;
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
