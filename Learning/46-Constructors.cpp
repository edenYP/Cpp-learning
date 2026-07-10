#include <iostream>


// Constructor = a special method to assign attributes that gets automatically called once setup.


class Student{
public:

std::string name;
int age;
bool enrolled; 

// Setting up a constructor. if your constructor arguments are not the same named as above variables, then you don't need to add the "this-> " keyword.

    Student(std::string name, int age, bool enrolled){

        this->name = name;
        this-> age = age;
        this-> enrolled = enrolled;

    }





};



int main(){


Student student1("Eden", 18, 1);    // WE can assign values like this because of the constructor.
Student student2("Netsu", 19, 0);
Student student3("Steve", 16, 1);









    return 0;
}