#include "Zombie.hpp"

#include <string>

void randomChump(std::string name)
{
    Zombie rc(name);
    rc.announce();
}
