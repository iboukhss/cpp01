#include "Zombie.hpp"

#include <sstream>

static std::string toString(int val)
{
    std::ostringstream oss;

    oss << val;
    return oss.str();
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zh = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        zh[i].setName(name + '_' + toString(i));
    }
    return zh;
}
