#include <iostream>
#include <algorithm>
#include <vector>

// reverses a certain range in the container.

// time complexity: O(n).




int main(){
    std::vector<int> example = {1,2,3,4,5,6,7};
    std::vector<int> example2 = {1,2,3,4,5};

    std::reverse(example.begin(), example.end());
    
    for(const auto num : example){std::cout << num;};
        std::cout << '\n';
    std::reverse(example2.begin() + 2, example2.begin() + 4);

    for(const auto num : example2){std::cout << num;};
        std::cout << '\n';




    return 0;
}


// note: std::reverse(begin, end).
// the end position is excluded, the beginning index is included.