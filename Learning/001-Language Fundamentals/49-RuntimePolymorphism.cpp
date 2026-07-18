#include <iostream>

//                  CONCEPT-            A POINTER OF A PARENT CLASS CAN POINT TOWARDS AN OBJECT OF ANY OF IT'S CHILD CLASSES.


class Animal{
public:

virtual void bite(){     

    // CONCEPT:

// virtual tells C++ to wait until runtime,
// inspect the actual object the parent pointer points to,
// and call that object's overridden method instead of the parent method.


std::cout << "This animal bites!\n";


}


};


class Dog : public Animal{
public:

// CONCEPT:

// override: it overrides the parent method.

void bite() override{

std::cout << "The Dog bites!\n";

}

};



class Cat : public Animal{
public:
    void bite() override{
        std::cout << "The cat bites!\n";
    }
};



int main(){

    Animal* animal1 = new Dog();        //   Creates a pointer for an Animal and it points to a DOG, 
    Animal* animal2 = new Cat();        //   Virtual tells the compiler to wait until runtime and inspects the object type the ANIMAL pointer points towards.
                                        //   Then it calls the overriden method.
    animal1->bite();        
    animal2->bite();

/*
Expected output:

The dog bites!
The cat bites!


*/




    delete animal1;
    delete animal2;

    return 0;
}





// Some use cases that i can think of:

// when handling multiple random enemies, NPCS, weapons, items in a game.


/*
Summary

Inheritance:

    A child class inherits from a parent class.

Override:

    A child class replaces a parent's virtual function.

Virtual:

    Tells C++ to determine which function to call at runtime
    based on the actual object the pointer points to.

Polymorphism:

    Allows one parent pointer to work with many different
    child objects while automatically calling the correct
    overridden function.
    
*/