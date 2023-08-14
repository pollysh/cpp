#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string	&stringREF = str;

    std::cout << std::endl;
    std::cout << "string address = " << &str << std::endl;
	std::cout << "stringPTR address = " << stringPTR << std::endl;
	std::cout << "stringREF address = " << &stringREF << std::endl;
	std::cout << "stringPTR string = " << *stringPTR << std::endl;
	std::cout << "stringREF string = " << stringREF << std::endl;
    std::cout << std::endl;

    return (0);
}