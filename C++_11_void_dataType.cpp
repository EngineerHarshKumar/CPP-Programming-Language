/*
VOID
The void is an incomplete type, which mean that its declared but not fully defined, The compile know about it but its does not know how many bits of memory will be assigned to that, but still its have some usefull uses..

NOTE:  void is cannot be instantiated like 'int' variable will be instantiated but void cannot be instantiated..

USES OF VOID
1. Function does not return the value 
    The Function which does not have to return the value to caller we have to tell that compiler that this function does not return the value to the caller in that case we simply use the 'void' keyword befor the name of that function  to tell the compiler that its does not return the value to the caller 

2. Depreacated Function does not take any parameter 
    The void is also be used to tell the compile that this function does not take any kind of parameter but its not used in C++, now days its deprecated..

3. Void Pointer
    The most advancetage of void is when used in void pointer but will we learn letter ..
*/

#include <iostream>
#include <cstdlib> 

void noReturnValue() {
    std::cout << "NO Return Function" ;
}

int main() {

    std::cout << "Hello VOID" << '\n' ;
    noReturnValue() ;

    return EXIT_SUCCESS ;
}

