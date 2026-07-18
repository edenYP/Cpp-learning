#include <iostream>

class Mobs{
public:

std::string name;
bool alive = 1;
int health = 100;

void eat(){
    std::cout << name << " eats\n";
}


};




class sheep : public Mobs{   //     sheep is a children class, while Mobs is a parent class;
public:

bool hostile = 0;


};

class zombie : public Mobs{
public:

bool hostile = 1;

};


int main(){

sheep sheep1;

sheep1.name = "Morty";
sheep1.eat();   

std::cout << sheep1.name << "'s HP: " << sheep1.health << '\n';

zombie zombie1;

zombie1.name = "Alex";
zombie1.eat();

std::cout << zombie1.name << "'s HP: " << zombie1.health << '\n';

    return 0;
}