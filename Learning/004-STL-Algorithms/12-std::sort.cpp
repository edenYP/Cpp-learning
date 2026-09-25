#include <iostream>
#include <vector>
#include <algorithm>

// std::sort = sorts the element in a range.
// time complexity: O(n log n)



int main(){
std::vector<int> nums = {4,5,2,3,1,8,7};


std::sort(nums.begin(), nums.end());


for(auto const x : nums){
    std::cout << x << " ";
}
std::cout << '\n';
// output: 12345678.



// using a custom comparator:
// it answers the question: does a come before b?



// put a before b is a > b. (descending).

std::sort(nums.begin(), nums.end(), [](int a, int b){ return (a > b);});

for(const auto x : nums){
    std::cout << x << " ";
}
// output: 87654321.



// put b before a if b > a. (ascending).
std::sort(nums.begin(), nums.end(), [](int a, int b){return (b > a);});

for(const auto x : nums){
    std::cout << x << " ";
}


    return 0;
}   