#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>




void wincondition();
void userinput(int userresponse, char userside);
void tictactoe(char userside);

char board[3][3] = {{'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}};




int main(){
    do{
        char userside;
        char response;
        std::cout << "Do you want to play TicTacToes? (y/n) \n";
        std::cin >> response;
    
        if(response == 'y'){
            std::cout << "Do you want to play as X or O?\n";
            std::cin >> userside;
            
        std::cout << "Aight bet, goodluck! have fun!\n";

            std::cout << "*****************************************\n";

            for(int i = 0; i < 9; i++){

            tictactoe(userside);
            wincondition();
            }



        }





        else if(response == 'n' || response == 'N'){
            std::cout << "Hope you had fun!\n";
            break;
        }






    }while(true);



    return 0;
}


void tictactoe(char userside){
    int userresponse;


std::cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << '\n' << "----------"  << '\n' << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << '\n' << "----------" << '\n' << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";

std::cout << "***************************************\n";

std::cout << "Pick a square to mark as" << userside <<  " -(1,2,3... etc)\n" << '\n';

std::cin >> userresponse;


userinput(userresponse, userside);



}














void userinput(int userresponse, char userside){

/*

What we want is to change user input into board[0][0], board[0][1], board[0][2].. etc.
so we need to come up with a formula for it.



1: To convert Rows.     

input - row                                                                                                                                                                 input - rows
1     - 0                                                                                                                                                                      0  -  0
2     - 0                                                                                                                                                                      1  -  0                   
3     - 0                                                                                                                                                                      2  -  0
4     - 1                                                                                                                                                                      3  -  1
5     - 1                 ----->                    What we know: There are 0,8 elements inside the array. so we subtract 1 from user input ------->                           4  -  1
6     - 1                                                                                                                                                                      5  -  1
7     - 2                                                                                                                                                                      6  -  2
8     - 2                                                                                                                                                                      7  -  2
9     - 2                                                                                                                                                                      8  -  2
                        




to get an output of 000 from 0,1,2. we divide it by 3 (THIS ONLY WORKS FOR INTS AND NOT DOUBLES AS DOUBLES GIVE US DECIMALS WHILE INTS DROP THE DECIMALS ENTIRELY) i.e - 2/3 = 0.666 (double) --> 0 (int)






                so we'll end up with this.

input - rows
  0   -  0
  1   -  0
  2   -  0
  3   -  1
  4   -  1
  5   -  1
  6   -  2
  7   -  2
  8   -  2



which is exactly what we wanted.




2: Coloumns- We want to convert userinput into 0,1,2.. each time.

input - coloumn                                                                                                                                                                         input - coloumn
1   -   0                                                                                                                                                                                  0  - 0
2   -   1                                                                                                                                                                                  1  - 1
3   -   2                                                                                                                                                                                  2  - 2
4   -   0                                                                           We do the same step as earlier- subtract 1.                                                            3  - 0
5   -   1                                                                                                                                                                                  4  - 1
6   -   2                                                                                                                                                                                  5  - 2
7   -   0                                                                                                                                                                                  6  - 0
8   -   1                                                                                                                                                                                  7  - 1                                                                                                                                                                                  7  - 1
9   -   2                                                                                                                                                                                  8  - 2



to get a recursive pattern, we'll use % operator.


so we'll get something like- 1 % 3 = 1,    2 % 3 = 2,    3 % 3 = 0...















*/

int row = (userresponse - 1)/3;
int col = (userresponse - 1) % 3;

board[row][col] = userside;


}




void wincondition(){


}


