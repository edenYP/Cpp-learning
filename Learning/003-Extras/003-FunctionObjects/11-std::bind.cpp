#include <iostream>
#include <functional>



// std::bind Take an existing callable
// fix an argument and create a new callable 
// that accepts the remaining arguments later.



class MathOperations{
public:

int Add(int a, int b){
    return (a + b);
}


int (MathOperations::*ptr)(int, int) = &MathOperations::Add;


};



int main(){
MathOperations math;

auto AddTen = std::bind(math.ptr, &math, 10, std::placeholders::_1);
// std::placeholders- tells std::bind that the first argument will go here.

AddTen(20); 


    return 0;
}


/*

std::bind is mainly useful as a callable adapter, especially in older C++ code and 
when you want to transform an existing callable without writing a separate wrapper function.


And the 10 is simply stored state inside the callable object returned by bind —
not automatically some heap variable.





*/