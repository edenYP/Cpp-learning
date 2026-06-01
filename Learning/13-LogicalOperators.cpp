#include <iostream>
#include <vector>
#include <cmath>
#include <string>


using namespace std;

int main(){

// Logical operators have the same principle idea as that of logic gates, But they are mainly used for bool values. (Fun fact- bitwise operators work on the same principle too but they are mainly for bits of letters and alphabets.)


//                                                                                      1: AND OPERATOR (&&)



// This example can be further used for making a decision tree.
bool hungry;
bool money;

cout << "are you hungry? (1)Yes (0)No\n";

cin >> hungry;

cout << "do you have money? (1)Yes (0)No\n";

cin >> money;


if(hungry == true && money == true){


    cout << "Go buy some food or order some!";

}

else if(hungry == true && money == false){
    cout << "get a job bro";
}



else if(hungry == false && money == true){
    cout << "Okay have a good day! make sure to order food if you get hungry.";
}

else{
    cout << "Aight you need to go to work for your paycheck befoore you get hungry again";
}






//                                                                                                  2: NOT Operator (!): reverses any output e.g- if(money): money true. if(!money): money false


//                                                                                                  3: OR Operator(||): gives a true result if either of the conditions is true.


/* e.g- what are you here for? (1) Work (0) Visitor

    if(work || visitor){

        cout << "Welcome!\n";
    }

    else{
        
        cout <<"You are not allowed here\n";

    }


    explanation- basically what's happening here is that if you satisfy any of the above condition (visitor or here for work), you are allowed into the site as the Or operator needs only one condition to be true to work.




*/



cin.ignore();
cin.get();



    return 0;


}