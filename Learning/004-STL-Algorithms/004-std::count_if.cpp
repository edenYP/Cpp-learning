#include <iostream>
#include <algorithm>
#include <vector>



// std::count_if - count all elements satisfying the condition.

// Time complexity: O(n).

// Returns the number of elements for which the condition is true.



int main(){
    std::vector<int> nums = {1,2,3,4,5,10,11,12,14,16,18};


 std::cout << std::count_if(nums.begin(), nums.end(), [](int x){return x > 10;});

// output: 5, 5 nums satisfy the condition.





    return 0;
}