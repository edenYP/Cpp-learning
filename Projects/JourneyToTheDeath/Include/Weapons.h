#include <map>
#include <string>


class Weapon{
    protected:
        std::map<float, std::string> itemid;
        float additionalattack;
        std::string Description;
        std::string Rarity;

    public:

        void SKILL1();
        void SKILL2();

        void PASSIVE1();
};


class Meleeweapon : public Weapon{





};
