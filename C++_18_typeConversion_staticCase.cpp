/*
implicitly type conversion 
The implicitly type conversion is a conversion which is perform by the compiler automatically whenever its required

explicitly type conversion
The explicitly type conversion is a conversion which is happened by the programmer and not by the compiler, Don't confuse yourself I said this this conversion's instruction is provided by the programmer to convert into given type....

NOTE: if you are using the explicitly type conversion you take all the responsibility in case of loss of any data that's responsibility is not taken by Compiler

static_cast<newType>(expressino) 
This is take value at expression and convert its type into newType and its will return new value of type newType

NOTE: static_cast<>() does not perform any kind of range checking 
*/


#include <iostream>
#include <cstdlib>
#include <cstdint>

void printArgument(double x) {
    std::cout << x << '\n' ;
}

int main() {

    std::cout << "Hello Conversion & static_cast" << '\n' ;
    printArgument(33) ;

    char characterX { 'X' } ;
    bool boolTrue { true } ;
    int value { 4450 } ;

    std::cout << characterX << '\n' ;
    std::cout << boolTrue << '\n' ;
    std::cout << value << '\n' ;


    std::cout << "characterX in int: " << static_cast<int>(characterX) << '\n' ;
    std::cout << "BoolTrue in int: " << static_cast<int>(boolTrue) << '\n' ;
    std::cout << "Value in bool: " << static_cast<bool>(value) << '\n' ;


    std::int8_t character2 { 75 } ;
    std::cout << "character2: " << character2 << '\n' ;
    std::cout << "Character2 in int: " << static_cast<int>(character2) << '\n' ;
    std::cout << "Character2 in Char: " << static_cast<char>(character2) << '\n' ;

    return EXIT_SUCCESS ;
}