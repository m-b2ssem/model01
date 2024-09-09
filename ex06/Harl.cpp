#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::filterComplaints(std::string level) {
    int levelIndex = 0;
    if (level == "DEBUG") levelIndex = 1;
    else if (level == "INFO") levelIndex = 2;
    else if (level == "WARNING") levelIndex = 3;
    else if (level == "ERROR") levelIndex = 4;

    switch (levelIndex) {
        case 1:
            debug();
            // fall through
        case 2:
            info();
            // fall through
        case 3:
            warning();
            // fall through
        case 4:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\nAlthough there are several ways to deal with Harl, one of the most effective is to SWITCH it off.\n";
    }
}