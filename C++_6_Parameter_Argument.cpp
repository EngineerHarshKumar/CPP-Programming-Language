/*
LOCAL VARIABLE: Variable defined inside of body of function is called the local variable and opposite of it is called the GLOBAL VARIABLE but will we discuss later on it.

NOTE: Function's parameter are also be a local variable, not be confuse as its a part of that function not outside....

lOCAL VARIABLE LIFETIME: local variable lifetime is defined time between the creation and the destroyed. The creation & destruction of variable only be happened on execution of the program 

The local variable is destroyed at the end of cruly brace in which that variable is defined...
Suppose Below example....

{                   // starting cruly braces, 

    int x ;         // Here x is created and allocated the memory         

}                   // End of curly braces it mean x is destroyed

IDENTIFIER'S SCOPE:   Identifier's scope is defined the where the identifier will be accessible or not , When its accesible we say IN SCOPE , When identifier's cannot be accessible we say OUT-OF SCOPE

Identifier's scope begins at the time of creation and stop at the time of destruction 

NOTE: Not all variable will be destroyed when they go out of scope...

Define your local variable as closer as its needed....

*/

#include <iostream>
#include <cstdlib>


int add(int x, int y)       // x and y are created at this point 
{
    int z{ x + y };         // z is created at this point

    return z;
}   // z, y, and x destroyed here


int main() {

    std::cout << "Starting Execution" << '\n' ;

    int amount { 90 } ;                 // its a local variable as it defined inside of function

    std::cout << add(34,45) << '\n' ;   // Note: if you are calling to any function during execution not be think that previous variable, in this case 'amount' previous variable is destroyed , dont' be that it...
    // 'amount' is not destroyed

    std::cout << "Execution Completer" ;
    return EXIT_SUCCESS ;

}   // 'amount' variable is destroyed here

