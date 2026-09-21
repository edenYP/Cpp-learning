#include <iostream>
#include <algorithm>
#include <vector>


// std::count - how many times does the value occur.
// time complexity: O(n).


int main(){
    std::vector<int> nums = {1,2,3,3,3,3,4,4,5,6,7,8,9,0};

    std::cout << std::count(nums.begin(), nums.end(), 4);

    // Output: 2, 4 occurs twice.

    return 0;
}