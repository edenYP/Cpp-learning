#include "Output.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

std::mutex m;


void TextOut(std::string text, int pace){

std::unique_lock<std::mutex> lock(m);

for(char c : text){
    std::cout << c << std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(pace));
}

return;
}
