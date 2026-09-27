#include <iostream>
#include <algorithm>
#include <vector>


// lower_bound: finds the first position where value can be inserted while making sure array stays sorted.


// Time complexity: O(log n).


int main(){
std::vector<int> nums = {1,2,4,6,9};

auto it = std::lower_bound(nums.begin(), nums.end(), 7);

// it'll return an iterator to the position where first_element >= our insertion num (7).

std::cout << *it << '\n';
// we can insert 7 before 9 here and the array will stay sorted.




auto it2 = std::lower_bound(nums.begin(), nums.end(), 5);

std::cout << *it2;
// we can insert 5 before 6 and the array would stay sorted.

    return 0;
}