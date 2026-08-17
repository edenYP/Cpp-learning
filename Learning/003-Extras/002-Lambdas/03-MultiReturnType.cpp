#include <iostream>



// we're gonna be learning about how to handle different return types in a single lambda function.
// usually a lambda function figures out the return type automatically, but when there's more than one-
// return type, we need to specify the return type to it.




int main(){
bool condition = false;

std::cout << "are you gay? (0: no, 1: yes)\n";

std::cin >> condition;

auto multiply = [=]() -> double {

if(!condition){
  return 10;    // int return value here.
}

if(condition){
  return 20.5;  // double return value here.
}

};


std::cout << multiply() << '\n';



  return 0;
}

