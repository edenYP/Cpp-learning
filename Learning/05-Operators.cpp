#include <iostream>
 
int main() {

//                               Operators (+ - * / %) are used for basic math operations. % = modulus, it gives remainder of a division while / gives the quotient.



// Addition operator (+)

    int a = 5;
    
        a = a + 3;

   // 2nd form

        a+= 3; // another way to write same thing.


// Subtraction operator (-)

    int b = 10;

        b = b - 4;

    // 2nd form

        b-= 4; 


// Multiplication operator (*)

    int c = 3;

        c = c * 2;

    // 2nd form

        c*= 2;


// Division operator (/) 


    int d = 20; // using int because float types don't work with percent

        d = d / 3;

    // 2nd form

        d/= 3;


// Modulus operator (%) will give the remainder instead of the quotient.                IT DOES NOT WORK WITH DOUBLE OR FLOAT DATA TYPES. ONLY WORKS WITH INTEGERS.


        d = d % 3;              // output is 2. as 20/3 = 6 with remainder 2.

    // 2nd form

        d%= 3;              // output is 2. as 20/3 = 6 with remainder 2.










/*
 Order of operations:
1: Parentheses (brackets)
2: Exponents 
3: Multiplication, Division, and Modulus (from left to right)
4: Addition and Subtraction (from left to right)

There are more operators but not important for now.
*/


    int e = 5 + 3 * 4 / 2; // output is 11.

    std::cout << e << '\n';




    return 0;     
}