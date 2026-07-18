#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>


//                                                  A function alongside it's parameters is called a function signature. e.g- "void Balance(std::string)" is a function signature. std::string is the parameter. void Balance is the function.

using namespace std;
void Bakepizza();
void Bakepizza(std::string topping1);
void Bakepizza(std::string topping1, std::string topping2);

int main(){
    

    Bakepizza();


    Bakepizza("pineapple");

    Bakepizza("pineapple","pepporoni"); // This will print "here is your pineapple and pepporoni pizza". pineappple and pepporoni will go into the respective string variables as we've put in the function parameters.

    return 0;
}





void Bakepizza(){

    cout << "Here is your classic pizza!\n";


}

void Bakepizza(std::string topping1){

    cout << "here is your " << topping1 << " pizza\n";

}

void Bakepizza(std::string topping1, std::string topping2){

    cout << "here is your " << topping1 << " and " << topping2 << " pizza\n";
}