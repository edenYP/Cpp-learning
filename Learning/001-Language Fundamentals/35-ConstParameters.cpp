#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <limits>
#include <string>


void ConstParameter(const std::string name, const int age);




int main(){

//                                                                              CONST PARAMETERS ARE USED TO MAKE PARAMETERS IN A FUNCTION READ-ONLY. 
//                                                                                                                              THIS IS MORE SECURE AND CONVEYS INTENT USEFUL FOR REFERENCES AND POINTERS.

//  HERE'S AN EXAMPLE.


int age = 21;
std::string name = "Son";



ConstParameter(name, age);


return 0;


}




void ConstParameter(const std::string name, const int age){   //                THE VALUES OF THESE VARIABLES CAN'T BE CHANGED AS THEY'RE CONST NOW. THEY'RE READ-ONLY NOW.


    int age = 0;
    std::string name = "Bro";


    std::cout << name << '\n';              // BECAUSE WE TRIED TO CHANGE VALUES OF CONST PAREMETERS- WE'LL GET AN ERROR IN PRINT.
    std::cout << age << '\n';

}