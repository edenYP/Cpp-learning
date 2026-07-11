#include <iostream>


// Overloaded constructors = Multiple constructors with same name but different parameters, which allows for multiple arguments while creating an object.


class Pizza{
public:
std::string topping1;
std::string topping2;


Pizza(){

}

Pizza(std::string topping1){
    this-> topping1 = topping1;
}

Pizza(std::string topping1, std::string topping2){
    this -> topping1 = topping1;
    this-> topping2 = topping2;
}

// here we have multiple constructors with same name but different parameters so we can create objects with varying arguments.


};




int main(){

Pizza pizza1; // no topping pizza

Pizza pizza2("pineapple"); // Pineapple pizza (ew)

Pizza pizza3("Pineapple", "Banana");


// Here we have multiple different objects with different paremeters. all thanks to overloaded constructors btw (go thank them son).


return 0;
}