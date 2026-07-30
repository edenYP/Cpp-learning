#include <iostream>
#include <list>
#include <iterator>


// THE GOAT ITERATORS.

// Iterators represent a position inside a container.
// They allow us to traverse and access elements.

// They work differently for each container.
// A iterator may or may not use pointers internally, it depends on the type of container.


// in this practice session, we'll be using doubly linked list.




void ShowRangeForInternals(const std::list<std::string>& BlockResidents);





int main(){


    std::list<std::string> BlockResidents;

    BlockResidents.push_back("Mr Robot");
    BlockResidents.push_front("Elliot");
    BlockResidents.push_back("SamSepi0l");
    BlockResidents.push_back("Whiterose");



    // let's say, i want to access whiterose, who lives on 4th node in this list.


    // I'll use iterator to do that.

    auto it = BlockResidents.begin();
    ++it;
    ++it;
    ++it;
    
    std::cout << *it << '\n';

    std::cout << "*************************\n";

    ShowRangeForInternals(BlockResidents);



    return 0;
}







void ShowRangeForInternals(const std::list<std::string>& BlockResidents){

    // seeing what's under the hood of a for ranged loop and why does it work for containers?



std::cout << "Normal for ranged loop\n";
int i = 1;
for(const auto& resident : BlockResidents){
    std::cout << "Resident no: " << i << '\n';
    std::cout << resident << '\n';
    i++;
}

i = 1;
std::cout << "**************************\n";

std::cout << "Seeing what's underneath all that simplicity\n";
std::cout << "Debunked loop: \n";
for(auto it = BlockResidents.begin(); it != BlockResidents.end(); ++it){
    std::cout << "Resident no: " << i << '\n';
    std::cout << *it << '\n';
    i++;
}



// SO what goes on here?

// .end() function gives us an iterator to the END,
// (Something that is after the last element).

// The loop continues while the iterator is NOT equal to end().

// When the iterator advances past the last element,

// it becomes equal to end(), so the loop terminates itself. 


    return;
}

