#include <iostream>
#include <algorithm>
#include <vector>

// std::min_element(begin, end) = searches a range, returns smallest.
// std::max_element(begin, end) = searches a range, returns largest. 

// they return an iterator.
// time complexity: O(n).

int main(){
std::vector<int> nums = {1,2,3,40,56,325,7,5742,43,532};

auto it1 = std::min_element(nums.begin(), nums.end());
auto it2 = std::max_element(nums.begin(), nums.end());


std::cout << "Smallest: " << *it1;
std::cout << "Largest: " << *it2;



    return 0;
}