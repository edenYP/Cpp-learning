#include <iostream>



// A normal generic function using templates:




template <typename A, typename B>


auto templateadd(A a, B b){

    return a+b;
}           




int main(){
    int x;
    int y;


    // here's how you do it with a generic lambda.

    
    std::cout << "Enter number 1: " << '\n';
    std::cin >> x;
    std::cout << "Enter number 2: " << '\n';
    std::cin >> y;

    // auto a and auto b is the same as a generic function using a template.
    auto lambadd = [](auto a, auto b){

        std::cout << "Multiplying both numbers\n";
        return a*b;
    };

    std::cout << lambadd(x, y) << '\n';

    return 0;
}