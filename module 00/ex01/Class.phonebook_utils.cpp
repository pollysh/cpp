/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.phonebook_utils.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.pt>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:15:00 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/15 14:15:02 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.phonebook_utils.hpp"

void	ft_add(Phonebook *phonebook, int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Contact's first name:\n> ";
	std::getline(std::cin, first_name);
	if (std::cin.eof())
		return ;
	std::cout << "Contact's last name:\n> ";
	std::getline(std::cin, last_name);
	if (std::cin.eof())
		return ;
	std::cout << "Contact's nickname:\n> ";
	std::getline(std::cin, nickname);
	if (std::cin.eof())
		return ;
	std::cout << "Contact's phone number:\n> ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof())
		return ;
	std::cout << "Contact's darkest secret:\n> ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof())
		return ;

	(*phonebook).create_new_contact(i, first_name, last_name, nickname, phone_number, darkest_secret);
}

void	ft_search(Phonebook *phonebook, int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	user_index;
	int			index;

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int j = 1; j < i + 1; j++)
	{
		first_name = (*phonebook).get_first_name(j - 1);
		last_name = (*phonebook).get_last_name(j - 1);
		nickname = (*phonebook).get_nickname(j - 1);
		if (first_name.length() >= 10)
		{
			first_name.resize(9);
			first_name.resize(10, '.');
		}
		if (last_name.length() >= 10)
		{
			last_name.resize(9);
			last_name.resize(10, '.');
		}
		if (nickname.length() >= 10)
		{
			nickname.resize(9);
			nickname.resize(10, '.');
		}
		std::cout << std::setw(10) << j << "|" << std::setw(10) << first_name << "|" << std::setw(10) << last_name << "|" << std::setw(10) << nickname<< "|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Please enter the contact's index to see more details:\n> ";
	std::getline(std::cin, user_index);
	if (std::cin.eof())
		return ;
	index = atoi(user_index.c_str());
	if (index && index >=1 && index <= i)
		(*phonebook).get_contact(atoi(user_index.c_str()) - 1).ft_print();
	else
		std::cout << "Wrong index" << "\n> ";
	return ;
}

int main(void)
{
    std::string user_command;
    Phonebook phonebook;
    int current_index = 0;
    int total_contacts = 0;

    while (!std::cin.eof())
    {
        std::cout << "Enter SEARCH / ADD / EXIT\n> ";
        std::getline(std::cin, user_command);
        
        if (user_command == "EXIT")
            return (0);
        else if (user_command == "ADD")
        {
            ft_add(&phonebook, current_index);
            current_index = (current_index + 1) % 8; 
            total_contacts++;
        }
        else if (user_command == "SEARCH")
        {
            ft_search(&phonebook, std::min(total_contacts, 8));
        }
        else if (!std::cin.eof())
            std::cout << "The program only accepts ADD, SEARCH and EXIT.\n";
    }
    return (0);
}
