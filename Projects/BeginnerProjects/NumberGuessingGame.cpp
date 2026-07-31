#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <cmath>


using namespace std;

int main(){



do{
char play;

cout << "=====================================\n";

cout << "Welcome to the Number Guessing Game! (version 1.0)\n";

cout << "Do you want to play? (y/n)\n";

cin >> play;


    if(play == 'n' || play == 'N'){

    cout << "Thanks for playing! Goodbye!\n";

    break;

    }

    else if(play != 'y' && play != 'n' && play != 'Y' && play != 'N'){

        cout << "Invalid input. Please enter 'y' or 'n' \n";
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');



        continue;

    }



    else if(play =='y' || play == 'Y'){

    srand(time(NULL));
   int RandomNumber = rand()% 1001; // generates a random number between 0 and 1000.

    int guess = -1; // initialized guess to -1 to ensure it enters the while loop and does not accidentally match the random number on the first try.

        int attempts = 0;



while(guess != RandomNumber){

    cout << "Make a guess between 0 and 1000!\n";

    cin >> guess;



    if(RandomNumber - guess > 100){

        cout << "Your guess is too low! Try again.\n";
        attempts++;
        

    }

    else if(RandomNumber - guess <= 100 && RandomNumber - guess > 0){

        cout << "Your guess is close but low! Try again.\n";

        attempts++;




    }

    else if(RandomNumber - guess < -100){

        cout << "Your guess is too high! Try again.\n";

        attempts++;



    }

    else if(RandomNumber - guess >= -100 && RandomNumber - guess < 0){

        cout << "Your guess is close but high! Try again.\n";

        attempts++;
    }


else if(guess == RandomNumber){
    cout << "Congratulations! You guessed the number " << RandomNumber << " in " << attempts << " attempts!\n";


    cout << "Do you want to play again? (y/n)\n";
    cin >> play;


    if(play == 'n' || play == 'N'){
    cout << "Thanks for playing! Goodbye!\n";
    break;
    }

     else if(play != 'y' && play != 'n' && play != 'Y' && play != 'N'){

        cout << "Invalid input. Please enter 'y' or 'n' \n";
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
     }

     else if(play =='y' || play == 'Y'){

        continue;

     }

}



else{
    cout << "Invalid input. Please enter a valid number.\n";

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max()), '\n';

}

}

    }


}while(true);







return 0;






}