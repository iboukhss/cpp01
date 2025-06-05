#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie()
{
    std::cout << "Zombie has been created (default).\n";
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << this->name << ": has been created.\n";
}

Zombie::~Zombie()
{
    std::cout << this->name << ": has been destroyed.\n";
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
