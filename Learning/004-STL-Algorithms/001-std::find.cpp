#include <iostream>
#include <algorithm>
#include <vector>


// std::find searches a range for a particular value.
// Linear search.


// Time complexity: O(n).


// Syntax: std::find(begin, end, num).


// std::find returns an iterator.


int main(){
std::vector<int> example = {1,2,3,4,5};
auto it = std::find(example.begin(), example.end(), 5);



std::cout << "value: " << *it;




    return 0;
}