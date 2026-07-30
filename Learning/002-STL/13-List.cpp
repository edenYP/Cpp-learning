#include <iostream>
#include <list>
#include <iterator>

// std::list is implemented as a doubly linked list.

// Compared to vector and deque, it is much faster at inserting
// and removing elements in the middle (provided you already have
// an iterator to that position).

// Like deque, it supports push_front() and pop_front() in O(1).

// Unlike vector and deque, it does NOT support random access.
// There is no [] or at() because reaching an element requires traversing the list node by node.

// You typically access elements using iterators or a range-based for loop.





int main(){

std::list<int> numbers;

numbers.push_back(2);
numbers.push_front(1);
numbers.push_back(5);

int i = 0;

// printing 5 in my own way by making my own index. (I HAVEN'T LEARNT ITERATORS YET.)
std::cout << "My way: " << '\n';
for(const auto& nums : numbers){
    i++;
    if(i == 3){
        std::cout << nums << '\n';
    }
}


// IMPORTANT: Iterator way (will cover later but writing it anyway so i can corelate).

std::cout << "iterator way: \n";
auto it = numbers.begin();

++it;
++it;

std::cout << *it << '\n';




// A LIST IS MADE UP OF NODES:
/*
 NODE 1 (address = 2998):
    value:
    node* next = 30000;
    node* prev = nullptr;

 NODE 2 (30000):
    value:
    node* next = 29394;
    node* prev = 2998;

 NODE 3 (address = 29394):
    value:
    node* next = nullptr;
    node* prev = 30000;




    Elements that are stored inside a double linked list are stored inside NODES.
    - each node's location is completely arbitary.
    - the pointers of the next and previous nodes are stored inside a node.
    - A list iterator keeps track of the current node.
    - When ++it is used, the iterator moves onto the next node which the next ptr is pointing to.
   


- For more info on iterators. Check the Iterator file.

*/

// NOTE: WILL ADD THE FUNCTIONS AFTER LEARNING ITERATORS AS MOST OF THEM ARE ITERATOR-BASED.


    return 0;
}
