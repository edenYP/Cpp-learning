#pragma once
#include <string>
#include <Weapons.h>

class Player{
    private:
    std::string name;
    float baseattack = 20;
    float basedefence = 60;
    float basehealth = 100;
    float basehumanity = 100;
    

    float currentHP = basehealth;
    float currenthumanity = basehumanity;
    float currentattack = baseattack;
    float currentdefence = basedefence;

    Weapon Weaponequipped; 

    public:

    // name setter
    void SetName(const std::string& newname);
    
    // stat change
    
    void AttackUp(float& attackup);
    void DefenceUp(float& defenceup);
    void HealthUp(float& healthup);
    void ChangeHumanity(float& nethumanitychange);

    // inv

    void EquipWeapon(Weapon& ownedweapon);

    // getters

    float GetHp();
    float GetHumanity();
    float GetAttack();
    float GetDefence();

};

