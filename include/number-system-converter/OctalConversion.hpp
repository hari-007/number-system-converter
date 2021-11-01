//
//  OctalConvertions.hpp
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef OctalConversions_h
#define OctalConversions_h

namespace NumSysConv
{
    // Class to do Octal to Binary, Decimal, and Hexadecimal conversions
    class OctalConversion
    {
    
        std::vector <std::vector<bool>> binaryBasesOfOctalNumber{{0,0,0}, {0,0,1}, {0,1,0},
             {0,1,1}, {1,0,0}, {1,0,1}, {1,1,0}, {1,1,1}};
        
    public:
        
        // Here actual Octal to Binary conversion implemented
        std::vector <bool> toBinary(int input) {
            std::vector <bool> binaryNumber(0);
            
            // Every iteration, take reminder and convert to binary bases of octalnumber
            // and append to the output vector
            while (input != 0) {
                int eachOctalDigit = input % 10;
                binaryNumber.insert(binaryNumber.begin(),
                                    binaryBasesOfOctalNumber[eachOctalDigit].begin(),
                                    binaryBasesOfOctalNumber[eachOctalDigit].end());
                input /= 10;
            }

            return binaryNumber;
        }
        
        // Here list of Octal numbers converts to Binary numbers
        std::vector <std::vector <bool>> toBinary(const std::vector <int> input_list) {
            std::vector <std::vector <bool>> output_list(0);
            
            // iterate over given input list and convert each to binary
            for (auto const &eachInput: input_list) {
                output_list.push_back(toBinary(eachInput));
            }
            
            return output_list;
        }
        
        
        // Here actual Octal to Binary conversion implemented
        int toDecimal(int input) {
            int position = 0, decimalNumber = 0;
            
            while (input != 0) {
                decimalNumber += (input % 10) * pow_8[position];
                position++;
                input /= 10; // For Decimal, divide by 10 to get coefficient
            };
            
            return decimalNumber;
        }
        
        // Here list of Octal numbers converts to Decimal numbers
        std::vector <int> toDecimal(std::vector<int> input_list) {
            std::vector <int> output_list(0);
            
            for (auto const &eachInput : input_list) {
                output_list.push_back(toDecimal(eachInput));
            }
            return output_list;
        }
        
        
        // Here actual Octal to Hexadecimal conversion implemented
        std::string toHexadecimal(int input, BinaryConversion binaryConversion) {
            // First convert octal to binary, then convert binary to Hexadecimal
            std::vector <bool> binaryResult = toBinary(input);
            return binaryConversion.toHexadecimal(binaryResult);
        }
        
        
        // Here list of Octal numbers converts to Hexadecimal numbers
        std::vector <std::string> toHexadecimal(std::vector<int> input_list) {
            std::vector <std::string> output_list(0);
            BinaryConversion binaryConversion;
            for (int eachInput : input_list) {
                output_list.push_back(toHexadecimal(eachInput, binaryConversion));
            }
            
            return output_list;
        }
    
    };
}

#endif /* OctalConvertions_h */
