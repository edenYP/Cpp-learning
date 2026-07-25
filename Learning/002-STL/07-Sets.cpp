#include <iostream>
#include <set>
#include <string>

// A set is a collection of unique elements, which auto sorts them using Red-Black Tree. 
// A set cannot have duplicate elements inside it unlike vector.


int main(){


    std::set<int> naturalnums;
    naturalnums.insert(1);
    naturalnums.insert(2);
    naturalnums.insert(3);
    naturalnums.insert(8);
    naturalnums.insert(10);
    naturalnums.insert(5);
    naturalnums.insert(1);

    // it will auto sort them using red-black tree.

    for(const auto& nums : naturalnums){
        std::cout << nums << '\n';
    }


    std::set<std::string> Sugarmmys;

    Sugarmmys.insert("Obama");
    Sugarmmys.insert("Putin");
    Sugarmmys.insert("Trump");
    Sugarmmys.insert("Brocode");
    
    for(const auto& mommies : Sugarmmys){
        std::cout << mommies << '\n';
    }



    // Functions & Time complexity:
    /*
    
    insert() -> O(log n)
    find() -> O(log n)
    erase() -> O(log n)
    count() -> O(log n)
    empty() -> O(log n)
    size() -> O(log n)

            Same as that of maps.
    */





    return 0;
}