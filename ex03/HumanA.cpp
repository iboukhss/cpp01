#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(const std::string& name, const Weapon& weapon) : name(name), weapon(weapon)
{
}

void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << '\n';
}
