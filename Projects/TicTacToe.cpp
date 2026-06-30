#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>




void wincondition();
void userinput();
void tictactoe();

char board[3][3] = {{'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}};




int main(){
    do{
        char response;
        std::cout << "Do you want to play TicTacToes? (y/n) \n";
        std::cin >> response;
    
        if(response == 'y'){
        std::cout << "Aight bet, goodluck! have fun!\n";

            std::cout << "*****************************************\n";

            tictactoe();
            userinput();
            wincondition();









        }





        else if(response == 'n' || response == 'N'){
            std::cout << "Hope you had fun!\n";
            break;
        }






    }while(true);



    return 0;
}


void tictactoe(){
    int userresponse;


std::cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << '\n' << "----------"  << '\n' << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << '\n' << "----------" << '\n' << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";

std::cout << "***************************************\n";

std::cout << "Pick a square to mark as X -(1,1,1... etc)\n" << '\n';

std::cin >> userresponse;






}



void userinput(){


}




void wincondition(){


}


