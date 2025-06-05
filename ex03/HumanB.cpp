#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL)
{
}

void HumanB::attack() const
{
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << '\n';
    }
    else {
        std::cout << name << " does not have a weapon equipped\n";
    }
}

void HumanB::setWeapon(const Weapon& weapon)
{
    this->weapon = &weapon;
}
