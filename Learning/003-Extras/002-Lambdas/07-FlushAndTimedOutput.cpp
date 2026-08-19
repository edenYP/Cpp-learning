#include <iostream>
#include <chrono>
#include <thread>


// std::flush = forces buffered output to appear immediately.
// buffered output = temporary area (buffer) where data is stored before writing it to it's final destination (file, screen or network).




// concepts we're using:
// 1: chrono + thread 
//      std::this_thread::sleep_for(std::chrono::milliseconds(2));

// 2: std::flush: to guarantee that we'll see the output before the sleep cmd is executed.
//          std::flush (sends everything out from output buffer immediately).

// 3: for-each loop:
//          explained later.



void dialogue();

int main(){

    dialogue();

    return 0;
}



void dialogue(){
std::string text = "Hi, This is a test.\n";
    for(char c : text){
        std::cout << c << std::flush;   // flush makes sure that we'll get the output before milliseconds is executed.
                                        // it immediately sends out the output without any buffer time.

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }


    return;
}