#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

// stable_sort: sorts out a range, guaranteees the relative order of elements with same value.
// e.g - john(90) and bob(90) --> sort --> bob(90) john(90) [potentially]
//        john(90) and bob(90) --> stable_sort --> john(90) bob(90) [guaranteed].


// Time Complexity: O(n log n).

int main(){
std::vector<std::pair<std::string, int>> nums = {{"john", 90},{"mark", 50}, {"armstrong", 45}, {"astro", 53}, {"alex", 90}};



// preserves the relative order of elements with same value.
std::stable_sort(nums.begin(), nums.end(),
    [](auto& a, auto& b){return (b.second < a.second);}
);


for(const auto x : nums){
    std::cout << x.first << ": " << x.second << '\n';
}

// output observation:
// john will always be ahead of alex.





    return 0;
}