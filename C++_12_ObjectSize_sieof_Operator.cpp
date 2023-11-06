/*
Object Size and sizeof Operator

C++ standard does NOT DEFINED the exact size of the any of the fundamental datatype, instead its only defines minimum size ( in bits ) for integral and char types..and leave all the another types to be implementation defined....C++ also does not assume that 1 byte consume 8 bits .

To generalize, an object with n bits ( where n is an integer ) can hold 2^n unique value so we can say that 8-bits or 1 byte has 2^8 which hold the ( 256 ) values , and object which hold the 2 bytes its can hold the  2^16 can hold ( 65536 ) different  values  

sizeof Operator is used to get the size of the object in bytes on a particular machine,
The sizeof Operator is unary operator which take only one operands and its return size in bytes 

NOTE: sizeof does not include the dynamically allocated memory used by the object.
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

int main(){

    std::cout << "Hello ObjectSize sizeof Operator" << '\n' ;
    std::cout << std::left << '\n' ;
    std::cout << std::setw(16) << "bool: " << sizeof(bool) << " bytes\n" ; 
    std::cout << std::setw(16) << "char: " << sizeof(char) << " bytes\n" ;
    std::cout << std::setw(16) << "int: " << sizeof(int) << " bytes\n" ;
    std::cout << std::setw(16) << "short: " << sizeof(short) << " bytes\n" ;
    std::cout << std::setw(16) << "long: " << sizeof(long) << " bytes\n" ;
    std::cout << std::setw(16) << "long long: " << sizeof(long long) << " bytes\n" ;
    std::cout << std::setw(16) << "float: " << sizeof(float) << " bytes\n" ;
    std::cout << std::setw(16) << "double: " << sizeof( double ) << " bytes\n" ;
    std::cout << std::setw(16) << "long double: " << sizeof( long double ) << " bytes\n" ;


    return EXIT_SUCCESS ;
}