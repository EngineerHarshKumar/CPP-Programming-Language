/*

FIXED-WIDTH integer allow you to fix the size of the variable on any architecture 

std::int8_t is treated as a signed charater 
std::uint8_t is treated as a unsigned character 

The Fixed Width Integer is fail to compile on any architecture where its not supported 
The fixed size is sometimes is going to be less performance to resolved it we are using fast and least fixed width integer 

fast integer provide you fastest signed and unsigned integer
least integer provide you smallest signed and unsigned integer 

std::size_t ??
We Know that the sizeof operator will return the integer value but what integer type is it ?? A short, A int , or anyone else.
The sizeof operator return the value of type std::size_t

std::size_t is defined as unsigned integer 

*/

#include <iostream>
#include <cstdlib>
#include <cstdint>  // For fixed-Width Integer
#include <cstddef>  // For std::size_t

int main() {

    std::cout << "Hello Fixed-Width Integer" << '\n' ;

    // Beloe line is define that this variable is fixed size on any architecture 
    std::int16_t value { 90 } ;
    std::cout << value << '\n' ;

    value = 89 ;
    std::cout << value << '\n' ;

    std::int64_t age { 67 } ;
    std::cout << age << '\n' ;

    std::uint64_t ram { 16 } ;
    std::cout << ram << " GB" << '\n' ;

    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

	std::cout << '\n';
	
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

    std::cout << sizeof(std::size_t) * 8 << '\n' ;

    std::int8_t character1 { 50 } ;
    std::cout << character1 << '\n' ;

    return EXIT_SUCCESS ;
} 