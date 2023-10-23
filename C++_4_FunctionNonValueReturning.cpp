// Here we are focusing on Function which does not return any value

/*
NON-VALUE RETURNING FUNCTION 
The non-value returning function is a such kind of a function which does not return any kind of value to the caller ..

VOID
The void is used to indicate that function will not return any kind of value to the caller 
and the non-value returning will never have to write the return statement in it..

EXPRESSION
Never user the non-value returning function in the expression as expression required value to work but as we know that non-value returning function does not return any kid of value to the caller..
If you are use it in the expression it will crash your beautiful program and you are crying....

*/

#include <iostream>
#include <cstdlib>  // Letter I will tell you use of it

void functionOne() {
    std::cout << "First Function" << '\n' ;
    return ;                                            // does not throw the error 
    std::cout << "Last statement in FunctionOne() " ;   // Never Execute this statement 
}

void functionSecond() {
    std::cout << "Second Function" << '\n' ;
}


int main() {

    std::cout << "Hello Non-Value returning Function" << '\n' ;
    functionOne() ;
    functionSecond() ;

    return EXIT_SUCCESS ;
}