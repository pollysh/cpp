#include "Class.phonebook_utils.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::ft_print(void) const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

void Contact::ft_set_values(std::string fn, std::string ln, std::string n, std::string phn, std::string ds)
{
	_first_name = fn;
	_last_name = ln;
	_nickname = n;
	_phone_number = phn;
	_darkest_secret = ds;
}

std::string	Contact::get_first_name() const
{
	return (_first_name);
}

std::string	Contact::get_last_name() const
{
	return (_last_name);
}

std::string	Contact::get_nickname() const
{
	return (_nickname);
}

std::string	Contact::get_phone_number() const
{
	return (_phone_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (_darkest_secret);
}