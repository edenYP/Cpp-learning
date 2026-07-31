#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <limits>



int wincondition(char userside, char computerside);
void userinput(char userside, char computerside);
void tictactoe(char userside, char computerside);
void compinput(char computerside, char userside);
void resetboard();

char board[3][3] = {{'1','2','3'},
                     {'4','5','6'},
                     {'7','8','9'}};




int main(){
    srand(time(0));
    do{
        bool result;
        char userside;
        char computerside;
        char response;
        std::cout << "Do you want continue? (y/n) \n";
        std::cin >> response;
    
        if(response == 'y' || response == 'Y'){
            std::cout << "Do you want to play as X or O?\n";
            std::cin >> userside;

                if(userside == 'X' || userside == 'x'){
                        computerside = 'O';
                }
                else if(userside == 'O' || userside == 'o'){
                     computerside = 'X';
                }


            
        std::cout << "Aight bet, goodluck! have fun!\n";

            std::cout << "*****************************************\n";

            for(int i = 0; i < 9; i++){

            tictactoe(userside, computerside);
            int result = wincondition(userside, computerside);
            if(result == 0){ 
                continue;
            }
            if(result == 1){
                break;
            }
            else if(result == 2){
                                            std::cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << '\n' << "----------"  << '\n' << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << '\n' << "----------" << '\n' << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
                std::cout << "YOU LOST" << '\n';
                break;
            }

            if(i == 8){
                std::cout << "TIE BETWEEN YOU TWO" << '\n';
            }
            }



        }


        else if(response == 'n' || response == 'N'){
            std::cout << "Hope you had fun!\n";
            break;
        }


        
            std::cout << "Do you want to play again? (y/n)\n";
            std::cin >> response;

            if(response == 'y' || response == 'Y'){
                resetboard();
                continue;
            }
            if(response == 'n' || response == 'N'){
                std::cout << "SEE YOU LATER!\n";
            }

    }while(true);



    return 0;
}


void tictactoe(char userside, char computerside){


std::cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << '\n' << "----------"  << '\n' << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << '\n' << "----------" << '\n' << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";

userinput(userside, computerside);


}














void userinput(char userside, char computerside){
int userresponse;
do{

std::cout << "***************************************\n";

std::cout << "Pick a square to mark as" << userside <<  " -(1,2,3... etc)\n" << '\n';

std::cin >> userresponse;

    if(std::cin.fail()){
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         std::cout << "Invalid input son.";
         continue;
    }



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
  
if( 0 < userresponse && userresponse <= 9){

        int row = (userresponse - 1)/3;
        int col = (userresponse - 1) % 3;

            if(board[row][col] == userside || board[row][col] == computerside){
                std::cout << "ALREADY TAKEN SPOT, DON'T CHEAT SON\n";
                continue;
            }

            else{
            board[row][col] = userside;
            int win = wincondition(userside, computerside);
            if(win == 1){
                std::cout << "YOU WIN!" << '\n';
                break;
            }

            compinput(computerside, userside);
            break;
            }
        }

else{
    std::cout << "INVALID SPOT SON, you stupid or wut?\n";
   continue;
}


}while(true);







}

void compinput(char computerside, char userside){
bool available = false;

for(int i = 0; i < 3 && !available; i++){
    for(int j = 0; j < 3; j++){
        if(board[i][j] == userside || board[i][j] == computerside){
            continue;
        }
        else if(board[i][j] != userside && board[i][j] != computerside){
             available = true;   
            break;
        }
    }
}




if(available == true){


    do{
                int compresponse = rand() % 10;
                
                    if(compresponse == 0){
                        compresponse++;
                    }

                int row = (compresponse - 1)/3;
                int col = (compresponse - 1) % 3;

                    



                if(board[row][col] == userside || board[row][col] == computerside){
                    continue;
                }

                else{
                    board[row][col] = computerside;
                    break;
                }




    }while(true);


}



}






































int wincondition(char userside, char computerside){




// CHECKING USER SIDE:


// checking the rows first.

for(int i = 0; i < 3; i++){

 if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == userside){
    return 1;
 }
}

// checking the coloumns.

for(int j = 0; j < 3; j++){

    if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == userside){
        return 1;
    }
    
}

// Checking the two diagonals.


if(
board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == userside ||
board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == userside)
{
    return 1;
}


// CHECKING COMPUTER SIDE



// checking the rows first.

for(int i = 0; i < 3; i++){

 if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == computerside){
    return 2;
 }
}

// checking the coloumns.

for(int j = 0; j < 3; j++){

    if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == computerside){
        return 2;
    }
    
}

// Checking the two diagonals.


if(
board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == computerside ||
board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == computerside)
{
    return 2;
}












return 0;


}









void resetboard(){


    for(int i = 1; i < 10; i++){

        int row = (i - 1) / 3;
        int col = (i - 1) % 3;

        board[row][col] = i + '0';


    }








}



