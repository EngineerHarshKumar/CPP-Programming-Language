/*
CONDITIONAL OPERATOR

The conditional operator is the smallest for to execute code on somethings is true or not

( conditionl ) ? ( trueExecute ) : ( falseExecute ) 
Here the if the conditional is true then the trueExecute is execute otherwise the falseExecute is execute 

if ( conditional ) {
    true statement
} else {
    false statement 
}

These above if-else statement is work same as the conditional operator 
but we can execute things kind of login using the conditional operator 
*/

#include <iostream>
#include <cstdlib>

int main() {

    std::cout << "Hello Conditional Operator" << '\n' ;

    int J { 90 } ;
    int k { 88 } ;

    int G { ( J > k ) ? J : k } ;
    std::cout << G << '\n' ;

    
    return EXIT_SUCCESS ;
}