#include <iostream>
#include <thread>
#include <mutex>






// mutex allows you to solve the shared mutable data problem with multithreading.


// mutex restricts other threads from accessing the mutable shared data while one thread is already doing so.



    // lock() acquires the mutex.
    // unlock() releases the mutex.
std::mutex m;
int counter = 0;

void lockunlock();
void LockGuard();  // explained at the end.


int main(){



    lockunlock();
    LockGuard();





    return 0;
}







void lockunlock(){
    
    m.lock();
    
    // the mutable data section has been locked.
    // it can only be accessed by one thread at a time.



    for(int i = 0; i < 5; i++){
       counter++;
       std::cout << "Iteration no: " << counter << '\n';
    }
    std::cout << "LockUnlock example END\n";
    return;

                // This return is intentional to demonstrate why
                // manually calling lock()/unlock() is dangerous.






    // question: what happens if the function returns or ends before mutex.unlock() is used? (like we did here).
    // answer: The mutex stays locked forever.

    m.unlock();


    // That's why we use lockguard.
    // lockguard calls it's destructor when the mutex goes out of it's scope. (check the end for more info)
            
        
        // lockguard example function given below.
}


void LockGuard(){
    std::cout << "*********************\n";
    std::cout << "Initializing lock_guard example.\n";

    std::lock_guard<std::mutex> guard(m);   
    // This mutex has now been locked.
    // we don't have to execute the unlock() funcion here as lockguard does it automatically.

    counter++;

    std::cout << "Counter: " << counter;

    return;
    // even tho we returned early, the function doesn't get locked out forever because of lockguard.
}






// IMPORTANT KEYPOINT FOR FUTURE ME:



// lock_guard follows the RAII (Resource Acquisition Is Initialization)
// Constructor: Lock()
// Destructor: Unlock()


// what's a scope?
// the domain or function where a variable exists.







