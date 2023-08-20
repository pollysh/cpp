#include <iostream>
#include "Harl.hpp"

Harl::Harl() : currentFilterLevel(DEBUG) {}

Harl::~Harl() {}

void Harl::setFilterLevel(Level level) {
    currentFilterLevel = level;
}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" <<std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    std::string levelNames[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    typedef void (Harl::*Complaints)(void);
    Complaints complaints[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    int startLevelIndex = -1;
    for (int i = 0; i < 4; i++) {
        if (levelNames[i] == level) {
            startLevelIndex = i;
            break;
        }
    }

    if (startLevelIndex == -1) return;

    for (int i = startLevelIndex; i < 4; i++) {

        if (i < currentFilterLevel) continue;

        std::cout << "[ " << levelNames[i] << " ]" << std::endl;
        (this->*complaints[i])();
        std::cout << std::endl;
    }
}
