#include <iostream>
#include <thread>



// Definition: A thread is an indepent execution pathway within the same process
//             So Multithreads can execute concurrently. (may execute simultaneously on multicore CPUs).





// 1:    thread.join(): this makes the main function wait for your sub thread to finish executing before the main function continues ahead.

//                   - if you do not use .join() then there is a possibility of the main function finishing before the sub thread finishes executing.
//                   - that would result in an error and std::terminate.



//                      important property: once thread.join() is finished, you cannot do thread.join() again for the SAME sub thread, you always have to create a new thread.






void Introduction(){
    std::cout << "Hello, I'm Papi\n";
}


int counter = 0;

void RaceCondition(){
    for(int i = 0; i < 10; i++){
        counter++;
        std::cout << counter << '\n';
    }
}




int main(){

    std::cout << 'A' << '\n';

    std::thread t(Introduction); // creates a sub thread that executes simultaneously as my main function.

    std::cout << 'B' << '\n';

    t.join(); // Tells the process to wait for sub thread to finish before proceeding.

    std::cout << 'C' << '\n';


    std::cout << '\n';


// Most probably output:

// A
// B
// Hello, I'm Papi
// C
//
// C will always be printed after the thread finishes because of join().
// However, the scheduler may run the worker thread before or after printing B. (therefore it is only the MOST probably output and not guaranteed)









            // Question: what happens if multiple threads work on the same variable simultaneously?








    // chaos.

    std::cout << "RaceCondition:" << '\n';
    std::cout << "***********************\n";

    std::thread t1(RaceCondition);
    std::thread t2(RaceCondition);



    // now both of these threads will be working on the same variable, which will cause CHAOS.

                    // The problem: Shared mutable data.
                            // Global variables are a common way to cause it.
                


    t1.join();  // join only stops the thread which calls it from proceeding.
    t2.join();  // so both t1 and t2 are running simultaneously here despite t2.join() being used later.

    std::cout << "Final counter: " << counter;

    return 0;
}
