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
                int value = eachChar > 57 ? eachChar - '0' - 7 : eachChar - '0';
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
        long int toDecimal(std::string input) {
            int position = 0;
            long int decimalNumber = 0;
            for (int index = (int)input.length() - 1; index >= 0; index--, position++) {
                // Here checks if char is in range of  0 - 9 which is 48 to 57 or in the
                // range of A - F which starts 65 to 40. So subtracting in between 7
                int value = input[index] > 57 ? input[index] - '0' - 7 : input[index] - '0';
                decimalNumber += value * pow_16[position]; // eachDigit * 16^digit_position
            }
            return decimalNumber;
        }
        
        // Here list of Hexadecimal numbers converts to Decimal numbers
        std::vector <long int> toDecimal(std::vector <std::string> input_list) {
            std::vector <long int> output_list(0);
            
            // iterate over given input list and convert each to binary
            for (auto const &eachInput: input_list) {
                output_list.push_back(toDecimal(eachInput));
            }
            
            return output_list;
        }
        
        // Here actual Hexadecimal to Octal conversion implemented
        int toOctal(std::string input, BinaryConversion binaryConversion) {
            // First convert Hexadecimal to binary, then convert binary to Octal
            std::vector <bool> binaryResult = toBinary(input);
            return binaryConversion.toOctal(binaryResult);
        }
        
        // Here list of Hexadecimal numbers converts to Octal numbers
        std::vector <int> toOctal(std::vector <std::string> input_list) {
            std::vector <int> output_list(0);
            BinaryConversion binaryConversion;
            for (std::string eachInput : input_list) {
                output_list.push_back(toOctal(eachInput, binaryConversion));
            }
            
            return output_list;
        }
    };
}

#endif /* HexaDecimalConvertions_h */
