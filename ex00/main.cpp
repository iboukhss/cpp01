#include "Zombie.hpp"

int main()
{
    Zombie bobby("Bobby");
    Zombie *carl = newZombie("Carl");
    delete carl;
    randomChump("Allen");
    return 0;
}
