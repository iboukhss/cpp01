#include "Zombie.hpp"

#include <sstream>

static std::string to_string(int val)
{
    std::ostringstream oss;
    oss << val;
    return oss.str();
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zh = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        zh[i].setName(name + '_' + to_string(i));
    }
    return zh;
}
