#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <limits>




//                                                                              A pointer is basically a variable that stores (*) the memory address (&) of another variable.



int main(){


    std::string name;

    std::cout << "what's your name sir?\n";

    getline(std::cin, name);

    // WE'LL use the address of operator (&) to get the memory address of this variable and store it using dereference operator (*).

    // WE'LL have to use the same variable type of the pointer as that of the variable we want to store address of.


    std::string* pointer1 = &name;

    std::cout << "Your name's memory address is " << pointer1 << '\n';

    std::cout << "Your name is " << *pointer1 << '\n';              // if we use * with a pointer, it'll display the value stored in that variable instead of the memory address.











//                                                                                                  Difference between a Pointer And an Array.



int numbers[5] = {1,2,3,4,5};

std::cout  << "Here's the address of the first element of an array (This is called array decay) " << numbers << '\n';   // Arrays are NOT pointers.
                                                                                                                        // In most expressions, the array name automatically converts (decays)
                                                                                                                        // into a pointer to its first element. so we'll get the address of it when printing it.





int *ptr = numbers; //                                                                           2: This will also store and print the address of the first element.

std::cout  << "Same address as that of above- " << ptr << '\n';






// THIS WILL STORE THE ADDRESS OF THE ARRAY AS A WHOLE. WE need to create an array type pointer to store the address of an array, example below.





int (*ptr2)[5] = &numbers; 
std::cout << "Here's the address of the ENTIRE ARRAY " << ptr2 << '\n';








        //                                                                              Here's my messy analogy of all of this.


        /*
        
        
        
        
        
                                basically the reason this array and the first element has the same address is because-
                                it's like a house being in the block A
                                and THAT house is the first house in the block,
                                The block begins where the first house begins, so they have the same starting address.
                                
        
        
            THE DIFFERENCE?


            The difference is that when we skip a house, we move up by (house address + 1), but when we move up by a block- we skip A BUNCH of houses, so basically (Block address + 1).
            e.g- house 1 and block 1 address (100 main street)
                 house 2 address in block 1 (101 main street)
                block 2 address (200 main street)   




                when moving up a block, we skip a bunch of houses but when moving up a house, we only skip by one. same thing applies in an array.

                skipping one element = 0x1004       (1 int variable = 4 byte)
                skipping one block  = 0x1014  (assuming that it's an array with 5 int elements. 20 bytes total)

                - the number jump when skipping an array address depends upon what the pointer points to, int = 4 bytes. double = 8 byes. int[5] = 20 bytes.
        
        
        
        
        
        
        
        
        
        
        */











    return 0;
}
