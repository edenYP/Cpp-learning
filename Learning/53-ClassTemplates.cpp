#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>



// Earlier we discussed function templates:


template <typename T, typename U>

auto greater(T a, U b){

return (b < a) ? a : b;  // return a if a > b, return b is b greater than a


};

// Now we're gonna study class templates, you can do the same thing as above but in classes!

template <typename Def>



class Player{
protected:
float attackdmg = 100;


public:
Def enemydef;
std::string name;

Player(std::string name){
    this-> name = name;
}

auto dmgoutput(Def enemydef){
    std::cout << " You dealt " << (attackdmg - enemydef) << " damage!\n";
}

};

// why would we ever use a class template? 
// - A class is generally good to use instead of function template
//   when you have some stored data.

// while function templates are better when you're handling values you don't want stored or remembered after the function finishes.

int main(){

    // template func;
    std::cout << greater(2, 3);

    // template class;

    Player<float> player1("cooper");  // if you're using a template class- you have to specify the type of template you're using. i.e- float, double, etc.
    player1.dmgoutput(30);

    return 0;
}