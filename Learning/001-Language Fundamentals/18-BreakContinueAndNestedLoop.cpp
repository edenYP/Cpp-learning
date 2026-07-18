#include <iostream>
#include <cmath>
#include <vector>
#include <string>



using namespace std;

int main(){


//                                                      1: BREAK: used to break the loop


int i;
/*




for(i= 1; i <= 10; i++){
    
    cout << i << endl;
    
    if(i== 5)   // this right here is a nested loop, if a loop if used inside another loop, it is called a nested loop. (the inner loop is called nested loop, while outer loop is called parent loop).
    {
        break;}






}



THIS code will print numbers from 1 to 10 but it'll stop at 5 because of the break statement.



*/ 











//                                                    2: CONTINUE: used to skip the current iteration of the loop and continue with the next iteration.





for(i=1; i <=10; i++){


    if(i==5){

        continue;
    }

    cout << i << endl;
}




// this will print numbers from 1 to 10 but skip 5 beacuse of the continue statement.





return 0;


}







