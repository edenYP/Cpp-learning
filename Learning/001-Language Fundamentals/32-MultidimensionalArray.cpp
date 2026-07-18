#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>


using namespace std;


int main(){



string cars[][3] = {{"mercedes", "benz", "boomboom"}, // general format = string any[rows][coloumns].
                   {"bugati", "chevron", "tung tung sahur"},
                   {"pagani", "limited", "miau"}};





// iterating

int rows = sizeof(cars)/sizeof(cars[0]);
int coloumns = sizeof(cars[0])/sizeof(cars[0][0]);

/*




for(int i = 0; i < rows; i++){                             THIS WILL GIVE US THE MEMORY ADDRESSES FOR EACH OF THE ARRAYS. I.E- array 1(memory address), array2, array3.
    cout << cars[i] << '\n';
}




*/








// fix and actual iterating way:



for(int i = 0; i < rows; i++){

cout << "array no " << i + 1 << '\n';
cout << "****************************" << '\n';

    for(int j = 0; j < coloumns; j++){

        cout << cars[i][j] << '\n';




    }


cout << "***********************" << '\n';

cout << '\n';


}













return 0;

} 

























