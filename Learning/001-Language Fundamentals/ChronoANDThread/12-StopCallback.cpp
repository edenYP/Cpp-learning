#include <iostream>
#include <thread>
#include <chrono>
#include <stop_token>

void Worker(std::stop_token token)
{
    int counter = 0;

    while (!token.stop_requested())
    {
        std::cout << "[Worker]: Working." << counter++ << '\n';

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    std::cout << "[Worker]: Safely stopped.\n";
}

int main()
{
    std::stop_source source;
    std::stop_token token = source.get_token();

    // callback: Runs automatically when a stop is requested.

    std::stop_callback callback(token, [] {
        std::cout << "[Callback]: Stop request detected! Cleaning up...\n";
    });

    std::thread worker(Worker, token);

    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "[Main]: Requesting stop...\n";
    
    // Now when i request stop, it'll run the callback function alongside it.

    source.request_stop();

    worker.join();

    return 0;
}