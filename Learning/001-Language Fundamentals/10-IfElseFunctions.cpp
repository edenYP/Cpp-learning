#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main() {

    //          If = used for any condition, else if = used for any other condition, else = used for anything that does not fit the above conditions. they check it from top to bottom.




//                                      HYPOTENUSE CALCULATOR FOR ANY SIDE


double a;
double b;
double c;

int Calculate;


cout << "what do you want to calculate? Hypotenuse (1), Perpendicular (2), Base (3)" << '\n';   // A = base, B = perpendicular, C = hypotenuse

cin >> Calculate;





if (Calculate == 1)
{   

    cout << "Enter the Base" << '\n';

    cin >> a;

    cout << "Enter the Perpendicular";
 
    cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));


    cout << "The hypotenuse is " << c << '\n';


}

else if (Calculate == 2){

    cout << "enter the hypotenuse" << '\n';

    cin >> c;

    cout << "enter the base" << '\n';

    cin >> a;

    b = sqrt(pow(c,2) - pow(a,2));

    cout << "your perpendicular is " << b << '\n';


}



else if (Calculate == 3){

    cout << "enter your hypotenuse" << '\n';

    cin >> c;

    cout << "enter your base" << '\n';

    cin >> b;

    a = sqrt(pow(c,2) - pow(b,2));

    cout << "your base is " << a << '\n';

}

 else{

    cout << "invalid side you dumbass";

 }


return 0;




}