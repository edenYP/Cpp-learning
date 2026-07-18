#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

//                                                                                                  User-Defined Functions: Basically reusable blocks of code.




// Here's an example of a user-defined function that calculates the area of a circle given its radius.

double CalculateArea(double radius);

int main(){

   

        double radius;
        cout << "Enter the value of radius of the circle whose area you want to calculate.\n";


        cin >> radius;

        double area = CalculateArea(radius);

        cout << "the area of the circle with radius " << radius << " is " << area;








}



double CalculateArea(double radius){

    const double pi = 3.141592;

    double area = pi * pow(radius, 2);

    return area;

}
