#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <limits>
using namespace std;

int main(){



//                                                                      A do-while loop first executes the command and then checks the condition, if that condition is true. it repeats again over and over.



int age;
string name;


do{

cout << "What is your name? " << '\n';

cin >> name;

}while(name.empty());   // this will first execute this command and then check if the condition is true and then decide to repeat it.



do{

cout << "what is your age?\n";

cin >> age;



    if(cin.fail()){

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        age=0;

    }





}while(age <= 0);





cout << "so your name is " << name << " and your age is " << age;







}