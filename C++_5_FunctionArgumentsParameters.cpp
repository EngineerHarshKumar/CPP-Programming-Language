// Here we are learn about PARAMETERS and ARGUMENTS


/*
As few last programm you remember we are defin the which take the input from the user and return to the caller via a return statement ;

Their we are define funcion which get value from user and return to the caller and now we have to make another function take the value which is use entered and make it twise...

Look belowe program 

#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

// This function won't compile
void printDouble()
{
	std::cout << num << " doubled is: " << num * 2 << '\n';
}

int main()
{
	int num { getValueFromUser() };

	printDouble();

	return 0;
}


Here we are think that it will work fine but its not that thing in printDouble() function can't access the value entered by the user we have to pass specific value to that function which is get from the user ...

Here now we need the concept of parameter & arguments

PARAMETERS
Function parameters is a variable used in the header of the function or we can say that its a such kind of variable which is initialized by the value which is provides by the caller.....Understood ?? 
Dont't worry we will dissecting all the things just take a key points 

When any function which take the function parameter ( parameters for short ) we have to define its type with the identifier and this things happends in the parenthesisz () after the function name ...

returnType functionName(int a) {
    function's body 
}

It take only one parameters
Here 'int a' is a parameter of this function of type int which is initialized by the value which is provided by the caller of this function

returnType functionName(int a, int b ) {
    function's body
}

Above is take 2 parameters, you can define many as required...

ARGUMENTS
Function arguments is a value which is passed to that function during function call in that parenthisiz () 
This value is used to initialized the parameters of function 


*/

#include <iostream>
#include <cstdlib> // for EXIT_SUCCESS to indicate status of main() function to Operating system

int main() {

    return EXIT_SUCCESS ;
}