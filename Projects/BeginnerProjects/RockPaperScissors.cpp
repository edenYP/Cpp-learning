#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>


using namespace std;
void ComputerChose(string generatedresponse);
string Generate();
void lose();
void win();
void playagain(char& response);
vector<int> winstreak;


//                                                                                                      NOTE: I could've made the winstreak simpler but did not as i wanted to practice using vectors- which i did.
//                                                                                  This project is only made for practice of the stuff i learnt so far. i haven't learnt enums yet to use swich statements so don't mind my if statements.


int main(){
srand(time(0));
do{
char response;

cout << "*******************************************" << '\n';


cout << "welcome to ROCK HARD, PAPER CUT, SCISSOR GIRLIES" << '\n';

cout << "do you want to play? y/n " << '\n';

cin >> response; 

if(response == 'y' || response == 'Y'){


    do{
    string answer;    
    cout << "Aight bet, choose one of the following: Rock, Paper, Scissor\n";
    string generatedresponse = Generate();
    cin >> answer;
        cout << '\n';
    if(answer == "Rock" || answer == "rock"){

        if(generatedresponse == "Scissor"){
          ComputerChose(generatedresponse);
            cout << "You won!";
            win();
            cout << "Your current win streak is " << winstreak.size() << '\n';
           playagain(response);
        }

        else if(generatedresponse == "Rock"){
          ComputerChose(generatedresponse);
            cout << "That's a tie, lucky you aye\n";
            cout << "Your current win streak is " << winstreak.size() << '\n';
           playagain(response);
        }
        else if(generatedresponse == "Paper"){
          ComputerChose(generatedresponse);
            cout << "You lose!\n";
           cout << "You lost your winstreak of " << winstreak.size() << '\n';
            lose();
          playagain(response);
    }
    }

    else if(answer == "Paper" || answer == "paper"){


        

        if(generatedresponse == "Scissor"){
          ComputerChose(generatedresponse);
            cout << "You Lost!";
            cout << "You lost your winstreak of " << winstreak.size() << '\n';
            lose();
           playagain(response);
        }

        else if(generatedresponse == "Rock"){
          ComputerChose(generatedresponse);
            cout << "You won!\n";
            win();
            cout << "Your current win streak is " << winstreak.size() << '\n';
           playagain(response);
        }
        else if(generatedresponse == "Paper"){
          ComputerChose(generatedresponse);
            cout << "That's a tie aye, you loser got lucky.\n";
            cout << "Your current win streak is " << winstreak.size() << '\n';
           playagain(response);
    }
    }


    else if(answer == "Scissor" || answer == "scissor"){


        

        if(generatedresponse == "Scissor"){
          ComputerChose(generatedresponse);
            cout << "That's a tie aye, you got lucky loser.\n";
            cout << "Your current win streak is " << winstreak.size() << '\n';
           playagain(response);
        }

        else if(generatedresponse == "Rock"){
          ComputerChose(generatedresponse);
            cout << "You LOST! HAHAHA LOSER\n";
             cout << "You lost your winstreak of " << winstreak.size() << '\n';
            lose();
           playagain(response);
        }
        else if(generatedresponse == "Paper"){
          ComputerChose(generatedresponse);
            cout << "YOU WON!\n";
              win();
            cout << "Your current win streak is " << winstreak.size() << '\n';
       playagain(response);
    }}


    else{

    cout << "Invalid response, you monkey.\n";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');


        continue;

    }





    }while(response == 'y' || response == 'Y');



}



    else if(response == 'n' || response == 'N'){


        cout << "Thanks for playing, hope to see you again";
        break;
    }


    else{


        cout << "invalid response." << '\n';
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
    }


}while(true);












return 0;
};



void win(){
    winstreak.push_back(1);
}
void lose(){
    winstreak.clear();
}





string Generate(){

    string generatedresponse[]= {"Rock", "Paper", "Scissor"};
    int i = rand() % 3; // will generate a number between 0-2

    return generatedresponse[i];

}


void ComputerChose(string generatedresponse){

    cout << "The computer chose " << generatedresponse << " and that means..." << '\n';
}

void playagain(char& response){ //                                                                                      WE ARE USING & HERE TO LET THE FUNCTION KNOW THAT IT CAN USE THE SAME EXACT VARIABLE IN THE MAIN FUNCTION INSTEAD OF CREATING A COPY.
    //                                                                                                                                                                      IT is called Pass-By-Reference.

    cout << "do you want to play again?y/n\n";
    cin >> response;

}