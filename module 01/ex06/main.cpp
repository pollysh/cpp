#include <iostream>
#include "Harl.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    Harl::Level chosenLevel;
    bool validLevel = true;

    if (argv[1] == std::string("DEBUG")) {
        chosenLevel = Harl::DEBUG;
    } else if (argv[1] == std::string("INFO")) {
        chosenLevel = Harl::INFO;
    } else if (argv[1] == std::string("WARNING")) {
        chosenLevel = Harl::WARNING;
    } else if (argv[1] == std::string("ERROR")) {
        chosenLevel = Harl::ERROR;
    } else {
        validLevel = false;
    }

    if (!validLevel) {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
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
