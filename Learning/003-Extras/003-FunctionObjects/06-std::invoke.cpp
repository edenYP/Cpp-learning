#include <iostream>
#include <functional>

// 



class FunctionPointer{
public:

void FuncPtr(int x){
    std::cout << "Member Function: " << x << '\n';
}



        // CURSED MEMBER FUNCTION POINTER:

void (FunctionPointer::*ptr)(int) = &FunctionPointer::FuncPtr; 

};


void numbers(int x){
    std::cout << "Function: " << x << '\n';
}

    // Normal Function pointer:

void (*ptr2)(int) = numbers;



int main(){
FunctionPointer Function;

// cursed member function ptr invocation: 

(Function.*Function.ptr)(1);


// normal function ptr invocation: 


ptr2(2);



// NOW, STD::INVOKE WILL SAVE US FROM THE CURSED MEMBER FUNCTION


// invoking normal func

std::invoke(*ptr2, 3);

std::invoke(Function.ptr, Function, 4);



    return 0;
}





// Summary:
// std::invoke saves us from cursed member function ptr invokation