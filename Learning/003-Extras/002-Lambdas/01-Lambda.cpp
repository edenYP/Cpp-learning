#include <iostream>



// core idea: a lambda is an unnamed function.



// normal function:

void normal(){
    std::cout << "[normal]: Hi\n";
}



int main(){

// One-Time lambda function:

// [] = capture list, () = parameters.
[]()    
{
    std::cout << "[Unknown]: I do not have a name\n";
}
(); 
// the second () here- executes the function immediately.




// Storing lambda function in a variable.

    auto SayHi = [](){
        std::cout << "[Variable Lambda]: Hi\n";
    };


    // now we can use it again anywhere.

    SayHi();



// Making a Paramter:

        
    [](int num, int num2){
        std::cout << "[Multiply] " << num << " by " << num2 << '\n';
        return num * num2;
    }(5, 2);
        // we pass the value of parameters into the second ().



// Passing Pre existing parameter:

int num1 = 10;
int num2 = 3;

    [&num1, &num2]{
        std::cout << "[Remainder]: getting the remainder from it.\n";
        return num1 % num2;
    }();





    return 0;
}