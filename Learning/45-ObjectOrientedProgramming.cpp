#include <iostream>



// Object - A collection of attributes (characterstics) and methods (functions inside a class).
// A class acts as a blueprint and they can be used to mimic real world items.





class Spider{

    public:    // If you don't make a class public. it'll be inaccessible 


    std::string name;
    int age;
    int legs = 8; // Default attritube, every spider will have this.


    void climb(){
        std::cout << name << " climbs the wall\n";
    } // This is called a method. function inside a class. 
    void eat(){
        std::cout << name << " eats\n";
    }




};





int main(){

    Spider spider1;

    spider1.name = "spidey";
    spider1.age = 11;

    spider1.eat();
    spider1.climb();










    return 0;
}