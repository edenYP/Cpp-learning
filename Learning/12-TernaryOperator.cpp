#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main(){

        //              ternary operator is like boolean operator but used in place of if/else statements.

    int age;

    cout << "Enter your age?" << '\n';

    cin >> age;

    age >= 18 ? cout << "you're an adult" : cout << "You're a child";



}