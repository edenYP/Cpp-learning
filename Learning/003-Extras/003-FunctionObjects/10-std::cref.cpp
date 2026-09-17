#include <iostream>
#include <functional>



// cref creates a const reference wrapper to an existing object.

void print(std::string x){
    std::cout << x << '\n';
}

void (*ptr)(std::string) = print;

int main(){
    
std::function<void(std::string)> callable = std::cref(ptr);

callable("hello world");


return 0;
}