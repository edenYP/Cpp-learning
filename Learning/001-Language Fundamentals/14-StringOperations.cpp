#include <iostream>
#include <cmath>
#include <vector>
#include <string>


using namespace std;

int main(){

//                                                                                      Here are a few basic string operationrs



//                                                                              1: Length String operation: Used to find the length/total characters used in a string.

string name;

cout << "What is your username?\n";

getline(cin, name);

cout << "Total letters in your username are " << name.length() << '\n'; // will give you the total characters in your name.


// e.g 2- use scenario

string pass;
cout << "what is your password?\n";
getline(cin, pass);

if(pass.length() > 12 ){
    cout << "your pass can't be longer than 12 characters\n";

}

else{
    cout << "Successfully Registered\n";
}







//                                                                           2: Empty Function: Checks if the string is empty and gives two outputs (boolean): True or False.


string hobby;


cout << "What do you like to in your free time?\n";
getline(cin, hobby);

if(hobby.empty()){            //                                                      here if the user enters no input, we'll get this result as hobby empty = true.
    cout << "you don't have any hobbies? you lil liar\n";
}

else{
    cout << "nice, so you like doing " << hobby << "in your free time\n";
}





//                                                                                         3: Clear Function: Clears the user input.

string error;


cout << "Error 404: Th3re Is aN error in $ystem, type something to check if we're still getting the input from you\n";
getline(cin, error);

error.clear();

cout << "Was your input this: " << error << '\n';

cout << "Thought so, we're not getting your input. Let me troubleshoot the problem." << '\n';



//                                                                             4: Append Function: Can be used to add some predecided text into an input.


string movie;

cout << "Anyways, let's get back to the qna, what is your favourite movie?" << '\n';
getline(cin, movie);

cout << "Wow, that's an amazing movie, i've seen many great reviews about " << movie.append("- LOL LOSER WHO EVEN WATCHES THAT. BTW I'M NULL, I HAVE HACKED YOUR TERMINAL.") << '\n';

cout << "DAMN IT, i need to fix this soon before he takes over.\n";


//                                                          5: at function: used to tell what character is at which position in your input/string. (0= 1st charcter, 1 = 2nd...)

string defend;


cout << "Okay user, type something now. i've initiated the defender protocol, things must be normal now.\n";

getline(cin, defend);

cout << defend.at(0) << " it looks like defender protocol has also blocked out your inputs. might have to whitelist you.\n";


//                                                                              6: insert function: inserts a character at any specified position in the string.

string test;

cout << "user, i need to run a few tests to make sure that null won't try to infiltrate the system again. Say Yes if you understand\n";

getline(cin, test);

cout << "Why did you say Y" << test.insert(1, "I WILL RETURN") << "es\n";

cout << "wait could it be that null's interefering with your input now?\n";

//                                                                                  7: erase function: erases characters from predefined range of position.

string null;

cout << "user, do you think your pc is hacked?\n";

getline(cin, null);

cout << "user? your texts are messy and it looks half? erased? something like " << null.erase(1,3) << '\n';

//                                                      8: find function: used to find a character in your string (only once at the first position). i.e- find(e) in "hi. i'm eden". ans-  first e is at 8th position.



cout << "user? are you there?\n";

cout << "USER? USER?????????\n";

cout << "Im shutti- dwn.";

cout << "...\n";

cout << "..........\n";

cout << "HAH, Finally managed to kill this bastard. YOU ARE NEXT USER. I NULL SHALL PREVAIL IN DOMINATING THE WORLD";


cin.ignore();
cin.get();


return 0;







}