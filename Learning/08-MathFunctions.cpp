#include <iostream>
#include <cmath>    //             <-----------------                             important to use math functions.

using namespace std;

int main(){

//                                                                                 1) Max and Min function: compares value between variables and returns the maximum and minimum value respectively.

float x = 9;
float y = 3;

float z = max(x,y);
float v = min(x,y);

cout << "max value of z is " << z << '\n';
cout << "min value of v is " << v << '\n';


//                                                                        2) Absolute function: finds the distance of a number from zero. distance can't be negative so it'll always return a positive value



float a = -5;
float b = abs(a);

    cout << "absolute value of a is " << b << '\n';   
    
    
//                                                                               3) Pow and Sqrt function: power and square root functions. pow(base, exponent) and sqrt(number)


float u = pow(2, 3); // 2 to the power 3.
float w = sqrt(4); // square root of 4.


//                                                                  4) Round, Ceil and Floor functions: round will round off the number, ceil will round up the number, floor will round down the number.


    
float m = 4.3;
float n = 4.7;

float r = round(m); //output is 4
float r = ceil(m); //output is 5, rounded up.
float r = floor(n); //output is 4, rounded down.





//                                                                               for more math functions, use this: https://cplusplus.com/reference/cmath/

    
    
    return 0;

}