#include <iostream>
#include <utility>


// std::swap = exchanges values of two objects.
// Time complexity: O(1) for simple types.


class num{
    public:
    int value;

    num(int value){
        this->value = value;
    }
};

int main(){
num num1(5);
num num2(10);

std::swap(num1.value, num2.value);




    return 0;
}