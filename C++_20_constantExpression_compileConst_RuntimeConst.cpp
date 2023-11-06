/*
THE AS-IF RULE
The as-if rule says that the compiler can modify a program however it likes in order to produce more optimized code, so long as those
modifications do not affect a program’s “observable behavior”.

CONSTANT EXPRESSION
The constant expression is the expression which can be evaluated by the compiler at the compile-time.

RUNTIME EXPRESSION
The Runtime Expression is the expressino that must be evaluated at the runtime ( when program execute ).

COMPILE-TIME CONSTANT
The compile-time constant is constant whose value is constant expression 

RUNTIME-CONSTANT
The runtime constant is the constant whose value cannot be determined until the runtime

*/

#include <iostream>
#include <cstdlib>
#include <cstdint>

int main() {

    std::cout << "Hello Constant Expression, CompileTime constant, RunTime Constant" << '\n' ;

    // Here ( 89 + 90 ) is an constant expression as it can be evaluated at the compile.
    const std::int_fast64_t value { 89 + 90 } ;
    std::cout << "Value: " << value << '\n' ;

    std::cout << "Enter the value: " ;
    std::int_fast64_t userInput {} ;
    std::cin >> userInput ;

    std::cout << "UserINput: " << userInput ;

    return EXIT_SUCCESS ;
}