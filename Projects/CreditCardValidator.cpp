#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 
#include <vector>
#include <string>
#include <limits>



// EVERYTHING ABOUT-                                                                                                              LUHN'S ALGORITHM

/*

EXAMPLE- CREDIT CARD NUMBER        4539 1488 0343 6467.



STEP 1- DOUBLE EVERY SECOND DIGIT STARTING FROM THE RIGHT SIDE.

    HERE WE GET-
    8,6,,2,16,0,8,12,12.


STEP 2- IF IT'S A TWO DIGIT NUMBER, SUBTRACT 9 FROM IT.

    WE GET-
    8,6,2,7,0,8,3,3

STEP 3- NOW ADD THESE VALUES WITH THE DIGITS WHICH WERE NOT DOUBLED IN THE CREDIT CARD NUMBER.

    IN THIS CASE WE'LL GET TOTAL SUM OF 80.


STEP 4- CHECK IF NUMBER IS A MULTIPLE OF 10.

    HERE 80 IS A MULTIPLE OF 10 SO THIS CREDIT CARD IS VALID.



                                    THIS ALGORITHM HAS ASSUMPTIONS AND FLAWS, EVERY ALGORITHM DOES. WILL BE EXPLAINED AT THE END OF THIS CODEBASE.


*/
void multiple(int endsum);
void Calculation(std::string cc);

int main(){
    char enter;
std::string cc;

std::cout << "Type your credit card number, we no scam promis hehe...." << '\n';

std::cin >> cc;

std::cout << "Checking... No scamming sir! we legit" << '\n';

Calculation(cc);


std::cout << "Enter any key to exit";
std::cin >> enter;




return 0;

}



void Calculation(std::string cc){

// I CAN 100% MAKE THIS CLEANER WITH VECTOR BUT FINNA CHALLENGE MYSELF AND USE ARRAYS HERE BECAUSE- NAH I'D WIN.

int endsum = 0;

int size = cc.size();

for(int i = size - 1; i >= 0; i--){


//                                                                  THIS RIGHT HERE CALCULATES THE DISTANCE FROM RIGHT SIDE. basically if distance is even, we double it. if it's odd we add it normally.
// EXAMPLE- 
// Distance: 0 = check digit (don't double)
// Distance: 1 = double
// Distance: 2 = don't double
// Distance: 3 = double


int distance = (size - 1) - i;

if(distance % 2 == 1){

   int temp = ((cc[i] - '0')*2);
        if(temp > 9){
            temp -= 9;
        }

        endsum += temp;
}


else if(distance % 2 == 0){

    endsum += cc[i] - '0';
}






}

    








multiple(endsum);



}





void multiple(int endsum){

    if(endsum % 10 == 0){
        std::cout << "Your cc is valid son, well done. we'll use it wise- I meant to say that we'll take nice care of it!\n";
    }

    if(endsum % 10 != 0){
        std::cout << "YOU DARE TRY TO PLAY US SON? YOU BETTER LOCK YOUR DOORS AND WINDOWS PROPERLY\n";
    }



}