#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;



//                                      srand is basically used to set the seed for rand, it's like the starting point for the sequence of random numbers.



int main(){


srand(time(NULL)); 

// this sets the seed for random number generator according to the current time, it's not completely random so the pattern can be cracked (that's why it's not recommended for cryptographic purposes). It is called pseudo-random.

int i;
for (int i = 0; i <= 9; i++){


int x = rand(); 


cout << x << endl;

}


// this will generate 10 random numbers between 0 and RAND_MAX (constant defined in <cstdlib> which is typically 32767).







cout << RAND_MAX << endl;








}