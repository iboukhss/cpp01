#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon axe("axe");

    HumanA warrior("Kratos", axe);
    warrior.attack();

    axe.setType("Leviathan axe");
    warrior.attack();

    Weapon knife("knife");

    HumanB civilian("Billy");
    civilian.setWeapon(knife);
    civilian.attack();

    knife.setType("butter knife");
    civilian.attack();

    return 0;
}
