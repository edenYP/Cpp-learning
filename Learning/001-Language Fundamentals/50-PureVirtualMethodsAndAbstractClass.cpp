#include <iostream>

class Weapons{
    protected:
    std::string name;
    int attackdamage;
   
    virtual void attack() {
        std::cout << "Attacks!\n";
        // dealdamage(); - not made yet because it's just learning notes bro.
    }

    virtual void equip() {
        std::cout << "Equip's weapon!\n";
    }

    virtual void unequip() {
        std::cout << "Unequip's weapon!\n";
    }

    virtual void discarditem() {
        std::cout << "Discard's item!\n";
    }
};

    class RangedWeapons : public Weapons{

    protected:
    virtual void SpecialAttack1() = 0;
    virtual void SpecialAttack2() = 0;
    virtual void SpecialAttack3() = 0;


    };


    class MeleeWeapons : public Weapons{

    protected:

    virtual void SpecialAttack1() = 0;
    virtual void SpecialAttack2() = 0;

    virtual void PassiveAbility() = 0;


    };


        class Sword : public MeleeWeapons{
            public:

            Sword(std::string name){
                this->name = name;
                attackdamage = 100;
            }
            
            void SpecialAttack1() override {
                std::cout << "You summoned a beam of light that shreds through your opponent's flesh!\n";
            }

            void SpecialAttack2()override {
                std::cout << "Makes you immune to physicalattacks!\n";
                // physicaldefence = 99999999; - haven't added it because it's just learning notes. not actual game system.
            }

            void PassiveAbility() override{
                std::cout << "Your passive ability increases your maximum health by 50 while the weapon is equipped\n";
                // health += 50;
            } 



        };

        class Staff : public RangedWeapons{
            public:
            
            Staff(std::string name){
                this->name = name;
                attackdamage = 80;
            }

            void SpecialAttack1() override{
                std::cout << "You summon a golem that fights by your side!\n";
            }

            void SpecialAttack2() override{
                std::cout << "Makes you immune to Ranged Attacks!\n";
            }

            void SpecialAttack3() override{
                std::cout << "You summon a meteor from the sky!\n";
            } 





        };






        int main(){

            Sword* sword1 = new Sword("Excalibur");
            Staff* staff1 = new Staff("Esky's Skull");

            sword1->SpecialAttack1();
            staff1->SpecialAttack1();


            delete sword1;
            delete staff1;


            return 0;
        }








/*
        Summary



Pure Virtual Function:

    A virtual function with "= 0".

    it has no implementation in parent class and the child class MUST provide an implementation.


Abstract Class:

    A class that contains at least one pure virtual function.

    Objects of an abstract class cannot be created.

Protected:

   ONLY THE CHILD CLASSES CAN ACCESS THE METHODS LISTED IN PROTECTED SECTION.

Key Takeaways:

    • Parent pointers can point to child objects.
    • Child classes inherit both variables and functions.
    • Abstract classes define what child classes must
      implement without providing the implementation themselves.
    • Pure virtual functions enforce a common interface
      while allowing each child class to behave differently.

      */