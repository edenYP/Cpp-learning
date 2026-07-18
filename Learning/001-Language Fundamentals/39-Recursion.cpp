#include <iostream>

// recursion is a technique where a function calls itself a number of times until a condition is met. 
// It is mostly used in sorting and searching algorithms. 
// It is mostly used for smaller and simpler problems that can be broken down into smaller subproblems.


/* Advantages of Recursion: 

1: THe code is easier to read.
2: It is easier to debug.


*/


/* Disadvantages of Recursion:

 1: It takes more memory and time to execute.
 2: It is not suitable for large problems as it can cause stack overflow errors.


*/

// What is stack overflow? - It happens when a function calls itself an infinite number of times and does not have a base case to stop.
// It can also happen when a function calls itself too many times and the stack memory is exhausted.

int factorial(int number);

int main(){

    int number;
std::cout << "ENTER  A NUMBER: \n";
std::cin >> number;

std::cout << "The factorial of " << number << " is " << factorial(number);


    return 0;

}






int factorial(int number){
int result;

    if(number > 1){

        return number * factorial(number - 1);
        
        // what this will do is multiply the number with number - 1 while also calling the funtion until number reaches 1

    }
    else if(number <= 1){
        return 1;
    }


}