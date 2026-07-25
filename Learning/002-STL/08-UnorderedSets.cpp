#include <iostream>
#include <unordered_set>
#include <string>

// Unordered set uses the same hash table just like unordered maps.
// key difference: they only store unique values and no key-value pairs like maps.


int main(){


    std::unordered_set<std::string> employee;

    employee.insert("Elliot Alderson");
    employee.insert("Whiterose");
    employee.insert("Mr robot");
    employee.insert("Angela");


    for(const auto& name : employee){
        std::cout << name << '\n';
    }




        // This sacrifices sorting mechanism just like unordered_map for faster time complexity. 

        
        // functions & time complexity:

        /*
        
        average case - 0(1)
        worse case - 0(n) because of collisions (multiple values stored in same bucket).

        empty();
        find();
        insert();
        erase();
        count();
        size();        
        
        */

        

        // note: These do not store duplicates as well.


    return 0;
}