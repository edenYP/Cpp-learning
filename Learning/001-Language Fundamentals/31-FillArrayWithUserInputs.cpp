#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>


using namespace std;

//                                                                                  CASE 1: using single array for different information

int main(){

string profile[4];

cout << "what is your name?\n";

getline(cin, profile[0]);

cout << "what is your age?\n";

cin >> profile[1];

cout << "where do you live?\n";

cin >> profile[2];

cout << "are you married?\n";

cin >> profile[3];

cout << "so here's your profile:\n";


    cout << "your name is " << profile[0] << '\n';

    cout << "your age is " << profile[1] << '\n';

    cout << "you live in " << profile[2] << '\n';

    cout << "married status: " << profile[3] << '\n';



    cout << "******************************" << '\n';
    cout << "next up" << '\n';




//                                                                                                      CASE 2: using single array for similar type of information.


string foods[5];
string temp;


for(int i = 0; i < sizeof(foods)/sizeof(foods[1]); i++){

    cout << "what do you like to eat? (or type 'q' to quit) food no #" << i + 1 << '\n'; // will start from "what do you like to eat? #1" and not "what do you like to eat #0".

    cin >> temp;

    if(temp == "q"){
        cout << "aight see ya!" << '\n';
        break;
    }
    
    else if(temp != "q"){
        foods[i] = temp;
    }
}

cout << "so here's a list of all your favourite food items:\n";
for(int i = 0; !foods[i].empty(); i++){
    cout << foods[i] << '\n';
}









return 0;
}