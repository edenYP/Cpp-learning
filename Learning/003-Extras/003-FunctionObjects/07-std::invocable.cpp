#include <iostream>
#include <concepts>

// std::invocable checks whether a callable type can be invoked with a given set of argument.
        // YES = can be, NO = cannot be,


template<typename T>
requires std::invocable<T, int>

void Providenum(T callable){
    callable(50);
}


int main(){

auto numbers = [](int x){
        std::cout << "number: " << x;
};



// we'll check if numbers can be invoked with an int:

std::cout << std::invocable<decltype(numbers), int>;

// since the answer is yes.


// this will work just fine.

Providenum(numbers);


    return 0;
}