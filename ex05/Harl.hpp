#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
    void complain(std::string level);

private:
    typedef void (Harl::*fun_ptr)();

    struct Map {
        std::string log_level;
        fun_ptr log_func;
    };

    static const Map table[4];

    void debug();
    void info();
    void warning();
    void error();
};

#endif // HARL_HPP
