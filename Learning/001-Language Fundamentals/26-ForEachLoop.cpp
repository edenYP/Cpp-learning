#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>


using namespace std;

int main(){

    //                                          foreach loop - a loop that eases traversal over an iterable data set.

    string names[] = {"patrick", "nigga", "bob"};

    //                                                 1:  using normal for loop to iterate.
    for(int i = 0; i < sizeof(names)/sizeof(string); i++){

            cout << "your name is " << names[i] << '\n';
    };









//                                                  2:  using foreach loop to iterate an array.

string foods[] = {"pineapple", "mango", "apple"};

for(string food : foods){

    cout << food << '\n';
}

// this will iterate all 3 elements without too many constraints


//                      GENERAL FORMAT: for(data-type element-name : iteratble data.) e.g- for(string(data type) food(element name) : foods (iterable data set).

}