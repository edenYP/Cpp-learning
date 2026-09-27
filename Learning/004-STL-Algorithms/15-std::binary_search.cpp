#include <iostream>
#include <algorithm>
#include <vector>

// std::binary_search: finds the value inside the array and returns true or false.

// Time Complexity: O(log n).


int main(){
    std::vector<int> nums = {1,2,3,4,5,6,7,9,23,58,326,65,};

    bool exist = std::binary_search(nums.begin(), nums.end(), 5);

    std::cout << exist << '\n';








    return 0;
}