#include <iostream>
#include <algorithm>
#include <vector>

// used to find an element that satisfies a condition.
// linear search.

// Time Complexity: O(n). 


int main(){
std::vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};

auto it = std::find_if(nums.begin(), nums.end(), [](int x){return x > 10;});

std::cout << *it;

// output: 11, it is the first num that satisfies the condition.



    return 0;
}