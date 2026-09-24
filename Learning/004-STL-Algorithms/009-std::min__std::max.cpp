#include <iostream>
#include <algorithm>
#include <vector>


// std::min(a, b) = returns smallest element.
// std::max(a, b) = returns largest element.

// time complexity: O(1).

int main(){
int a = 10;
int b = 20;
int c = 30;
int d = 50;

// two elements
std::cout << std::min(a,b);


// multiple.
std::cout << std::max({a,b,c,d});





    return 0;
}