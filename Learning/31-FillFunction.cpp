#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <limits>
#include <string>


using namespace std;


// fill() = used to fill an array with specified value.
// fill(beginning, end, value).


int main(){

string movies[100]; // this array can contain a maximum of 100 elements.


fill(movies, movies + 50, "spiderman"); // fill the first 50 elements with spiderman
fill(movies + 50, movies + 100, "superman"); // fill the last 50 elements with superman

// foreach loop

for(string movie : movies){
    cout << movie << '\n';
}





return 0;

}