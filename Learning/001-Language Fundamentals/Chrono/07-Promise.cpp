#include <iostream>
#include <thread>
#include <chrono>
#include <future>

// Promise: you can manually control the return procedure of a thread instead of using async. 


void Worker(std::promise<int> promise){

    std::cout << "[Thread] Calculating...\n";

    std::this_thread::sleep_for(std::chrono::seconds(5));

    int result = 42;

    promise.set_value(result);   // setting the value that will get returned to the future. 

}


int main(){

    std::promise<int> promise;          // promising that the returned value will be an int.
    
    std::future<int> future = promise.get_future();     // connecting the future with promise.

    std::thread worker(Worker, std::move(promise));     // passing the parameter to a thread with std::move.

    std::cout << "[Main] Waiting for the result..\n";   

    int result = future.get();          // waits if necessary and returns the result.

    std::cout << "[Main] Result: " << result << '\n';   

    worker.join();          // ensures that the thread is safe to be terminated by joining it.


    return 0;
}



// here's the structure of how things work.

/*

promise
   │
   │ set_value(42)
   ▼
future
   │
   │ get()
   ▼
42

*/