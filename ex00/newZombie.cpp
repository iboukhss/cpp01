#include "Zombie.hpp"

#include <string>

Zombie* newZombie(std::string name)
{
    Zombie* nz = new Zombie(name);
    return nz;
}
