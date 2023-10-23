// Here we talking about FUNCTION RETURN VALUES ( called VALUE RETURNING FUNCTION )

/*

Look Below program

#include <iostream>

int main()
{
	// get a value from the user
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;

	// print the value doubled
	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}


This program have 2 concept first getting the value from the user and another things is print the double of it....
Now you have to break the the getting value from the user into a function 

Our function is look like this 

// This program doesn't work
#include <iostream>

void getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
}

int main()
{
	getValueFromUser(); // Ask user for input

	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

You already read the problems, Now let's focus on the getting value from the function via a 'return values'

When ever you defined the user-defined function we have to determine whether our function return value back to the caller or not, if yes we have to things on 2 point 

1. Indicate which kind of data will function return 
2. Use return statement to return the specific value

'void' is ususally used to make function indicate that this function does not return any kind of values

NOTE: return values is not going to be print to the console until you pass it.

*/

// Lets implemenet upper concept with correct way

#include <iostream>

// Here 'int' indicate that we are return the number value from this function which have the job to get the value from the user and return to the caller..

int getValueFromUser() {
    
    std::cout << "Enter the value: "  ;
    int value {} ;
    std::cin >> value ;

    return value ;
}

int main() {

    std::cout << "Hello My Friend C++" << '\n' ;
    int userInput { getValueFromUser() } ;
    std::cout << "Double is " << userInput * 2  << '\n';
    std::cout << "The End C++ Program" ;

}