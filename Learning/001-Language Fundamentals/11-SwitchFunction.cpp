#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
int main() {

//                                  if, else if, else are more commonly used for comparing ranges (>= 18, < 18 etc). switches are better to use for comparing exact values of a variable (check if a =1,2,3,4 or 5).





                // here we'll make a prototype for a future project menu that let's us choose one of our learning file and opens it. i cannot finish this yet as i do not know how to read write or open files yet.



int file;


cout << "Please Choose the file you wish to open (1-11)" << '\n';

cin >> file;

switch(file){

    case 1:

    cout << "opening file 1- Basics of Cpp";
    
    break;

    case 2:

    cout << "opening file 2- Variables";

    break;

    case 3:

    cout << "opening file 3- Namespaces";

    break;

    case 4:

    cout << "opening file 4- Typedef";

    break;

    case 5:

    cout << "opening file 5- Operators";

    break;

    case 6:

    cout << "opening file 6- Typeconversion";

    break;

    case 7:

    cout << "opening file 7- User Inputs";

    break;

    case 8:

    cout << "Opening file 8 - Math Functions";

    break;

    case 9: 

    cout << "Opening file 9 - Hypotenuse prototype_v1";

    break;

    case 10:

    cout << "Opening file 10 - If functions";

    break;

    case 11: 
    
    cout << "You are already here";

    break;



}











return 0;








}