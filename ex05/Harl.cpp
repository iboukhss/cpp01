#include "Harl.hpp"

#include <iostream>

const Harl::Map Harl::table[4] = {{"DEBUG", &Harl::debug},
                                  {"INFO", &Harl::info},
                                  {"WARNING", &Harl::warning},
                                  {"ERROR", &Harl::error}};

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; ++i) {
        if (level == table[i].log_level) {
            (this->*table[i].log_func)();
            return;
        }
    }
}

void Harl::debug()
{
    std::cerr << "\n[DEBUG]\n"
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup "
                 "burger.\n"
              << "I really do!\n";
}

void Harl::info()
{
    std::cerr << "\n[INFO]\n"
              << "I cannot believe adding extra bacon costs more money.\n"
              << "You didn't put enough bacon in my burger!\n"
              << "If you did, I wouldn't be asking for more!\n";
}

void Harl::warning()
{
    std::cerr << "\n[WARNING]\n"
              << "I think I deserve to have some extra bacon for free.\n"
              << "I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
    std::cerr << "\n[ERROR]\n"
              << "This is unacceptable!\n"
              << "I want to speak to the manager now.\n";
}
