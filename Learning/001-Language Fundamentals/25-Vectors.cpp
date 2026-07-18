#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>



using namespace std;

int main(){



//                                  Vectors are slightly slower but more convinient arrays.

/*


                                                                                                    IMPORTANT:


                                                                                        1: vectors can use .size() command to tell the number of elements they have instead of doing sizeof(fruits)/sizeof(vector).
                                                                                        2: vectors can also use .push_back(element) to add an element inside it, they are more flexible than arrays.
                                                                                









*/





vector<string> fruits = {"papaya", "banana", "pineapple"};

int i;


fruits.push_back("Melon"); // will add melon at 4th position.



for (i = 0; i < fruits.size(); i++){


    std::cout << fruits[i] << '\n';



}








return 0;


}