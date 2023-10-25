/*
To Solve the below problem we have 2 way 
1. Reorder it ( function ) 
2. Function Forward Declaration

Function forward declaration is allowed to tell the compiler about the existance of the function and its also called function prototype

Function Prototype consits of functionName, returnType , parameterType, and one semicolon to make it forward declaration

int add(int,int) ;      This is Forward delcaration or prototype 

DECLARATION & DEFINITION

The Delcaration is tell the compiler about the existance of the identifier and its type information
The Definition is a actuall implementation ( for function & type) and instatiation ( for variable) 
All Definition is also a declaration but not all delcration is defintion

Declaration that aren't definition is called the PURE DECLARATION

ODR (ONE DEFINITION RULE) 
ODR have 3 parts
1. Within a file , function, variable, type, or template can only have one definition
2. Within given program, function, variable can only have one definition
3. Types, templates, inline functions, and inline variables are allowed to have identical definitions in different files
*/

#include <iostream>
#include <cstdlib>


int main() {

    std::cout << "Starting Exection....." << '\n' ;

    // std::cout << add(23,5) << '\n' ;             // It will throw the Error as identifier not found..reason is add() function is not defined till this line so compiler does not know about this function and that's is a reason it will throw the error....

    


    std::cout << "Execution complete." ;
    return EXIT_SUCCESS ;
}


int add(int firstValue, int secondValue){
    return ( firstValue + secondValue ) ;
}