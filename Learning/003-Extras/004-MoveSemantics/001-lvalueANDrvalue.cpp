#include <iostream>



// lvalue: an expression that refers to an identifiable object.
// rvalue: an expression that generally represents a value/temporary that isn't an identifiable persistent object.



int main(){

        int x = 10;

    // x is the lvalue here, while 10 is the rvalue.

    std::cout << "Before change x: " << x << '\n';

    // creating a reference for the lvalue x.

        int& ref = x;

    // ref is an alias for x.
    // Changing ref changes the object x refers to. (10 in this case)
        ref = 100;
            std::cout << "after change x: " << x << '\n';

    // creating a reference for the rvalue 10.

    int&& refe = 10;

    // this is a reference (type int&&), but when later used as an expression- it'll be treated as an lvalue.

        // basically- any expression that can be named and refered to is an lvalue.



    return 0;
}



