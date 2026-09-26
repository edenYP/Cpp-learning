#include <iostream>
#include <algorithm>
#include <vector>

// std::partial_sort
// Find the 3 smallest elements from the ENTIRE range, and put those 3 at the front in sorted order.


// Time Complexity: O(n log k).  (k = num of elements you want sorted)


int main(){
std::vector<int> nums = {5,3,4,6,7,1,3,};



std::partial_sort(nums.begin(), nums.begin() + 3, nums.end());    


for(auto const x : nums){
    std::cout << x << " ";
}







    return 0;
}