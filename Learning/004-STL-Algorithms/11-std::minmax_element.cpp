#include <iostream>
#include <algorithm>
#include <vector>

// std::minmax_element = finds both the min and max element in a range.

// NOTE: it returns two iterators.


int main(){
std::vector<int> nums= {12,3,45,35,326,436,47,5437};

auto result = std::minmax_element(nums.begin(), nums.end());

std::cout << "Minimum element: " << *result.first;

std::cout << "Maximum element: " << *result.second;

    return 0;
}