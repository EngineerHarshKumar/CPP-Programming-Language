/*
LITERAL

The Literal is the value which is inserted directly into the program.
Example std::cout << "Hello-world" , return 6 
All this are the Literal and Sometimes Literal also called the Literal constant as its cannot be changed once defined

type of literal

1. Integer value
2. Boolean Value
3. Floating point value
4. character 
5. C-style string

Literal suffix
yes you can also add the Literal suffix 
example     Unsigned Integer    U
            LOng Integer        L
            Long Long Integer   LL
            std::string         s
            std::string_view    sv
            Float               F

            Prefer literal suffix L (upper case) over l (lower case).

MAGIC NUMBER
The magic number is the literal ( usually a number ) either has unclear meaning or many need to change later


*/

#include <iostream>
#include <cstdlib>
#include <cstdint>

int main() {

    std::cout << "Hello Literal constant" << '\n' ;

    std::cout << 890LL << '\n' ;
    std::cout << "s" << '\n' ;      // C-style string
    return EXIT_SUCCESS ; 
}