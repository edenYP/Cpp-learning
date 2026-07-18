#include <iostream>
#include <cmath>
#include <ctime>
#include <limits>
#include <cstdlib>
#include <vector>
#include <string>


//                                                                                                                      Linear Array Search.



using namespace std;

int searcharray(int numbers[], int size, int inputnum);

int main(){

int numbers[] = {1,2,3,4,5,6,7,8,9,10};

int index;
int size = sizeof(numbers)/sizeof(numbers[1]);
int inputnum;

cout << "which number do you want to search for: " << '\n';

cin >> inputnum;

index = searcharray(numbers, size, inputnum);

if(index != -1){
cout << "your number is at the position " << index << " in the array.";
}

else if(index == -1){

    cout << "your number was not found in the array.";
}





}




int searcharray(int numbers[], int size, int inputnum){

for(int i = 0; i < size; i++){

    if(numbers[i] == inputnum){

        
        return i;
    }


}


return -1;


}