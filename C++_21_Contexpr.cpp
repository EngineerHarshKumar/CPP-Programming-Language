/*
CONSTEXPR
When Ever you defined the variable with 'const' keyword the compiler track whether its a runtime constant or compile time contant with its initializer, but Sometimes we want that this things must be done at compile time so to do that things we are using the contexpr keyword but its not a compile time constant then its will throw the error..

*/

#include <iostream>
#include <cstdlib>
#include <cstdint>

int firstFunction(){
    return 90 ;
}

int main() {

    std::cout << "Hello Contexper" << '\n' ;

    const std::int_fast64_t holdValue { firstFunction() } ;   // Its a runtime Constant
    std::cout << "holdValue: " << holdValue << '\n' ;

    constexpr char character1 { 'L' } ; // its fully comile-time expression
    std::cout << character1 << '\n' ;

    constexpr int value { firstFunction() } ;   // This will throw the error as its not be evalueated as the compile time..
    return EXIT_SUCCESS;
}