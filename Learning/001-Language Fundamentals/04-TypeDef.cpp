#include <iostream>
#include <vector>




//                                  IMP: THESE ARE ONLY USED FOR TYPES AND NOT OBJECTS (EG- CAN'T BE USED ON STD::COUT AS IT IS AN OBJECT)




//                                       1)   Typedef is used to give a new name to an existing type. it is kinda like a nickname for a type. it is used to make it easier to read and write code.

//                                                  eg: typedef std::vector<std::vector<int>> Pairlist;    This changes the name of the type std::vector<std::vector<int>> to Pairlist.


typedef std::string String_T;    // This changes the name of the type std::string to String_T.

int main(){

    String_T Hello = "Hello World!";  // can use String_T instead of std::string here because of typedef we used above.

    std::cout << Hello;


//                                                       2)  using type is a newer way to do same thing as typedef, and is mainly preffered over typedef because it can help with templates.



    using String_T = std::string;   // This will do the same thing as typedef used above.

    String_T Hello2 = "Hello world again!";
    std::cout << Hello2; 


    return 0;
}