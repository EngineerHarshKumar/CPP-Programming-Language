/*
'char' datatype is used to store the character
Character can be a single letter, number , symbol, whitespace

char datatype is an integral type as its store as a integer, Similar as the boolean value is store as 0 and 1.
char is interpret as a ASCII character (American Standard code for information interchange ) .

character are only be store in a single quotes 
example ( 's' , 'k' '@' ) 
*/

#include <iostream>
#include <cstdlib>

int main() {

    char identifier1 { 'A' } ;
    std::cout << identifier1 << '\n' ;

    char identifier2 { 99 } ;
    std::cout << identifier2 << '\n' ;

    char identifier3 { 70 } ;
    std::cout << identifier3 << '\n' ;

    char identifier4 { '/' } ;
    std::cout << identifier4 << '\n' ;

    // Behaviour Undefined
    // char value = 'ty'  ; 
    // std::cout << value << '\n' ;


    return EXIT_SUCCESS ;
}