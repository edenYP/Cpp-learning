#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <limits>
using namespace std;
int main(){


    // here is an array.

    int price[] = {1,2,3,4};
// each element in an array has a position starting from 0.

cout << price[1] << '\n'; // this will print 2.

cout << price[0] << '\n'; // this will print 1.


price[4] = 5; // this will add 5 in price array at 4th position.

return 0;
}