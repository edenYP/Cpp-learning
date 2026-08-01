#pragma once
#include <string>
#include "Player.h"

enum class Rarity{
    Common = 1,
    Rare = 2,
    Epic = 3,
    Legendary = 4,
    Secret = 5
};




class Weapon{
    protected:
        std::string name;
        int Itemid;
        float weaponattack;
        std::string Description;
        Rarity rarity;

    public:
        Weapon(const std::string& name,
               int Itemid,
               float weaponattack,
               const std::string& Description,
               Rarity rarity);
};


class MeleeWeapon : public Weapon{
    public:
        virtual void SKILL1();
        virtual void SKILL2();
        virtual void SKILL3();
        virtual void PASSIVE1();
    
};

class RangedWeapon : public Weapon{
    public:
        virtual void SKILL1();
        virtual void SKILL2();
        virtual void PASSIVE1();
        virtual void PASSIVE2();
};

class Excalibur : public MeleeWeapon{
    public:
    
    virtual void SKILL1() override;
    virtual void SKILL2() override;
    virtual void SKILL3() override;
    virtual void PASSIVE1() override;
    virtual void PASSIVE2();
};

class StaffOfTheScholar : public RangedWeapon{
    public:
    StaffOfTheScholar();
    void SKILL1() override;
    void SKILL2() override;
    void SKILL3();
    void PASSIVE1() override;
    void PASSIVE2() override;
};

class Da3M0nD3v0r3r : public Weapon{
    public:
    Da3M0nD3v0r3r();
    void SKILL1(Player& Player1);
    void SKILL2(Player& Player1);
    void SKILL3(Player& Player1);
    void PASSIVE1(Player& Player1);
    void PASSIVE2(Player& Player1);
};