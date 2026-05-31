#include <iostream>

    using namespace std;
    
int main() {


/*  
    Type conversion is used to convert a value from one data type to another. 
    There are two types of type conversion:
    1. Implicit type conversion (also known as type coercion): This is where the value gets automatically converted by the compiler.
    2. Explicit type conversion (also known as type casting): This is where you manually convert a value from one data type to another.
*/


    int x = 2;
    int y = 5;

// std::cout << "x / y = " << (double) x / y << std::endl;      [output will be 0 without type conversion (double) because both are integers so we will use type conversion to convert one of them to float or double.]


// adding (double) before x will make it a double data type and the division will be done in double precision, and you will get 0.4 as the output.





// example 2-


        char CHAR_T = 'z';

        std::cout << "The ASCII value of " << CHAR_T << " is " << (int) CHAR_T << '\n';

// this code will give us the ASCII value of character 'z' which we can later use to make a binary conversion of character 'z' if we want to.


    char number = 's';

    cout << "i like the number " << (float) number << '\n';


    return 0;
}