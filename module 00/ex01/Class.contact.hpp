#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "Class.phonebook_utils.hpp"

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public:
	Contact();
	~Contact();

	void ft_set_values(std::string fn, std::string ln, std::string n, std::string phn, std::string ds);
	void ft_print(void) const;

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_phone_number() const;
	std::string	get_darkest_secret() const;
};
#endif