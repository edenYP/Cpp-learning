#include <iostream>
#include <future>
#include <chrono>
#include <thread>

// std::shared_future allows multiple threads/tasks to retrieve-
// the same result from one shared state.

// Unlike std::future, get() can get multiple calls from threads.

int Calculate();


int GetTens(std::shared_future<int> future);


int GetOnes(std::shared_future<int> future);

int main()
{
    
    // .share() converts the normal future into a shared_future.
    std::shared_future<int> number = std::async(Calculate).share();

    std::cout << "[Main] Calculating number...\n";



    // Both tasks receive the SAME shared_future.
    std::future<int> tens = std::async(GetTens, number);
    std::future<int> ones = std::async(GetOnes, number);



    // Each task can safely call get() on the same shared_future.
    int tensDigit = tens.get();
    int onesDigit = ones.get();


    std::cout << "[Main] Tens digit: " << tensDigit << '\n';
    std::cout << "[Main] Ones digit: " << onesDigit << '\n';



    return 0;
}



int Calculate(){
    int num = 10;

    std::cout << "[Calculator] Calculating...\n";

    std::this_thread::sleep_for(std::chrono::seconds(3));

    std::cout << "[Calculator] Calculating complete!\n";

    return num;
};




int GetTens(std::shared_future<int> future)
{
    int num = future.get();

    return num / 10;
}


int GetOnes(std::shared_future<int> future)
{
    int num = future.get();

    return num % 10;
}




// What we learned:

// 1: std::future normally represents a result that is retrieved by one owner.

// 2: std::shared_future allows multiple threads/tasks to retrieve the same result.

// 3: .share() converts a std::future into a std::shared_future.

// 4: Multiple shared_future::get() calls are allowed and return the same value.