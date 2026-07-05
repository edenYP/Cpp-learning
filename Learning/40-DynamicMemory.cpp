#include <iostream>

//                     Dynamic memory stores the input in heap memory. The heap memory is a pool of memory that is used for dynamic memory allocation. The heap memory is managed by the operating system and is not automatically deallocated when the function that created it returns. Therefore, it is important to free the memory when it is no longer needed to avoid memory leaks.

int main() {

    int *pnum = nullptr; // creating a null pointer where we'll store the dynamic address.

        pnum = new int; // creating a dynamic memory address for an integer.

    *pnum = 10; // assigning value to the dynamic memory address.


    std::cout << "Here is your memory address: " << pnum << '\n';
    std::cout << "Here is your value: " << *pnum << '\n';

    delete pnum; // freeing up the memory address that was created for the integer. (if we don't free memory address, it will cause a memory leak.)









    // Storing an array in dynamic memory.




    // we'll create a dynamic memory address for an array of integers.

    int numbers[5] = {1,2,3,4,5}; // creating a static array of integers.
    int *parray = nullptr;

    parray = new int[5]; // creating a dynamic memory address for an array of integers. (notice the 5)

    for(int i = 0; i < 5; i++)  {

        parray[i] = numbers[i];

        std::cout << "Here is your memory address of element " << i << ": " << &parray[i] << '\n';
        std::cout << "Here is your value of element " << i << ": " << parray[i] << '\n'; 
        std::cout << "*************************************" << '\n';
    }

//  Question i had when learning this: why do we do parray[i] = numbers[i] instead of doing *parray[i] = numbers[i]?


// that is beacuse [] is itself an operator that dereferences the pointer. parray is a pointer to first element of the array.
// so doing parray[2] converts it to *(parray + 2) which means that dereference the element at the address of parray + 2.




}