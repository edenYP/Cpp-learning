#include <iostream>

// Setters and Getters - mainly used to protect the data inside a class.

// Setters - makes the data inside a private class writable.

// Getters - makes the data inside a private class readable.


class Spider{
    private:
    int health = 100;

    public:

    int getHealth(){  //            This is a getter.
        return health;
    }           

    void setHealth(int health){
        if(0 < health && health < 100){
            this->health = health;
        }
        else if(health >= 100){
            health = 100;
            this->health = health;
        }
        else if(health <= 0){
            health = 0;
            this->health = health;
        }
    }


};

int main(){

    Spider spiderman;

    // spiderman.health = smth; won't work as it's in private so we'll use the setters and getters we created.

    spiderman.setHealth(-99); // setter will set health to 0

    std::cout << spiderman.getHealth() << '\n';





    return 0;
}


