#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <limits>
#include <string>

/* BUBBLE SORT:
1: Beginner-friendly sorting algorithm.
2: Compares neighboring numbers one by one.
3: If the left number is bigger than the right,
4: they are swapped.
5: Repeats multiple passes until the array is sorted.

  Example:
   5 3 1
     ↓
   3 5 1
     ↓
   3 1 5
*/

using namespace std;

void swap(int rollno[], int tempnumber, int size);

int main(){


int rollno[]= {3,4,7,2,1,10,9,8,6,5};
int size = sizeof(rollno)/sizeof(rollno[1]);

int tempnumber;

swap(rollno, tempnumber, size);


for(int i = 0; i < size; i++){

    cout << rollno[i] << '\n';
}













return 0;
}





void swap(int rollno[], int tempnumber, int size){





for(int i = 0; i < size - 1; i++){
    for(int k = 0; k < size - 1; k++){
            if(rollno[k] > rollno[k+1]){
                tempnumber = rollno[k];
                rollno[k] = rollno[k+1];
                rollno[k+1] = tempnumber;
                tempnumber = 0;
            }
    }    
}






}