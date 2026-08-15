#include <iostream>
#include <future>
#include <chrono>
#include <thread>

// a packaged task gets the return value from a function without us having to set it manually. 
// while in promise- we had to manually set the value that we would get from the function (i.e - promise.set_value(102); )


int calculate();


int main(){

std::packaged_task<int()> task(calculate);  
                                            // we're basically providing a function whose return value will be set in the future.
std::future<int> future = task.get_future();    

std::thread thread(std::move(task));        // we're moving the object "task" inside of another thread so we're using std::move here.     
                                            // we would have to execute task separately from the thread if we don't do this by using task();

std::cout << "[Main]: still running.\n";

int result = future.get();

std::cout << "[Main]: Your calculation result is " << result << '\n';

thread.join();

    return 0;
}



int calculate(){
    std::cout << "[Task]: Calculating..\n";

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "[Task]: Calculation completed!\n";

    return (100 + 2);
}
