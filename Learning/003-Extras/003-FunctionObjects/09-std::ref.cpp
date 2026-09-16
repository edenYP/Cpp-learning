#include <iostream>
#include <functional>






// std::ref creates a reference_wrapper
// that refers to an existing object.



void print(std::string words){
    std::cout << words;
}

void (*ptr)(std::string) = print;




int main(){
std::string x = "hello";
std::function<void(std::string)> callable;

callable = std::ref(ptr);   // does not create a copy of it when storing it in std::function.

callable(x);




    return 0;
}


