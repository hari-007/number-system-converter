# number-system-converter

## description:
A sample C++ project with the intention of basic number conversion. Here we considered 4 types of numbers and they are
- **Binary**
- **Decimal**
- **Octal**
- **Hexadecimal**

This project contains 4 header files in `include` directory with each file contains the number system conversion for each type.
And in every class (NumberSystem implementation) of header file converts given list of numbers one type into other 3 types.  

## project structure:

```
├── LICENSE
├── README.md
├── include
│   └── number-system-converter
│       ├── BinaryConversion.hpp
│       ├── DecimalConversion.hpp
│       ├── HexadecimalConversion.hpp
│       ├── NumberSystemConverter.hpp
│       └── OctalConversion.hpp
└── src
    └── NumberSystemConverter.cpp
```

## How to run:
### Develped/Built -- Mac:
- By the time of development this project was build in xcode 13 with `default compiler(Apple CLang)` to build and run.
- The choosen C++ language dialect as `GNU ++20[-std=gnu++20]` and C++ standard library is `libC++ (LLVM C++ Standard Library with C++11 support)`
- The header files include is added as project reference through IDE. So, may not work directly in local setup

### Run/Execute:

#### Mac 
- IMO, With above setting it should work out of the box in your Xcode 13.
- To run 

#### Windows
- May need header files include change + I don't know how to make it run in windows.
- So, please make create a PR with changes and this Readme file update.

#### Linux
- May need header files include change + I don't know how to make it run in Linux.
- So, please make create a PR with changes and this Readme file update.


## Default output

```
Decimal to Binary List:
10      -> 1010
7       -> 111
15      -> 1111
251     -> 11111011
715     -> 1011001011


Decimal to Octal List:
10      -> 12
7       -> 7
15      -> 17
251     -> 373
715     -> 1313


Decimal to Hexadecimal List:
10      -> A
7       -> 7
15      -> F
251     -> FB
715     -> 2CB

------------------------------


Binary to Decimal List:
1010 -> 10
111 -> 7
1111 -> 15
1111111 -> 127
10101010 -> 170


Binary to Octal List:
1010 -> 12
111 -> 7
1111 -> 17
1111111 -> 177
10101010 -> 252


Binary to Hexadecimal List:
1010 -> A
111 -> 7
1111 -> F
1111111 -> 7F
10101010 -> AA

------------------------------
Octal to Binary List:
4       -> 100
7       -> 111
15      -> 001101
251     -> 010101001
715     -> 111001101


Octal to Decimal List:
4       -> 4
7       -> 7
15      -> 13
251     -> 169
715     -> 461


Octal to Hexadecimal List:
4       -> 4
7       -> 7
15      -> D
251     -> A9
715     -> 1CD

------------------------------
Hexadecimal to Binary List:
4       -> 0100
7       -> 0111
A5      -> 10100101
251     -> 001001010001
7A      -> 01111010


Hexadecimal to Decimal List:
4       -> 4
7       -> 7
A5      -> 165
251     -> 593
7A      -> 122


Hexadecimal to Octal List:
4       -> 4
7       -> 7
A5      -> 245
251     -> 1121
7A      -> 172
```
