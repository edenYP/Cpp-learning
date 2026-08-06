#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>
#include <condition_variable>



                        // This example demonstrates communication between two threads


// using std::condition_variable.       // basically a condition for a lock, function sleeps while it's not true.
//
// Customer Thread:
//      Requests pizza
//          ↓
// Pizza Worker Thread:
//      Waits for customer
//          ↓
// Asks for toppings
//          ↓
// Waits for customer's response
//          ↓
// Makes pizza
//          ↓
// Notifies customer when ready












std::mutex m;
std::condition_variable cv;
bool Talk = false;
bool Ask = false;
bool Toppings = false;
bool Serve = false;
std::string topping1;

void PizzaWorker();
void Customer();


int main(){

std::thread worker(PizzaWorker);
std::thread person(Customer);

worker.join();
person.join();



    return 0;
}









void PizzaWorker(){
        std::unique_lock<std::mutex> lock(m);

    cv.wait(lock, []{           // worker waits for customer to ask something.
        return Talk;
    });


    std::cout << "[PizzaWorker]: What toppings would you like on your pizza sir?\n";
                     Ask = true;
                     cv.notify_one();

    cv.wait(lock, [] {          
        return Toppings;            // worker waits for customer to make his order.
    });

        std::cout << "[PizzaWorker]: Got it! working on it now sir.\n";
        
    std::this_thread::sleep_for(std::chrono::seconds(5));       // worker waits for pizza to be ready.

        std::cout << "[PizzaWorker]: Your " << topping1 << " pizza is ready sir!\n";
                        Serve = true;
                        cv.notify_one();
}


void Customer(){
    m.lock();

    std::cout << "[Customer]: Hello, I'd like to order a pizza.\n";
            Talk = true;
    m.unlock();
    cv.notify_one();

    std::unique_lock<std::mutex> lock(m);

        cv.wait(lock, []{
            return Ask;
        });
        
        cv.notify_one();

    std::cout << "[Customer]: I'd like a pizza with pepperoni on it, nothing else.\n";
            topping1 = "pepperoni";
            Toppings = true;
        cv.notify_one();

        cv.wait(lock, []{
            return Serve;
        });

    std::cout << "[Customer]: Thanks! that was quick.\n";


        return;
}


