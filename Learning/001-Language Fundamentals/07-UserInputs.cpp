#include <iostream>
#include <vector> // vector is a resizable ordered collection of elements e.g std::vector<int> positions; and then store coordinates in it, like (1,2,3). with vector you can edit them pretty easily too.

using namespace std;

int main() {

//                                                                                                           1) User Inputs

//      1) cout and << are used to output data to the console.
//      2) cin and >> are used to take input from the user. cin is used to read input from console and store it in a variable.



    cout << "What is your name?" << '\n';
    
    string name;
    
    cin >> name; //     this will take input from the user and store it in the variable name. it will only take the first word of the input, To take whole line as input you can use GETLINE() function.

    cout << "Hello " << name << "! and what is your age?" << '\n';
    
    string age;

    cin >> age; 

    cout << "So your name is " << name << " and you are " << age << " years old. nice to meet you!" << '\n';


    
    
    //                                                                2) GETLINE() function allows you to store whole line of input in the variable instead of just the first word.


    
    cout << "What is your full name then?" << '\n';
        string fullname;

        getline(cin >> ws, fullname);   //   this will take the whole line of input and ws will clear our any whitespaces from previous input. 
    
    cout << "So your full name is " << fullname << ". sounds good!" << '\n';







    return 0;
}