#include <iostream>
#include <chrono>
#include <thread>
#include <stop_token>


void Downloading(std::stop_token token, float& percent);



int main(){
    float percent = 0;
    std::string response;
    std::cout << "type any key to start the download\n";
    std::cin >> response;
    
    // no async here because we don't want a return type in this example.
    // the downloading starts as soon as the thread is created.

    //  std::ref() = creates a reference wrapper so thread APIs that normally copy/store arguments can pass the original object by reference. [AI definition]

    std::jthread downloading(Downloading, std::ref(percent));                       



    std::this_thread::sleep_for(std::chrono::seconds(2));

    // this function sends a stop request to the jthread.
    // the thread stops at a safe point instead of quitting at that instance.

    downloading.request_stop();                 

    downloading.join(); // waiting for the thread to safely finish first.

    std::cout << "[Main] requested stop_token\n";
    std::cout << "[Download] has been stopped.\n";
    std::cout << "[Download] stopped at " << percent << "%\n";
    return 0;
}



void Downloading(std::stop_token token, float& percent){
    float download = 0;
    while(!token.stop_requested()){
        percent = (download/100) * 100;

        std::cout << "[Download]: " << percent << "%\n";

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        download+= 10;

        // not making a break condition for 100% because it won't reach it.
    }

}



