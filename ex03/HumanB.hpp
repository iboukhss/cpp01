#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

#include <string>

class HumanB {
public:
    HumanB(const std::string& name);
    void attack() const;

    void setWeapon(const Weapon& weapon);

private:
    std::string name;
    const Weapon* weapon;
};

#endif // HUMANB_HPP
