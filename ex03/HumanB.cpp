#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL)
{
}

void HumanB::attack() const
{
    if (this->weapon) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << '\n';
    }
    else {
        std::cout << this->name << " does not have a weapon equipped\n";
    }
}

void HumanB::setWeapon(const Weapon& weapon)
{
    this->weapon = &weapon;
}
