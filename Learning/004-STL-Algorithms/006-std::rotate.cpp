#include <iostream>
#include <algorithm>
#include <vector>

// std::rotate = rotates a range in an array.
// time complexity: O(n).
// space complexity: O(1).

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::rotate(
        nums.begin(),
        nums.begin() + 2,
        nums.end()
    );


    for (int x : nums) {
        std::cout << x << ' ';
    }
    // output: 34512.   3 -> middle element.

    return 0;
}