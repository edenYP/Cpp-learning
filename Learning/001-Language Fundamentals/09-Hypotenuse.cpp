#include <iostream>
#include <cmath>

using namespace std;


int main(){

    float a;
    float b;


    cout << "type the numbers, you want to calculate the third side of, must be perpendicular and base" << '\n';

    cout << "type the first number" << '\n';


    cin >> a;

    cout << "type the second number";

    cin >> b;

    float c = sqrt(pow(a,2) + pow(b,2));

    cout << "your third side is " << c << '\n';

    

    return 0;


}