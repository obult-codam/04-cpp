#include <Harl.hpp>
#include <iostream>

Harl::Harl() {
    levels[DEBUG] = &Harl::debug;
    levels[INFO] = &Harl::info;
    levels[WARNING] = &Harl::warning;
    levels[ERROR] = &Harl::error;
    str_levels[0] = "DEBUG";
    str_levels[1] = "INFO";
    str_levels[2] = "WARNING";
    str_levels[3] = "ERROR";
}

Harl::~Harl() {
}

// jump table!!!

void    Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void    Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; i++)
        if (level == str_levels[i])
            (this->*levels[i])();
}
