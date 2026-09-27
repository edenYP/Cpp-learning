#include <iostream>
#include <algorithm>
#include <vector>


// std::upper_bound: finds first element slightly greater than X.
// upper_bound: *it > x.
// lower_bound: *it >= x.

// Time Complexity: O(log n).



int main(){
std::vector<int> nums = {1,2,3,3,6,7,9};

auto upper = std::upper_bound(nums.begin(), nums.end(), 3);

std::cout << *upper << '\n';    // output: 6

auto lower = std::lower_bound(nums.begin(), nums.end(), 3);

std::cout << *lower << '\n';    // output: 3



    return 0;
}