/*
CONSTANT
The constant is value that never will be change in program's execution.

C++ have 2 Types of contant

1. Named Constant
2. Literal Constant

1. Named constant is constant value which associated to the identifier
2. Literal Constant is constant value which is not associated to the identifier

Types of named constant....
1. constant variable
2. Enumerated constants
3. object-like marcro with subsitution text

CONSTANT VARIABLE
Constant variable is variable which is never will be changes

Const variable must be initialized

NOTE: don't use const at parameter in function as its redundant
NOTE: don't user const at return value as its make low performance

TYPE QUALIFIER
Type Qualifier is keyword that used to change the behaviour of type
Example : const is an example of Type Qualifier as its change the behaviour of type

VOLATILE
The volatile is an another constant which is used to tell the compiler that an object may be change its value anytimes
Sometimes const and volatile qualifier refered to the "cv-qualifiers" 
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

void printSomethings( const int x ) {
    std::cout << "X: " << x << '\n' ;
}

const double returnValue( int K ) {
    return ( K + 0.890 ) ;
}

int main() {

    std::cout << "Hello Constant in C++" << '\n' ;
    
    const int amount { 90'000 } ;
    std::cout << amount << '\n' ;

    const double tax { 789.981 } ;
    std::cout << tax << '\n' ;

    printSomethings(amount) ;
    std::cout << std::setprecision(10) ;
    std::cout << returnValue(tax) << '\n' ;



    return EXIT_SUCCESS ;
}