#include <iostream>


// what are functors?
// - a class of object that can be called like a function, because it's class defines operator()


class DMG{
int dmgmultiplier;



public:

DMG(int dmgmultiplier){ // constructor.
    this-> dmgmultiplier = dmgmultiplier;
}
// forgot syntax for a constructor here, it's confusing sometimes :sob:

void SetMultiplier(int newmul){     // a setter (for no reason).
    dmgmultiplier = newmul;
    return;
}



auto operator()(int basedmg){   // operator
    return dmgmultiplier * basedmg;
}

auto operator()(float basedmg){ // operator overloading
    return dmgmultiplier * basedmg;
}

};


void printdmg(int damage, DMG multiplier);



int main(){
DMG multiplier(2);
int basedamage = 50;
printdmg(basedamage, multiplier);

multiplier.SetMultiplier(3);
printdmg(basedamage, multiplier);
}



void printdmg(int damage, DMG multiplier){
    std::cout << "Total dmg: " << multiplier(damage) << '\n';
    // DO NOT FORGET TO GIVE THE ARGUMENT TO THE OPERATOR.
    return;
}



// Why functors?

// A functor is useful when we want to package:
//  - behavior
//  - state

// into a single object that can be passed around as a callable.

// A functor can be passed to functions that accept callable objects,
// allowing the receiving function to execute custom behavior.

// Would you use it?
// Sometimes. 
// Especially when the callable needs to store state. (like multiplier or smth)