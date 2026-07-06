#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>




// A struct is a <public> group of data that you could store multiple variables of different data types inside of. 


// Key points:

// An array stores variables of the same data type.
// A Class is a <Private> group of data. similar to struct but not the same,


struct Player{

std::string username;
int health;                                         // Variables stored inside a struct are called MEMBERS.
bool hardcoremode;                                  // They can be accessed by . (Class Member Access operator)


};

void Generateuser(Player &player1, Player &player2);
void DisplayInfo(const Player &player1,const Player &player2);

int main(){
Player player1;
Player player2;

Generateuser(player1, player2);
DisplayInfo(player1, player2);
  
return 0;

}

void Generateuser(Player &player1, Player &player2){

std::cout << "Select your username (Player 1): \n";

std::cin >> player1.username;

std::cout << "Select your username (Player 2): \n";

std::cin >> player2.username;

std::cout << "Generating world..\n";


player1.health = 100;
player1.hardcoremode = false;
player2.health = 100;
player2.hardcoremode = false;
}


void DisplayInfo(const Player &player1,const Player &player2){   //             const will make sure nothing in here can edit these values.

std::cout << "Displaying P1 INFO \n";

std::cout << "Username: " << player1.username << '\n';
std::cout << "Health: " << player1.health << '\n';
std::cout << "Hardcoremode: " << player1.hardcoremode << '\n';

std::cout << "***********************************\n";

std::cout << "Displaying P2 INFO \n";

std::cout << "Username: " << player2.username << '\n';
std::cout << "Health: " << player2.health << '\n';
std::cout << "Hardcoremode: " << player2.hardcoremode << '\n';





}
