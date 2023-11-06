/*
FLOATING POINT
Floating point is a type that allowed you to store the number with fractional component

C++ Allow 3 different type of floating type
1. float,
2. double,
3. long double 

Its work same as the integer there fixed size is not define, the floating type is also not defined the fixed sized jsut minimum guarantee.

C++ follow IEEE 754 binary format to represnt the floating point 

NOTE: std::cout is not print the fractional part if the fractional part is'0'

PRECISION
The precision is define how many significant digit are show without information loss....
std::cout by default have 6 precision which show 6 significant digit without information loss 

OUTPUT MANIPULATOR
The output manipulator is defined how output data will show 
std::setprecision() is an output manipulator

ROUNDING ERROR
When we are lost some precision and can't store data precisly we called Rounding Error..
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>  // For std::setprecision() 

int main () {
    
    std::cout << "Hello Floating Point" << '\n' ;

    float amount { 8968.89f } ;
    std::cout << amount << '\n' ;

    double tax { 78.90 } ;
    std::cout << tax << '\n' ;

    std::cout << 1/3  << '\n' ;
    std::cout << sizeof( long double )  * 8 << " Bits" << '\n';

    double test { 458.9839393 } ;
    std::cout << test << '\n' ;

    std::cout << std::setprecision( 10) ;
    std::cout << test << '\n' ;

    double HH { 89902.9891 } ;
    std::cout << HH << '\n' ;

    double data { 0.1 } ;
    std::cout << data << '\n' ;

    std::cout << std::setprecision(20) ;
    std::cout << data << '\n' ;

    bool JJ { (data == 0.1) } ;

    std::cout << JJ << '\n' ;
    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';
    
    return EXIT_SUCCESS ;   
} 