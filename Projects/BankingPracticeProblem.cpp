#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>



using namespace std;

int balance = 1000;
int moneyonhand = 1000;
int moneywithdrawn;
int moneydeposit;


void checkbalance();

void withdraw();

void deposit();

int main(){

do{

int action;



cout << "what would you like to do?\n";
cout << "****************************\n";

cout << "1: withdraw \n 2: deposit \n 3: check balance \n 4: exit\n";





cin >> action;
if(action == 1 || action == 2 || action == 3 || action == 4){

switch(action){


    case 1:

    cout << "how much would you like to withdraw\n";

     cin >> moneywithdrawn;

        if(balance >= moneywithdrawn){

        withdraw();
        }

        else{
            cout << "not enough money in bank to withdraw\n";
        }
    break;

case 2:

cout << "how much would you like to deposit?\n";
 cin >> moneydeposit;
if(moneyonhand >= moneydeposit){
   

    deposit();
}

else{
    cout << "you broke.\n";
}
break;



case 3:

checkbalance();

continue;

case 4:

cout << "logging out.\n";

return 0;

}

}

else{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "invalid input.\n";
    continue;
}





}while(true);

}

void checkbalance(){

    cout << "This is your current balance" << balance << '\n';
    return;
}


void withdraw(){

    balance-= moneywithdrawn;
    moneyonhand+= moneywithdrawn;

    cout << "You have withdrawn " << moneywithdrawn << " dollars\n";
    cout << "This is your remaining balance " << balance << '\n';
}


void deposit(){
    balance+= moneydeposit;
    moneyonhand-= moneydeposit;
    cout << "You have deposited " << moneydeposit << "into your bank.\n";
    cout << "You have " << balance << "in your bank\n";
}

