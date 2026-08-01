#include <iostream>
#include "Player.h"
#include "Weapons.h"

// stat change

void Player::AttackUp(float& attackup){
    currentattack+= attackup;
}

void Player::DefenceUp(float& defenceup){
    currentdefence+= defenceup;
}

void Player::HealthUp(float& healthup){
    basehealth+= healthup;
}

void Player::ChangeHumanity(float& nethumanitychange){
    basehumanity+= nethumanitychange;
}

// name setter

void Player::SetName(const std::string& newname){
        name = newname;
}

// inv

void Player::EquipWeapon(Weapon& ownedweapon){
    Weaponequipped = ownedweapon;
}

// getters

float Player::GetHp(){
    return currentHP;
}

float Player::GetHumanity(){
    return currenthumanity;
}

float Player::GetAttack(){
    return currentattack;
}

float Player::GetDefence(){
    return currentdefence;
}