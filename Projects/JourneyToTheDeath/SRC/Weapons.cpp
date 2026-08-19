#include "Weapons.h"
#include "Player.h"
#include "Output.h"


Weapon::Weapon(const std::string& name,
               int Itemid,
               float weaponattack,
               const std::string& Description,
               Rarity rarity)
{
    this->name = name;
    this->Itemid = Itemid;
    this->weaponattack = weaponattack;
    this->Description = Description;
    this->rarity = rarity;
}


// Melee weapons

void MeleeWeapon::SKILL1()
{
    TextOut("You smash the foe with all your might!\n", 50);
}

void MeleeWeapon::SKILL2()
{
    TextOut("You take deep breaths and calm yourself down. Healing yourself for 30% HP\n", 50);
}

void MeleeWeapon::SKILL3()
{
    TextOut("GRIFFIIIIIITTTTTTTTHHHHHHHHHHHHHHH!!!!!! you scream as you PUSH WITH ALL YOUR MIGHT AND SLASH THE FOE!\n", 50);
    TextOut("Your attack increases significantly\n", 50);
}

void MeleeWeapon::PASSIVE1()
{
    TextOut("You feel nourished because of the adrenaline rush!!\n", 50);
    TextOut("HP restored by 5%\n", 50);
}


// Ranged weapons

void RangedWeapon::SKILL1()
{
    TextOut("You fire a homing projectile at your opponent!\n", 50);
}

void RangedWeapon::SKILL2()
{
    TextOut("You fire 4 shots at your opponent!\n", 50);
}

void RangedWeapon::PASSIVE1()
{
    TextOut("You feel lightning surging through your bones!\n", 50);
    TextOut("Speed increases by 3%.\n", 50);
}

void RangedWeapon::PASSIVE2()
{
    TextOut("You feel yourself becoming more focused and calm.\n", 50);
    TextOut("HP restored by 3%\n", 50);
}


// Excalibur

void Excalibur::SKILL1()
{
    TextOut("You summon a Holy BEAM! of light TEARING THROUGH SKY, landing straight onto your opponent.\n", 50);
}

void Excalibur::SKILL2()
{
    TextOut("You summon 2 swords that attack for you every turn.\n", 50);
}

void Excalibur::SKILL3()
{
    TextOut("ULTIMATE SKILL: Blood&Bone.\n", 50);
    TextOut("You sacrifice your blood in returns for strength and endurance.\n", 50);
    TextOut("Defence increases significantly..\n", 50);
    TextOut("Attack increases significantly..\n", 50);
    TextOut("You lose some HP PERMANENTLY.\n", 50);
}

void Excalibur::PASSIVE1()
{
    TextOut("You gained a shield equal to %15 hp \n", 50);
}

void Excalibur::PASSIVE2()
{
    TextOut("Your defence increased by 5%\n", 50);
}


// Staff of the Scholar

void StaffOfTheScholar::SKILL1()
{
    TextOut("You throw a star from space onto your opponent!\n", 50);
}

void StaffOfTheScholar::SKILL2()
{
    TextOut("You gain a shield equivalent to %30 of your health.\n", 50);
}

void StaffOfTheScholar::SKILL3()
{
    TextOut("ULTIMATE SKILL: curse of the scholar\n", 50);
    TextOut("Your enemy's defence decreases significantly..\n", 50);
    TextOut("Your enemy's attack decreases significantly..\n", 50);
    TextOut("Your enemy takes 2x damage.\n", 50);
}

void StaffOfTheScholar::PASSIVE1()
{
    TextOut("You gain a shield equivalent to %5 total HP\n", 50);
}

void StaffOfTheScholar::PASSIVE2()
{
    TextOut("Your HP increased by 5%\n", 50);
}


// Daemons never sleep.

void Da3M0nD3v0r3r::SKILL1(Player& player)
{
    TextOut("...\n", 50);
    TextOut("The Blade devours the foe..\n", 50);
    TextOut("The foe is erased from this world.\n", 50);

    if (player.GetHumanity() > 70)
    {
        TextOut("You feel terrified of it's existence.\n", 50);
    }
    else if (50 < player.GetHumanity() && player.GetHumanity() < 70)
    {
        TextOut("You don't feel surprised.\n", 50);
    }
    else if (30 < player.GetHumanity() && player.GetHumanity() < 50)
    {
        TextOut("You feel amused.\n", 50);
    }
    else if (player.GetHumanity() < 30)
    {
        TextOut("You feel satisfied.\n", 50);
    }
}

void Da3M0nD3v0r3r::SKILL2(Player& Player1)
{
    TextOut("The blade repulses back!\n", 50);
    TextOut("It drains your life force\n", 50);
}

void Da3M0nD3v0r3r::SKILL3(Player& Player1)
{
    TextOut("...\n", 50);
    TextOut("nothing happens..\n", 50);
    TextOut("You feel uneasy.\n", 50);
}

void Da3M0nD3v0r3r::PASSIVE1(Player& Player1)
{
    TextOut("You feel yourself becoming numb.\n", 50);
    TextOut("....\n", 50);
}

void Da3M0nD3v0r3r::PASSIVE2(Player& Player1)
{
    TextOut("You feel yourself becoming stronger.\n", 50);
}