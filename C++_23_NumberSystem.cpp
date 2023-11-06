/*
Decimal number system contain 0 to 9 ( 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 )
Decimal has base 10
By default all value is Decimal.

Binary number System contain only 2 number ( 0, 1 ) 
Binary has base 2

ocatal number system contain 0 to 7 ( 0, 1, 2, 3, 4, 5, 6, 7 ) 
Octal has base 7
To determine octal number system you have to put 0 before number 
example 056 this is ocatal number 089 this is not a ocatal number as its contain the 8 and 9 number which is not exist in octal number 

Hexadecimal number system
Its called base 16 as its contain 16 digit number
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 
Here A = 10, B = 11, C = 12, D = 13, E = 14, F = 15

To Define Hexadecimal '0x' before the number as its indicate its a hexadecimal 

To define the Binary numbers system use '0b'

OUTPUTING THE NUMBER SYSTEM

By default C++ return the value in decimal
And You can change its 

std::dec for decimal
std::oct for octal 
std::hex for Hexadeciaml 

ouputing the binary its little bit harder for std::cout as its not capable for printing the output...
C++ standard include the std::bitset type  its include the <bitset> ( harder ) 


*/

#include <iostream>
#include <bitset>
#include <cstdlib>
// #include <print>
// #include <print>

int main() {

    std::cout << "Hello Number System" << '\n' ;

    int age { 90 } ;                         // Decimal
    int amountInOctal { 012 } ;              // Octal ( 0 indicate its a octal )    
    std::cout << amountInOctal << '\n' ;

    int joining { 0xF } ;                   // Its a Hexadecimal 
    std::cout << joining << '\n' ;

    int n { 0x00040 } ;                     // its before C++14
    std::cout << n << '\n' ;


    int kill { 0b1010 } ;
    std::cout << kill << '\n' ;

    int joker { 0b100 } ;
    std::cout << joker << '\n' ;

    int ss { 0xFA8 } ;
    std::cout << std::hex ;
    std::cout << ss << '\n' ;

    int ty { 04567 } ;
    std::cout << std::oct ;
    std::cout << ty << '\n' ;
    std::cout << std::dec ;
    std::cout << ty << '\n' ;

    std::bitset<32> working { 0b101010001011001010111100001110100010111 } ;
    std::cout << working << '\n' ;
    std::cout << sizeof(working) << '\n' ;

    std::bitset<8> popping { 0b1010111 } ;
    // std::print("{:#b}\n" , popping ) ;

    return EXIT_SUCCESS ;
}