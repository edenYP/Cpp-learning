#include <iostream>


// surrounding variables = variables declared in the same scope.


int main(){

int x = 3;
int y = 4;
int z = 5;


// passing all surrounding vairables:

// read only:
[=](){
    std::cout << "[copied elements]: " << x << y << z << '\n';
    return 0;
}();

// read-write only:

[=]() mutable 
{
x = 5;
y = 3;
z = 4;
std::cout << "[copied elements]: value changed.\n";
}();


// passing all surrounding variables by reference:
// pass by ref is always in read-write only mode.

[&](){
x = 3;
y = 4;
z = 5;

std::cout << "[Copied elements]: values reverted\n";

}();



    return 0;
}