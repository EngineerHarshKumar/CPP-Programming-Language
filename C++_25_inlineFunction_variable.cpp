// Don't use the 'inline' keyword in the programming 

/*
when we put 'inline' keyword in front of the function its just a work as a hint to the compiler that this function will be beneficial to expand it...

Inline expansion is a process where a function call is replaced by the code from the called function’s definition.

*/
#include <iostream>
#include <cstdlib>

inline  min( int a , int b ) {
    return ( a > b ) ? a : b ;
}

int main() {

    std::cout << "Hello Inline Function" << '\n' ;
    std::cout << min(22,44) << '\n'  ;

    return EXIT_SUCCESS ;
}