#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <limits>
#include <string>


int main(){
                                                    //                                          This creates a null pointer- a pointer that points to nothing. YES, nothing at all. 

std::string *ptr1 = nullptr;


//                                  Dereferencing a nullptr will give us nothing as that points towards nothing. However ptr that stores nullptr has it's own address and you could print it's memory address



std::string name = "Code Jesus";

ptr1 = &name;

// Now ptr1 stores the memory address of name.
// You can dereference it now and it'll give the value stored in name.


std::cout << "Your name is " << *ptr1 << '\n';
std::cout << "Your name is stored at: " << ptr1 << '\n';



// A pointer is basically a variable that stores the memory address of another variable. SO- YOU CAN ALSO STORE THE MEMORY ADDRESS OF ANOTHER POINTER (POINTER THAT POINTS TO ANOTHER POINTER).


std::string **ptr2 = &ptr1; // A pointer that points to memory address of a pointer which points to a memory address of a variable.



std::cout << "***************************************" << '\n'; 

std::cout << '\n';

std::cout << "Ptr2       = " << ptr2 << '\n';
std::cout << "Dereferenced Ptr2       = " << *ptr2 << '\n';
std::cout << "Double dereferenced Ptr2 = " << **ptr2 << '\n';


std::cout  << '\n';
std::cout << "Ptr1        = " << ptr1 << '\n';
std::cout << "Dereferenced Ptr1 = " << *ptr1 << '\n';






    return 0;
}