#include "Weapons.h"
#include "Player.h"
#include "Battle.h"
#include <iostream>
#include <string>



Weapon::Weapon(const std::string& name,
               int Itemid,
               float weaponattack,
               const std::string& Description,
               Rarity rarity)
    {
        this-> name = name;
        this-> Itemid = Itemid;
        this-> weaponattack = weaponattack;
        this-> Description = Description;
        this-> rarity = rarity;
    }

//  melee wps


void MeleeWeapon::SKILL1(){
    std::cout << "You smash the foe with all your might!\n";
}

void MeleeWeapon::SKILL2(){
    std::cout << "You take deep breaths and calm yourself down. Healing yourself for 30% HP\n";
}

void MeleeWeapon::SKILL3(){
    std::cout << "GRIFFIIIIIITTTTTTTTHHHHHHHHHHHHHHH!!!!!! you scream as you PUSH WITH ALL YOUR MIGHT AND SLASH THE FOE!\n";
    std::cout << "Your attack increases significantly\n";
}

void MeleeWeapon::PASSIVE1(){
        std::cout << "You feel nourished because of the adrenaline rush!!\n";
        std::cout << "HP restored by 5%\n";
}



// Ranged wps


void RangedWeapon::SKILL1(){
        std::cout << "You fire a homing projectile at your opponent!\n";
}

void RangedWeapon::SKILL2(){
        std::cout << "You fire 4 shots at your opponent!\n";
}

void RangedWeapon::PASSIVE1(){
        std::cout << "You feel lightning surging through your bones!\n";
        std::cout << "Speed increases by 3%.\n";
}

void RangedWeapon::PASSIVE2(){
        std::cout << "You feel yourself becoming more focused and calm.\n";
        std::cout << "HP restored by 3%\n";
}





// Excalibur


void Excalibur::SKILL1(){
    std::cout << "You summon a Holy BEAM! of light TEARING THROUGH SKY, landing straight onto your opponent.\n";
}

void Excalibur::SKILL2(){
    std::cout << "You summon 2 swords that attack for you every turn.\n";
}

void Excalibur::SKILL3(){
    std::cout << "ULTIMATE SKILL: Blood&Bone.\n";
    std::cout << "You sacrifice your blood in returns for strength and endurance.\n";
    std::cout << "Defence increases significantly..\n";
    std::cout << "Attack increases significantly..\n";
    std::cout << "You lose some HP PERMANENTLY.\n";
}

void Excalibur::PASSIVE1(){
    std::cout << "You gained a shield equal to %15 hp \n";
}

void Excalibur::PASSIVE2(){
    std::cout << "Your defence increased by 5%\n";
}


// Staff of the scholar


void StaffOfTheScholar::SKILL1(){
    std::cout << "You throw a star from space onto your opponent!\n";
}

void StaffOfTheScholar::SKILL2(){
    std::cout << "You gain a shield equivalent to %30 of your health.\n";
}

void StaffOfTheScholar::SKILL3(){
    std::cout << "ULTIMATE SKILL: curse of the scholar\n";
    std::cout << "Your enemy's defence decreases significantly..\n";
    std::cout << "Your enemy's attack decreases significantly..\n";
    std::cout << "Your enemy takes 2x damage.\n";
}

void StaffOfTheScholar::PASSIVE1(){
    std::cout << "You gain a shield equivalent to %5 total HP\n";
}

void StaffOfTheScholar::PASSIVE2(){
    std::cout << "Your HP increased by 5%\n";
}



// Daemons never sleep.



void Da3M0nD3v0r3r::SKILL1(Player& player){
    std::cout << "...\n";
    std::cout << "The Blade devours the foe..\n";
    std::cout << "The foe is erased from this world.\n";

    if(player.GetHumanity() > 70){
        std::cout << "You feel terrified of it's existence.\n";}
    else if(50 < player.GetHumanity() && player.GetHumanity() < 70){
        std::cout << "You don't feel surprised.\n";
    }
    else if( 30 < player.GetHumanity() && player.GetHumanity() < 50){
        std::cout << "You feel amused.\n";
    }
    else if(player.GetHumanity() < 30){
        std::cout << "You feel satisfied.\n";
    }
}

void Da3M0nD3v0r3r::SKILL2(Player& Player1){
    std::cout << "The blade repulses back!\n";
    std::cout << "It drains your life force\n";
}

void Da3M0nD3v0r3r::SKILL3(Player& Player1){
    std::cout << "...\n";
    std::cout << "nothing happens..\n";
    std::cout << "You feel uneasy.\n";
}

void Da3M0nD3v0r3r::PASSIVE1(Player& Player1){
    std::cout << "You feel yourself becoming numb.\n";
    std::cout << "....\n";
}

void Da3M0nD3v0r3r::PASSIVE2(Player& Player1){
    std::cout << "You feel yourself becoming stronger.\n";
}