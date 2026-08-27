#include <iostream>
#include <functional>

// std::function


// we can store multiple different types of callables into std::function as long as they have a compatible call signature.



void numbers(int x){        // normal function
    std::cout << "Function: " << x;
    return;
}


class Student{  // class function
public: 

void operator()(int x){
    std::cout << "Student: " << x;
    return;
}


};


int main(){
    int x = 50;
    // lambda function

auto marks = [](int x){
    std::cout << "Lambda: " << x;
};

Student student;

std::function<void(int)> callback;      // we can call every single callable function that have a compatible call signature by just using callback now.

callback = numbers;
callback(50);
callback = Student();
callback(100);
callback = marks;
callback(150);



    return 0;
}






//  how do we know a function has compatible call signature for std::function?


// let's take std::function<void(int)> and break it down.


// std::function works for any function that returns "void" and takes in "int".


// but can it work if we put an int inside a std::function<void(double)>? 
//      YES! it absolutely can. why? because a int argument can be converted into an double.

// can it work for a function that returns an int like- int function(int x)?
//      YES: it absolutely can (IF the returned result is discarded).









// TRADE-OFFS:
// Templates/direct callable parameters → generally more compile-time information and potentially better performance.
// std::function → more convenient when you need a type-erased/storable callback, with some possible runtime overhead.
