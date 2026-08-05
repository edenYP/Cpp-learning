#include <iostream>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <chrono>





// condition variable are used to wake up a sleeping thread. (a sleeping thread does not use much memory while waiting for the condition)


std::mutex m;
std::condition_variable cv;

bool Ready = false;

// Thread that waits:

void Worker()
{
    std::cout << "[Worker] Waiting for signal...\n";

    std::unique_lock<std::mutex> lock(m);

    cv.wait(lock, [] {
        return Ready;
    });

    std::cout << "[Worker] I woke up! Starting my work...\n";
}

// Thread that sends the signal:

void Boss()
{
    std::cout << "[Boss] Working for 5 seconds...\n";

    std::this_thread::sleep_for(std::chrono::seconds(5));

    {
        std::lock_guard<std::mutex> guard(m);

        Ready = true;

        std::cout << "[Boss] Work is finished.\n";
    }

    cv.notify_one();
}

int main()
{
    std::thread worker(Worker);
    std::thread boss(Boss);

    worker.join();
    boss.join();

    return 0;
}


