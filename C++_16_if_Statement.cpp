#include <iostream>
#include <cstdlib>

int main() {

    std::cout << "Hello If Statement" << '\n' ;

    std::cout << "Enter YOur System Memory" << '\n' ;
    int ram {} ;
    std::cin >> ram ;

    if(ram > 6) {
        std::cout << "You Can Play game" << '\n' ;
    } else {
        std::cout << "YOu Can't Play game" << '\n' ;
    }

    return EXIT_SUCCESS ;
}