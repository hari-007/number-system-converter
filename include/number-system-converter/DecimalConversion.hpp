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
    
    private:
        // Here defines the required memebers for decimal conversions
        const u_int8_t InputMaxSize{ 16 };
        
        // Here actual Decimal to Binary conversion implemented
        std::vector < bool > getBinaryNumber(int input) {
            std::vector < bool > binaryNumber(0);
            int quoficient = input;
            
            for (u_int8_t i = 0; i < InputMaxSize; i++) {
                if (quoficient != 0) {
                    binaryNumber.insert(binaryNumber.end() - i, quoficient % 2);
                    quoficient /= 2;
                } else {
                    binaryNumber.insert(binaryNumber.end() - i, 0);
                }
            }

            return binaryNumber;
        }
        
        // Here actual Decimal to Octal conversion implemented
        void getOctalNumber(int input) {
            
        }
        
        // Here actual Decimal to Hexadecimal conversion implemented
        void getHexadecimalNumber(int input) {
            
        }
        
    public:
        // Returns the Binary converted input number
        void toBinary(int input) {
            std::vector < bool > result = getBinaryNumber(input);
            
            std::cout << input <<  " -> ";
            for (int x: result)
                std::cout << x;
            std::cout << "" << std::endl;
        }
        
        // Returns the Binary converted input list
        void toBinary(int *input_list, int input_length) {
            
            for (int i = 0; i < input_length; i++) {
                std::cout << input_list[i] << " -> ";
                std::vector < bool > result = getBinaryNumber(input_list[i]);
                for (int x: result)
                    std::cout << x;
                std::cout << "" << std::endl;
            }
        }
            
        // Returns the Octal converted input number
        void toOctal(int input) {
            std::cout << "Reached octal conversions" << std::endl;
        }
        
        // Returns the Octal converted input list
        void toOctal(int input_list[]) {
            std::cout << "Reached octal conversions" << std::endl;
        }
        
        // Returns the Hexadecimal converted input list
        void toHexadecimal(int input) {
            std::cout << "Reached hexadecimal conversions" << std::endl;
        }
    
        // Returns the Hexadecimal converted input list
        void toHexadecimal(int input_list[]) {
            std::cout << "Reached hexadecimal conversions" << std::endl;
        }
    };
}

#endif /* DecimalConvertions_h */
