#include <iostream>





// init capture is a way of taking the value from a variable and putting it inside another variable.




int main(){

    int number = 10;

    auto lambda = [result = number * 5](){
        return result;
    };

    std::cout << "Multiplying the number by 5\n";
    std::cout << "Result: " << lambda();

    return 0;
}


// what it does:

// creates a new capture variable (result in this case)- and then later stores the value of number * 5 inside of it.