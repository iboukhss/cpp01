#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void announce();
    void setName(std::string name);

private:
    std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
