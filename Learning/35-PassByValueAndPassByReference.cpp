#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>


//                                                                              You can pass by reference by using the memory address operator (&).


void passbyvalue(std::string x, std::string y);
void passbyreference(std::string &a, std::string &b);



int main(){


//                                                                                                                                                      1: PASS BY Value

std::cout << "*****************************************************\n";
std::cout << "                  PASS BY VALUE                       \n";


std::string x = "orange";
std::string y = "mango";


passbyvalue(x, y);

std::cout << "X: " << x << '\n';                    //                  You will notice that the function did not swap these-
std::cout << "Y: " << y << '\n';                    //                                              That's beacuse when you pass by value, the function creates a copy of the variable and works on those instead of the variables in main function.


std::cout << "*******************************************************\n";
std::cout << '\n';
std::cout << '\n';
std::cout << "*******************************************************\n";
std::cout << "                      PASS BY REFERENCE                 \n";

std::string a = "Peanut";
std::string b = "Almonds";

passbyreference(a,b);


std::cout << "A: " << a << '\n';
std::cout << "B: " << b << '\n';











return 0;


}


void passbyvalue(std::string x, std::string y){
std::string temp;

//                                                                  Swapping the two variables 


temp = x;
x = y;
y = temp;


}

void passbyreference(std::string &a, std::string &b){               // NOTICE HOW WE USE & here? 

std::string temp;
temp = a;
a = b;
b = temp;

}