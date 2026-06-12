#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <string>



using namespace std;


int main(){


int i;

string x[] = {"papaya", "mango", "melon"};


// arrays have fixed size. So you cannot add an element inside it later, you'll have to do it while assigning it a value.

for(i = 0; i < sizeof(x)/sizeof(string); i++){


    cout << x[i] << '\n';



}









return 0;


}