/*
C++ required that all the identifier must be non-ambiguous. If two identical identifier define in the same program and compiler Or linker cannot be tell them apart, This is generally called the NAMING COLLISION ( or NAMING CONFLICTS ).

Mostly Naming collision are occured in these 2 cases...

1.  Two or more identically named function or global variable will be defined in the separate file which   belonging to the same program....
2.  Two or more identically named function or global variable are introdued into the same file ...


NAMESPACE: The Namespace is a region in which we will define the identifier for the purpose of disambiguous..
Namesapce provide the scope region which called the NAMESPACE SCOPE, this scope is used to the identifier defined inside the namespace....which simply means that any name declared inside the namespace won’t be mistaken for identical names in other scopes

Within a namespace all identifier must be unique or getting the error...naming collision
Namespace is basically used to store the related identifier in it to achieved the non-ambiguous..

In C++, any name or identifier is not defined inside function, class, namespace, then its implicitly part of the namespace which called the GLOBAL NAMESPACE 

You Know main() function or any function which you defined that defined inside of the GLOBAL NAMESPACE 
Try to not defined the variable in the global namespace 

STD ( standard ) NAMESPACE

When C++ originally designed, all the identifier in c++ standard Library is defined inside the global namesapce and you dont' need to used the std:: prefix to use the 'cout' & 'cin' function of input & output.... which will be possible to be conflicts ( naming conflicts ) to the identifier which you define for your own use ... 

When C++ introduced the new identifier it will moved the all the identifier into the 'std' namespace 
to make disambiguous....as it will be stop use to make any conflicts with the identifier defined for the C++ standard library...

Now You understand that std::cout is not std::cout , its just a 'cout' and the 'std' is a namespace where the 'cout' is defined 

:: is called the scope resoulution operator....left of it is defined the namespace and the right side we try to access the identifier from the that namespace .....

When identifier included the namesapce its called the QUALIFIED NAME.

USING DIRECTIVE
using Directive is used to make accessible of the identifier defined inside the namespace without the the using the namespace prefix....

But Try to don't use it because it will make ambiguous in some cases...as its will get the all the identifier inside othe namespace into the scop where the using directive statement is used....

NOTE: we also defined our own namespace ...
*/

#include <iostream>
#include <cstdlib>

// I'am writing just to understanding don't use it in real life...
using namespace std ;

int main() {

    // Now I'm able to access the any identifier inside the std namespace without using the prefix...
    cout << 33 ;


    return EXIT_SUCCESS ;
}