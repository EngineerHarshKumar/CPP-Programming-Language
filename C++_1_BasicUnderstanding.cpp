#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    // Our CPP journey start

    /* 
    Statements => Computer program is a sequence of instaruction that tell the computer to what to do. Statement is a type of instruction that cause program to do some action, Their are many types of statement like declaration statement , selection statement etc. all most every statement is end with the semicolon ( ; )

    Every C++ Program must contain the 'main' function because execution of code start from this function only.

    In this program at line 4 is called the preprocessor direction which indicate that we would like to use the content of iostream library which is a part of c++ standard library as its need to use the std::cout function or object in order to show somethings to the screen 

    Line 6 indicate that we are defining the function called 'main'.
    From Line 7 where '{' show to the corresponding '}' is indicate that its a part of that 'main' function

    Their is Something special line of code which is 'return' statement which return value from the 'main' function in order to indicate that function is succesfully execute.

    Variable => In every programming language we are doing somethings like processing, manipulating, and many more But Can you tell me with this processing , manipulating happened ??
    The answer is 'data' , and the data is anything which can be stored, processing, manipulating by the computer system but we need to store the data in our program otherwies we loose it so How we can store that variable can Any one tell me ??  That's is a variable.
    The Variable is comes into existance which is basically a named object and object is a region of memory which is used to store the data 
    At the end the variable is a way to store the data so we can manipulating , processing and many mores

    Way of define the variable

    int personCounter ;
    Here int is a indicate that we are define the variable of type integer , and its only hold the integer value not any other kind of values .. But it not have any kind of value  So lets assing value using the assignment operator ( = )

    personCounter = 89 ;
    Here we are assign the 89 value to the personCounter variable.

    Lets' move forward and know about instantiation and initialization 

    When you are define variable like below
    int age ; When  the compiler which compile all code to execute, see this line of code its assign the unused memory to that variable and make reference to that memory location by this named object or variable and then are you print this variable to the console then the you got the same value as you are assign into it. 

    The assign the memory to the variable is called instantiation, Remember that I said assign memory to that memory only not anything else happened .

    Initialization => Before going to understand the initialization go to the old way to define the variale and assign the value to that variable. In tha old way we are ususally use 2 line of code first to assign the memory and the second one is to assign the value to that variable . But we can also define and assign the value at the same line of code that's way is called initialization

    c++ have 3 kind of initialization 

    1. Copy initialization
    2. Direct initialization
    3. Brace /Uniform /List initialization

    int firstVariable = 43 ;        // Copy initialization  
    int secondVariable ( 33 ) ;     // Direct initialization
    int thirdVariable { 90 } ;      // List initialization

    One Important note about List initialization is disallowed the narrowing conversion, we mean brace initialization not allow you to store that data which not safely store by it For example you are trying to store the 6.4 value into a variable of type 'int' then it remove .4 and store 6 that stop from this brace initialization, but another 2 copy & direct initialization is allow you narrowing conversion

        
    std::cout => At this point we are know that the std::cout is way to print something to the console with the help of insertion operation which is ">>". Here "cout" is stand for "character output" 

    But Sometimes we need to get data from the use through keyboard, in order to get data from the user we are using the another object which is also an part of iostram library which is std::cin Here "cin" stand for "character Input", To use the std::cin you should have to use the extraction operator "<<"


    Look at below two lines of code 

    std::cout << "Hello" ;
    std::cout << "Computer"  ;

    What do you expect in result ?? You think that it will print "Hello" on first line and "Computer" on the another line but not it will print both of code on the same line. But if are you want to print both of it on the another line their is 2 ways 

    std::endl and another is '\n'
    But use '\n' is recommended because it does not 

    std::endl is bit inefficient as its usually take 2 work , first it move cursor to the next line and its flush the buffer and we typically don't want to flush the buffer at the end of each line.

    '\n' is perform only one task move cursor to the new line and its does not flush the buffer...so its very efficient.

    Uninitialized variable & Undefined variable 

    Uninitialized variable is a such a variable which does not have know value by the programmer....

    int x ;
    Here 'x' is an uninitialized variable where the variable is declared by not give a know value ....

    Undefined behaviour is a result of executing the code whose behaviour is not well-defined by C++ language.

    std::cout << x ;
    when you executing this above line of code it have an undefined behaviours as it does not well-defined behaviour ...


    Keyword and naming identifier

    Keyword => Keyword is a reserved word which have somethings special meaning. C++ have 92 keyword

    Identifier naming rules
    1. identifier cannot be a keyword
    2. identifier only contains letter (upper & lower case) and underscore character.
    3. Must be begin with the letter.
    4. c++ case sensitive 


    literals or also know as contant literal is a value which is directly insert into the source code 

    std::cout << "Technology" ;
    Here "Technology" is a literal as its direcly insert into source code 


    Expression ??
    Expression is a collection of literal , operator, operands, function call, variable that calculates to the single value.
    
    Their is somethings called the Expression statement which used the expression as a statement as we know that expression cannot be executes if its not a part of the statement, in order to execute the expression it must be a part of the statement so it will execute 

    but let's look at the below line of code 

    int x ; // its fully clear that it define the variable of type int 

    Now focus
    x = 3  remember its dose not contain any kind of semicolon
    Here we are look tha we are using the '=' operator which is  binary operator which take 2 operands one at the left and another on the right side , and we know that expression is a combination of literal , varible and operator as well so how we can assign the value 3 to the variable 'x' 

    The answer is using the expression statement which be able to execute, to make any expression as an statement just put the semicolon (;) at the end of expression.



    From Now we are Going to Function Let's read for it
    
    */


    int personCounter; 
    personCounter = 90;

    int myAge = 19;
    int myId{8};
    int myProcessor(4);

    // Program to get input from the user and print twice of it 
    std::cout << "Enter your number: ";
    int userInput{};
    std::cin >> userInput;
    std::cout << "Twise: " << (userInput * 2) << '\n';

    int z;
    z = 44; // Expression Statement
    

    //int int = 0; 
    // The above line of code through the error because you cannot use the keyword to define the identifier.
}

