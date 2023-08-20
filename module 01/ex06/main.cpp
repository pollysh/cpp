#include <iostream>
#include <map>
#include <string>
#include "Harl.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    Harl::Level chosenLevel;
    
    std::map<std::string, Harl::Level> levelMap;
    levelMap["DEBUG"] = Harl::DEBUG;
    levelMap["INFO"] = Harl::INFO;
    levelMap["WARNING"] = Harl::WARNING;
    levelMap["ERROR"] = Harl::ERROR;

    if (levelMap.find(argv[1]) == levelMap.end()) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    } else {
        chosenLevel = levelMap[argv[1]];
    }

    switch (chosenLevel) {
        case Harl::DEBUG:
            harl.setFilterLevel(Harl::DEBUG);
            break;
        case Harl::INFO:
            harl.setFilterLevel(Harl::INFO);
            break;
        case Harl::WARNING:
            harl.setFilterLevel(Harl::WARNING);
            break;
        case Harl::ERROR:
            harl.setFilterLevel(Harl::ERROR);
            break;
        default:
            std::cout << "[ Unknown Level ]" << std::endl;
            return 0;
    }

    harl.complain(argv[1]);
    return 0;
}
