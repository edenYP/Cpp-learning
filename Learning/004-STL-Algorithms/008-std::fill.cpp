#include <iostream>
#include <algorithm>
#include <vector>



// std::fill = sets every element in a given range to the same value.




int main(){
std::vector<int> nums = {1,2,3,4,5};

std::fill(nums.begin(), nums.begin()+3, 5);

for(const int x : nums){
    std::cout << x << '\n';
}



    return 0;
}