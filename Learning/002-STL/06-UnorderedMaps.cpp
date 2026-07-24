#include <iostream>
#include <map>
#include <unordered_map>




// Question: Where and why do we use unordered maps?
/********************************************/
// 1: They have much faster complexity runtime because of Hash function.
// 2: They're used for fast indexing, fast searching, fast deletion.
// 3: O(1): average complexity time ||  O(n): Worst complexity time
/********************************************/



// Questoon: How does it work?
/********************************************/
/*

- The Hash function converts a key to a **bucket index**, Then the unordered map stores the key and value in that bucket.

    i.e- "Eden" & 7 ---> stored in ---> 488378 % 10 ---> bucket 8 (just an example)

    now when searching for "Eden", it does not need to search through Red-Black Tree like maps, it runs the same has function and
    locates that eden is stored in bucket 8

-   That's why the average complexity time is O(1).
-   Worst complexity time is O(n) when there are multiple pairs stored at a location. It does a linear search to find the matched pair


*/
/********************************************/

int main(){


std::unordered_map<std::string, float> bankbalance;

bankbalance["Eden"] = 10;
bankbalance["Yuki"] = 99.1;
bankbalance["Brocode"] = 0.99;

std::cout << "Eden's Bankbalance: " << bankbalance["Eden"] << '\n';
std::cout << "Yuki's bankbalance: " << bankbalance["Yuki"] << '\n';
std::cout << "Brocode's bankbalance: " << bankbalance["Brocode"] << '\n';


    // Every other function works the same as that of maps. except... 



for(const auto& entry : bankbalance){
    std::cout << entry.first << " : " << entry.second << '\n';
}


//          THIS DOES NOT AUTO SORT THE KEYS JUST LIKE MAP DOES, so the iterating will be different as compared to maps.

    return 0;
}


