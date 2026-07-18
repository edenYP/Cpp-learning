#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>


//  Function template is used to load as many overloaded function as needed, can use different data types in each of them.

// creating a template.

template <typename I, typename C>

auto min(I a,C b){          //          Auto let's the compiler decide on it's own about what data type to return. so it works for almost all data types.
    return (a < b) ? a : b; // if a < b, return a. if b > a, return b.
}

int main(){


std::cout << min(2, '3');




// This function can now work with two different data types and return normally because of auto.

return 0;

}