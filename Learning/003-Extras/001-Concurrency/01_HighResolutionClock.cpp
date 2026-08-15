#include <iostream>
#include <chrono>

// what is Chrono?
// a library that is mainly used to record time.

void TestFunction(int input);
void Benchmark(int input);





int main(){

// 1: Clock: this tells you the current time.
//                                                                                  std::chrono::high_resolution_clock;




// 2: Time point: Snapshot of time (kinda like a stopwatch)

auto start = std::chrono::high_resolution_clock::now();

    TestFunction(50000);

auto end = std::chrono::high_resolution_clock::now();

auto duration = end - start;




// now we can't print duration normally because C++ doesn't know it's unit. so we convert it-




auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(duration); // converts duration into Milliseconds and stores it into ms.
auto us = std::chrono::duration_cast<std::chrono::microseconds>(duration);  // converts in microseconds
auto s = std::chrono::duration_cast<std::chrono::seconds>(duration);    // converts into seconds

// 3: chrono.count(): this function is used to get the number from a duration object.


std::cout << "Time taken in miliseconds: " << ms.count() << "ms\n";
std::cout << "Time taken in microseconds: " << us.count() << "us\n";
std::cout << "Time taken in seconds: " << s.count() << "s" << '\n';
std::cout << "*************";

std::cout << '\n' << '\n';







// Now let's visualize how big O works.


// Benchmarking the algorithm using different input sizes. (with ranged based loop)

const int inputs[] = {1000, 5000, 10000, 20000};

for (const int input : inputs){
    Benchmark(input);
}





// do remember that nested loops have O(n^2) time complexity/


    return 0;
}







void TestFunction(int input)
{
    volatile long long sum = 0;
    // volatile prevents the compiler from deciding the computation is unnecessary.
    for (int i = 0; i < input; i++){
        for (int j = 0; j < input; j++){
                sum += i * j;
        }
    }
    

}




void Benchmark(int input){
    
auto start = std::chrono::high_resolution_clock::now();

TestFunction(input);

auto end = std::chrono::high_resolution_clock::now();

auto ElapsedTime = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

std::cout << "Time taken for input " << input << ": " << ElapsedTime.count() << "us" << '\n';


}