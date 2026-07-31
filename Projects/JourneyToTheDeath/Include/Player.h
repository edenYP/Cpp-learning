#pragma once
#include <string>

class Player{
    private:
    std::string name;
    float baseattack = 20;
    float basedefence = 60;
    float basehealth= 100;

    public:
    Player(const std::string& name){
        this->name = name;
    }


    void Heal(float& recoveryeffect);
    void TakeDamage(float& enemyattack);
    void Attack(float& additionalattack);
};