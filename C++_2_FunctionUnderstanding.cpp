#include <iostream>

/* 
A FUNCTION is a reusable sequence of statements designed to do a particular job.

Every CPP program have the 'main' function where the execution has been start and we put all the code inside of 'main' function but sometimes we can't write the hall code in the single 'main' function as its become too longer and hard to manage & well as test of code and also the readibility is going to bad very bad so in order to make code managable, readable and test as a unit or module we break down the hall program in small function and each function have their specific job which we assign or define inside of function body.
Function which is written by the user as his need is called the USER-DEFINED FUNCTION.


To understand the flow of execution of function,
let's take an real life example suppose you are learning a book and suddenly you remebered that you have to make a phone call, so you put a bookmarked in your book and make a phone call, when you are done with the phone call you come back to the bookmarked and continouse reading .

In same manner the flow of execution of function are run, 
You code run sequencially in 'main' function and when you get a function call & function call is a expression which tell the CPU to interrupt the current function and execute the another function. The CPU put's a bookmarked at that point or current position of execution and then call ( execute ) function which have to call in function expression, when done with the execution of code in another function the CPU come back to that bookmarked and resume execution 

NOTE: nested function is not allowed , it means you cannot define the function in another function 
Below is a example of nested function 

int firstFunction() {
    int secondFunction() {

    }
}

METASYNTACTIC Variable 
Meaningless word that is often used as a placeholder for function & variable where the name is unimportant for demonstrating the concept....

DONT'T FORGOT
Every function need () after its name.

// Defining function syntax

returnType FunctionName(parameters) {
    function's body
}

Here 'returnType' is indicate that which type of value the this function will returned
'FunctionName' is define the function name as match its working
'parameters' is a value which take by the function when its call
'function's body' define the main working of the function 


void printSomethings() {
    std::cout << "HELLO FUNCTION" ;
}

*/

void printComputer() {
    std::cout << "printing Function" << '\n' ;
}

void printSomethings() {
    std::cout << "HELLO FUNCTION PRINT()" << '\n';
    printComputer();
}

int main() {

    std::cout << "Hello Functions in CPP" << '\n';
    printSomethings() ;
}

