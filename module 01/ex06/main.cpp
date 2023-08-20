#include <iostream>
#include "Harl.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;
    }

    std::string levelArg = argv[1];
    Harl harl;

    if (levelArg == "DEBUG") {
        harl.setFilterLevel(Harl::DEBUG);
    } else if (levelArg == "INFO") {
        harl.setFilterLevel(Harl::INFO);
    } else if (levelArg == "WARNING") {
        harl.setFilterLevel(Harl::WARNING);
    } else if (levelArg == "ERROR") {
        harl.setFilterLevel(Harl::ERROR);
    } else {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }

    harl.complain(levelArg);
    return 0;
}
