#include <iostream>


//                              Enums are user defined data types that consist of paired named-interger constants.



enum food { burger = 0, pizza = 1, sushi = 2 };

int main() {

    food foods;
    int choice;

std::cout << "What would you like to eat?\n";
std::cout << "0. Burger\n";
std::cout << "1. Pizza\n";
std::cout << "2. Sushi\n";

std::cin >> choice;

foods = static_cast<food>(choice);              // STATIC_CAST<food>(choice) tells the compiler to treat the input that we get in choice as of "food" data type.

switch (foods) {

case burger:
    std::cout << "Here is your burger\n";
    break;

case pizza:
    std::cout << "Here is your pizza\n";
    break;

case sushi:
    std::cout << "Here is your sushi\n";
    break;

default:
    std::cout << "Invalid choice!\n";
    break;
    }

    return 0;
}