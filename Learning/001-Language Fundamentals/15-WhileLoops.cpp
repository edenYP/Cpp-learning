#include <iostream>
#include <vector>
#include <cmath>
#include <string>


using namespace std;

int main(){

//                                                                                              while loop - keeps running until as long as a statement is true.


int age = 0;
string name;

while(name.empty()){

    cout << "Enter your name\n";

    getline(cin, name);

}




while(age <= 0){

    cout << "Enter your age";
    cin >> age; //              THIS does not protect cin from failing incase the user types some invalid output eg- abc. if that happens, the loop will keep repeating endlessly so we add another line of code downbelow.


    if(cin.fail()){

        cin.clear(); // this removes the fail state

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // this removes the input buffer and stops it from entering fail state again.

        age = 0;

    }



}
 
cout << "So your name is " << name << " and your age  is " << age << '\n';

cin.ignore();
cin.get();


return 0;



}