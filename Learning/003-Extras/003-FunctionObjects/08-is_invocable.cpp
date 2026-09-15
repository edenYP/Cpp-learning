#include <iostream>
#include <type_traits>

// std::is_invocable_v is a compile-time bool value. (returns a bool value).
// std::invocable is a C++20 concept used as a constraint.

template<typename T, typename B>

bool checkinvocable(T callable, B type) {
    return std::is_invocable_v<decltype(callable), decltype(type)>;
}

int main() {

    int x = 10;

    auto num = [](int x) {
        std::cout << "Print: " << x;
    };

    if (checkinvocable(num, x)) {
        num(x);
    }
    else {
        std::cout << "Not compatible\n";
    }

    return 0;
}






// std::is_invocable variants:



// std::is_invocable_v(callable, arguments) - returns it's value.



// std::is_invocable_r_v(Return type, callable, argument): 
// can i invoke this function with "arguments" and is it's result usable as the return type?


