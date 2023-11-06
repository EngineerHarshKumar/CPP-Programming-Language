/*
Boolean is not stored as the boolean value "true" and "false" but its store as a integer like "0" for false and "1" for true and that's a reason we called its an integral type

std::boolalpha use to print boolean value as true or false
std::noboolalpha is used to turn if off to use default way to print booleans value 1 for true or 0 for false 



*/

#include <iostream>
#include <cstdlib>  // for EXIT_SUCCESS
#include <iomanip>  // for input & output manipulator
#include <cstdint>  // for fixed-wdith integer
#include <cstddef>  // for std::size_t
#include <typeinfo> // for typeid

int main() {

    bool identifier1 { true } ;
    bool identifier2 { false } ;

    std::cout << identifier1 << ' ' << identifier2 << '\n' ;

    // If we need to print ouput as the "true" and "False" we use std::boolalpha 
    std::cout << std::boolalpha ;
    std::cout << identifier1 << ' ' << identifier2 << '\n' ;
    std::cout << typeid(identifier1).name() << '\n' ;
    std::cout << typeid(89).name() << '\n' ;

    // Narrowing conversion is not allow in brace initialization, you have to use the copy intialization or direct intialization
    // bool joker { 9 } ;

    bool joker ( 9 ) ;
    std::cout << joker << '\n' ;

    // Taking input from the user 

    std::cout << "Enter Boolean Value: " ;
    bool userInput {} ;
    // To able to get input as "true" and "false" we need to enable the std::boolalpha at the input stage
    // std::cin >> std::boolalpha ;
    std::cin >> userInput ;
    std::cout << "User's Boolean Value: " << userInput << '\n' ;

    std::int16_t kk ;
    std::cout << "Enter Value for KK: " ;
    std::cin >> kk ;

    std::cout << kk << '\n' ;

    
    


    return EXIT_SUCCESS ;
}