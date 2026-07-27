#include <iostream>
#include <queue>



// Queue: exact opposite of stack, queue follows the FIFO (first in first out) principle.




int main(){

    std::queue<std::string> customerinline;

    customerinline.push("eden");
    customerinline.push("Margerita");
    customerinline.push("alex");
    customerinline.push("Brocode");



    int i = 1;

    while(!customerinline.empty()){
        std::cout << "iteration no: " << i << '\n';

        std::cout << "front element: " << customerinline.front() << '\n'; 
        std::cout << "last element: " << customerinline.back() << '\n';
        customerinline.pop(); // removes the front element.
        i++;
    }

    

    // functions:

    /*
    
    queue.push();
    queue.pop();
    queue.front();
    queue.back();
    queue.empty();
    queue.size();
    
    
    time complexity of all functions: O(1); 
    

    limitation:
    1: no sorting
    2: no indexing
    3: no searching
    4: no iterators

    */





    return 0;
}