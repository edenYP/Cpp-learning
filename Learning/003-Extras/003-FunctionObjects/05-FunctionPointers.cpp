#include <iostream>
#include <functional>




// functions also have an address in the memory.

    // a function pointer is a pointer that stores the memory address of a function that can be used to call that function.


void numbers(int x){
    std::cout << "Function: " << x;
}





int main(){

void(*ptr)(int) = numbers;  // a function pointer pointing to the function declared above.



ptr(50);    // this will call the function it points to.



// std::function can be used here as well.

std::function<void(int)> callback = ptr;

callback(100);



    return 0;
}