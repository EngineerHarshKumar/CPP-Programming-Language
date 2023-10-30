/*
PREPROSSORS

When you compile your code by the compiler, you may expect that compiler compile the code excatlly as its written right ?? But its  not that things..
Before compilation, its passed through PREPROCESSING phase where program called preprocessor makes various some changes but don't worry its not make original code which you write.
All changes are made temporary in memory , the main work of preprocessor is to process '#include directive' 
When the preprocessor finished the code the result is called the TRANSALATION UNIT and this translation unit is compile by the compiler

The entire process of preprocessing, compilation, linking is called TRANSALTION

PREPROCESSOR DIRECTIVE is just a instruction which start from '#' and and end with new line not semicolon
You are already see some preprocessor directive like #inlucde <iostream>, through preprocessing process the preprocessor directive are convert to the content of the file which are you want to include into your code

MACRO DEFINE

#define directive are used to create macro in your code 
 In C++, a MACRO is a rule that defines how input text is converted into replacement output text.

its Basically of two types 
1. Object-like macro
2. Function-like macro

Function-like macro served similar as the normal function 
Object-like macro can be defined by 2 ways

1. #define IDENTIFIER
2. #define IDENTIFIER SUBSTITUION_TEXT

When ever are you define the macro with the substitution text the identifier which used in code is change to the substitution text

Object-like macro without substitution text....
Macros of this form work like you might expect: any further occurrence of the identifier is removed and replaced by nothing!

CONDITIONAL COMPILATION PREPROCESSOR DIRECTIVE
The Conditional Compilation preprocessor directive is a way to allow you to decide under what condition the code will compile or not.

#ifdef, #ifndef, and #endif

#ifdef preprocessor directive allowed the preprocessor to check whether the identifier is previousaly #define or not, if its positively define then its compile otherwise its not to compile..to the matching #endif

#ifndef preprocessor directive is opposite of the previous one ( #ifdef ) , it mean if identifier is not defined then its will be compiler otherwise not to the corrosponding #endif


Directives defined in one code file do not have impact on other code files in the same project
*/

#include <iostream>
#include <cstdlib>
#define LAPTOP "Dell"
#define INTERNET 

int main() {

    std::cout << "Hello C++ Preprocessors" << '\n' ;
    std::cout << "Laptop Brand: " << LAPTOP << '\n' ;

    // Try to access JOKER macro which defined outside, at the end of the 'main()' function
    // std::cout << JOKER << '\n' ;
    // Now we are learn that directives are only valid from the point of definition to the end of the file in which they are defined, we cannot access the directive before its declarartion 

    // LAPTOP = 90 ;
    // All macro is read-only we cannot reassign value to it ...

#ifdef LAPTOP

    std::cout << "My Favourite Brand" << '\n' ;
#endif // LAPTOP

#ifndef Box
    std::cout << "Box is not defined" << '\n' ;
#endif // Box

#ifdef INTERNET
    std::cout << "Internt is defined" << '\n' ;
#endif // INTERNET
    
    return EXIT_SUCCESS ;
}

#define JOKER "Villen" 
