#include <iostream>
#include <atomic>
#include <thread>

// using atomic is another way of dealing with the race condition we previously had-
// when two or more threads worked on the same mutable data.

// std::atomic makes supported operations on the atomic object indisivible, which basically-
// makes it so that no other thread can do that action while one thread is already doing so. 


std::atomic<int> counter = 0;       // this made it an atomic object,

void increment();

int main(){

std::thread t1(increment);
std::thread t2(increment);


t1.join();
t2.join();




    return 0;
}




void increment(){
    for(int i = 0; i < 10; i++){
        counter++;                  // and this is an atomic operation.
        std::cout << "iteration no:" << i << "   ::   counter value: "<<  counter << '\n';
    }
}

        // the problem with atomic?


// The "iteration number" in the output is not ordered.
// This is NOT a race condition on i because each thread has its own. (i.e- i is a local variable)


// The two threads execute their loops concurrently, so their output-
// can appear in any order.


// Making i an atomic object would not solve this because i is already a thread local.


// Atomicity only guarantees an individual atomic operation.
// It does not synchronize multiple separate operations or guarantee
// a particular execution/printing order between threads.




// if you want to make a whole entire block of executable synchronous- then use lock instead.