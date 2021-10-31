//
//  DecimalConvertions.hpp
//  number-system-converter
//
//  Created by hari-007 on 10/5/21.
//
#pragma once
#ifndef DecimalConversions_h
#define DecimalConversions_h


namespace NumSysConv
{
    // Class to do Decimal to Binary, Octal, and Hexadecimal conversions
    class DecimalConversion
    {
    
    public:
        
        // Here actual Decimal to Binary conversion implemented
        std::vector <bool> toBinary(int input) {
            std::vector <bool> binaryNumber(0);
            
            // Every iteration, input/coefficient divided by 2 to get remainder
            while (input != 0) {
                binaryNumber.insert(binaryNumber.begin(), input % 2);
                input /= 2;
            }

            return binaryNumber;
        }
        
        // Here list of Decimal numbers converts to Binary numbers
        std::vector <std::vector <bool>> toBinary(const std::vector <int> input_list) {
            // create output vector with size of input list
            std::vector <std::vector <bool>> output_list(0);
            
            // iterate over given input list and convert each to binary
            for (auto const &eachInput: input_list) {
                output_list.push_back(toBinary(eachInput));
            }
            
            return output_list;
        }
        
        // Here actual Decimal to Octal conversion implemented
        int toOctal(int input) {
            int placevalue = 1, octalNumber = 0;
            
            while (input != 0) {
                octalNumber += (input % 8) * placevalue;
                input /= 8; // For Octal, divide by 8 to get coefficient
                placevalue *= 10;
            }
            
            return octalNumber;
        }

        // Here list of Decimal numbers converts to Octal numbers
        std::vector <int> toOctal(const std::vector <int> input_list) {
            std::vector <int> output_list(0);
            
            for (auto const &eachInput : input_list) {
                output_list.push_back(toOctal(eachInput));
            }
            return output_list;
        }
        
        // Here actual Decimal to Hexadecimal conversion implemented
        std::vector <unsigned char> toHexadecimal(int input) {
            std::vector <unsigned char> hexadecimalNumber(0);
            int temp_result;
            
            while (input != 0) {
                temp_result = (input % 16);

                if (temp_result > 9) {
                    hexadecimalNumber.insert(hexadecimalNumber.begin(), temp_result + 55);
                } else {
                    hexadecimalNumber.insert(hexadecimalNumber.begin(), temp_result + 48);
                }
                input /= 16;
            }

            return hexadecimalNumber;
        }
    
        // Here list of Decimal numbers converts to Hexadecimal numbers
        std::vector <std::vector <unsigned char>> toHexadecimal(const std::vector <int> input_list) {
            // create output vector with size of input list
            std::vector <std::vector <unsigned char>> output_list(0);
            
            // iterate over given input list and convert each to binary
            for (auto const &eachInput: input_list) {
                output_list.push_back(toHexadecimal(eachInput));
            }
            
            return output_list;
        }
    };
}

#endif /* DecimalConvertions_h */
