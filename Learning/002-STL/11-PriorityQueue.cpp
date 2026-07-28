#include <iostream>
#include <queue>



// a priority queue puts the number with highest priority on top. 

// During insertion, the new element is compared only with its parent.
// If it's larger, they swap until the heap property is restored.



int main(){
    std::priority_queue<std::string> names;

    // Priority queue: Places the highest-priority element on top.
    
    // For std::string, priority queue prioritizes the highest ascii value of their first alphabets, if they're the same. it compares the second one and gives them priority.

    names.push("Apple");
    names.push("Banana");
    names.push("Cat");  
    names.push("Zebra");

    // highst priority would be Zebra, because Z is 90 in ascii, while A is 65.


    // note: IT ALWAYS PRIORITIZES small letters first, BECAUSE a (ascii value = 97), A (ascii value = 65), similarly- z (ascii value = 122) Z (ascii value = 90).

    int i = 1;

    while(!names.empty()){
    std::cout << "Iteration no: " << i;        
        std::cout << names.top() << '\n';
        names.pop();
        i++;
    }

    

    // IT DOES NOT HAVE A priority_queue.back() FUNCTION.




    return 0;
}