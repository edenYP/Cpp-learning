#include <iostream>






class Dog{
public:
std::string name;

Dog(std::string name){
    this->name = name;
};



void bark(){
    std::cout << name << "barks!\n";
}

};


int main(){

Dog* dog1 = new Dog("Jack"); // creates a dog class object on the heap and store it's address in the pointer "dog1".


dog1->bark(); // same as (*dog).speak(); - Dereference the pointer and call bark() on the Dog object.


delete dog1;


    return 0;
}