#include <iostream> 
  int main(){
    //                                                              [introduction to ionstream, endl and std.]


    std::cout <<"1) iostream is the header that contains all the basic inputs and outputs" << std::endl;
    std::cout <<"2) it is used to include the functionality of input and output in C++ programs." << std::endl;
    std::cout <<"3) endl is used to endline, and std is a container that contains all the standard C++ libary functions and objects. example- strings, vectors, cout, cin, etc." << std::endl;
    std::cout <<"4)int main() defines where the program starts executing from and return 0; is used to indicate the end of the main function and to return a value of 0 if program ran successfully if else = return 1" << '\n';

    //                                                                       [difference between \n and endl] 


    std::cout <<"5) It is better to use \\n generally because it is faster than endl, while endl is used when you want to skip the buffer and move to next line immediately however there may be a small waiting time when using endl because it flushes the buffer, while \\n does not." << std::endl;
        std::cout <<"example= program ---> buffer ----> output while endl completely skips the buffer and directly goes to output."<< '\n';

    
    // this is a one line comment //

    /* 
        This 
        is a
        multi
        line comment
    */
    
   
    return 0;
 }