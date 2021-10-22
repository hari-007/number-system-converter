//
//  BinaryConvertions.hpp
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef BinaryConversions_h
#define BinaryConversions_h

namespace NumSysConv
{
    // Class to do Decimal to Binary, Octal, and Hexadecimal conversions
    class BinaryConversion
    {
    
    public:
        
        // Here actual Binary to Decimal conversion implemented
        int toDecimal(std::vector <bool> input) {
            int decimalNumber = 0;
            unsigned long inputCount = input.size() - 1;
            // iterate over given input list and convert each to binary
            std::for_each(input.begin(), input.end(), [&] (auto const &eachValue) {
                decimalNumber += int(eachValue) * (1 << inputCount); // eg:  .... 1 * 2^2, 1 * 2^1, 1 * 2^0
                inputCount--;
            });
            return decimalNumber;
        }
        
        // Here list of Binary numbers converts to Decimal numbers
        std::vector <int> toDecimal(std::vector <std::vector <bool>> input_list) {
            std::vector <int> output_list(0);
            
            for (auto const &eachInput : input_list) {
                output_list.push_back(toDecimal(eachInput));
            }
            
            return output_list;
        }
        
        // Here actual Binary to Octal conversion implemented
        int toOctal(std::vector <bool> input) {
            int bitgroup = 0, temp_result = 0;  // Temp value to identify 3 bits group in a total binary number
            int octalNumber = 0, i = 0; // output determining values
            
            std::for_each(input.rbegin(), input.rend(), [&] (auto const &eachValue) {
                if (i > 0 && i%3 == 0) {
                    octalNumber += (pow_10[bitgroup] * temp_result);
                    temp_result = i = 0;
                    bitgroup++;
                }
                // tempSum += integer of eachinput digit * 2^0 or 2^1 or 2^2
                temp_result += int(eachValue) * (1 << i%3); // eg: 1 * 2^0, 1 * 2^1, 1 * 2^2 ....
                i++;
            });
            
            // To add tempSum value into output incase of (input_size%3) != 0 and some tempSum exists
            if (temp_result != 0) {
                octalNumber += (pow_10[bitgroup] * temp_result);
            }
            return octalNumber;
        }
        
        // Here list of Binary numbers converts to Octal numbers
        std::vector <int> toOctal(std::vector <std::vector <bool>> input_list) {
            std::vector <int> output_list;

            for (std::vector <bool> &eachInput : input_list) {
                output_list.push_back(toOctal(eachInput));
            }
            
            return output_list;
        }
        
        // Here actual Binary to Hexadecimal conversion implemented
        std::vector <unsigned char> toHexadecimal(std::vector <bool> input) {
            int bitgroup = 0, temp_result = 0;  // Temp value to identify 3 bits group in a total binary number
            int i = 0; // output determining values
            std::vector <unsigned char> hexadecimalNumber(0);
            
            std::for_each(input.rbegin(), input.rend(), [&] (auto const &eachValue) {
                if (i > 0 && i%4 == 0) {
                    if (temp_result > 9) {
                        hexadecimalNumber.insert(hexadecimalNumber.begin(), temp_result + 55);
                    } else {
                        hexadecimalNumber.insert(hexadecimalNumber.begin(), temp_result + 48);
                    }
                    temp_result = i = 0;
                    bitgroup++;
                }
                
                // tempSum += integer of eachinput digit * 2^0 or 2^1 or 2^2
                temp_result += int(eachValue) * (1 << i%4); // eg: 1 * 2^0, 1 * 2^1, 1 * 2^2, 1* 2^3 ....
                i++;                
            });
            
            // To add tempSum value into output incase of (input_size%3) != 0 and some tempSum exists
            if (temp_result != 0) {
                if (temp_result > 9) {
                    hexadecimalNumber.insert(hexadecimalNumber.begin(), temp_result + 55);
                } else {
                    hexadecimalNumber.insert(hexadecimalNumber.begin(), temp_result + 48);
                }
            }
            return hexadecimalNumber;
        }
        
        // Here list of Binary numbers converts to Octal numbers
        std::vector <std::vector <unsigned char>> toHexadecimal(std::vector <std::vector <bool>> input_list) {
            std::vector <std::vector <unsigned char>> output_list(0);
            
            for (std::vector <bool> eachInput : input_list) {
                output_list.push_back(toHexadecimal(eachInput));
            }
            
            return output_list;
        }
    };
}

#endif /* BinaryConvertions_h */
