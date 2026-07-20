#include <iostream>
#include <utility> // THIS IS THE HEADER FOR PAIRS.


// Pairs simply store two related values together.



// if you wanted to make your own pair class, then here is how you can do it.



/*


template<typename A, typename B>

class pair{
public:

A first;
B second;


}

that's literally it.



*/



// Instead of doing that- you can use PAIRS directly, here's how to do it-



std::pair<int, int> coordinates;

int main(){

    coordinates.first = 30;
    coordinates.second = 40;

    std::cout << "your x coordinate is:" << coordinates.first << '\n';
    std::cout << "your y coordinate is:" << coordinates.second << '\n';

    std::cout << "*******************************\n";

    // You can also create and initialize a pair in one line.

    auto userinfo = std::make_pair("Chairgoblin",1234);     // make_pair() auto makes a pair for you and figures out the data type.

    std::cout << "Your username is: " << userinfo.first << '\n';
    std::cout << "Your password is: " << userinfo.second << '\n';

    return 0;
}