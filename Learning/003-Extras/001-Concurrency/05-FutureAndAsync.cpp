#include <iostream>
#include <chrono>
#include <thread>
#include <future>



// std::future: stores the result of work that will finish later.

// we can later use that future to retrieve the value. 


int Calculate(){

    std::cout << "Calculating..\n";
    
    std::this_thread::sleep_for(std::chrono::seconds(5));

    return 2+5;

}


int main(){

    auto result = std::async(Calculate);    // Starts Calculate() asynchronously and returns a std::future
                                            // that will eventually contain its return value..

    std::cout << "This main thread is still running while sub thread is calculating.\n";

    auto start = std::chrono::high_resolution_clock::now();

    int answer = result.get();      // Retrieves the return value from the future.
                                    // If the asynchronous task hasn't finished yet,
                                    // get() waits until it does.


    auto end = std::chrono::high_resolution_clock::now();

    auto duration = end - start;

    auto s = std::chrono::duration_cast<std::chrono::seconds>(duration);
        
    std::cout << "Answer: " << answer << '\n';
    std::cout << "Time taken: " << s.count() << "s" << '\n';    // time taken will be 5 seconds in this cause because
                                                                // i explicitly told the thread to sleep(5);


    // However, If the asynchronous task was already finished,
    // get() returns immediately without waiting.
    return 0; 
}

/*
 What we learned:

 std::async
      Starts work asynchronously.

 std::future
      Stores the result of that work until we're ready to retrieve it.

 future.get()
      Returns the result, waiting only if the task hasn't finished yet.
*/
