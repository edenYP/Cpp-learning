#include <iostream>
#include <vector>
#include <utility> // includes move

void hollowpurple(std::vector<int>& thukuna){

    std::vector<int> sukuna = std::move(thukuna);

        // std::move will transfer ownership of the resources to sukuna.

    return;
}





int main(){

    std::vector<int> thukuna;

    // std::move is generally used when you want to move the resources stored inside one lvalue to another.

    thukuna.push_back(1);
    thukuna.push_back(2);
    thukuna.push_back(3);
    thukuna.push_back(4);
    thukuna.push_back(5);


    std::cout << "size before transferring resources: " << thukuna.size() << '\n';

    hollowpurple(thukuna);

    std::cout << "size after transferring resources: " << thukuna.size() << '\n';
    return 0;
}




// why std::move?

// without using std::move in 
//      std::vector<int> sukuna = thukuna;

// it would create a copy of resources inside sukuna instead of transferring ownership of resources from thukuna to sukuna.