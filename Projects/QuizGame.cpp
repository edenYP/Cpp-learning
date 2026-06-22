#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>
//                                                                           NOTE: I COULD MAKE THIS CLEANER BUT I'M GOING TO USE MULTIDIMENSIONAL ARRAYS FOR THE QUESTIONS AS I NEED TO PRACTICE THAT. DO NOT MIND IT.

using namespace std;


int questions(int i);

using namespace std;


int main(){
char response;
int quiztype;




cout << "would you like to take a short quiz? y/n" << '\n';
cin >> response;


if(response == 'y'){
while(response == 'y'){

    int i;
    cout << "which quiz would you like to take? [Pick The Number]" << '\n';
    cout << "1: Functions   2: Operators   3:  Previous Projects" << '\n';
    cin >> quiztype;

    if(quiztype == 1){
        i = 0;
        questions(i);

    }

    else if(quiztype == 2){
        i = 1;
        questions(i);

    }

    else if(quiztype == 3){
        i = 2;
        questions(i);
    }


























    }
}


else if(response == 'n'){

    cout << "Goodbye, User!" << '\n';

}










return 0;
}







int questions(int i){
    string answer;

    string questions[3][9] = {{"What is the purpose of a function in C++?", "What keyword is used for a function that does not return a value?", "What is the difference between a function declaration and a function definition?", "What is a parameter?", "What is an argument?", "What keyword is used to send a value back from a function?", "True or False: A function can call another function.", "What will this function return? \n int add(int a, int b)\n{return = a + b};\n when called with: add(5,3).", "True or False:\n A void function can use cout"},
                              {"What operator is used for addition in C++?", "What operator is used to check if two values are equal?", "What is the output of: \n x = 5; \n x++; \n cout << x", "What operator is used to find the remainder after division?", "True or False: \n 10 > 5 evaluates to True.", "What is the output of:\n cout << (10 % 3);", "What logical operator represents AND in C++?", "What is the output of: \n bool result = (5 < 3); \n cout << result;", "Which operator is used for assigning a value to something."},
                              {"What do you use instead of an Array if you want more flexibility?", "What operator do you use to tell a function to not create a copy of a variable and use that exact variable?", "What do you use to clear cin?", "What are nested loops?", "True or False: \n Do we use Srand function to set a seed?", "True or False: \n A function must return a value if its return type is int.", "What vector function is used to add an element to the end of a vector?", "True or False: \n The size() function can be used to find the number of elements in a vector.", "Which operator is used to access a member function of a vector?"}};





    for(int j = 0; j < 9; j++){

        cout << "question #" << j + 1<< '\n';
        cout << questions[i][j] << '\n';
        cin >> answer;


    }







    




    return 0;
}