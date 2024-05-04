/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/04 18:40:31 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

// Constructor

Phonebook::Phonebook(void)
{
	index = 0;
	size = 0;
}

// Functions

void	Phonebook::add_contact()
{
	contacts[index & 0x7].set_first_name();
	contacts[index & 0x7].set_last_name();
	contacts[index & 0x7].set_nickname();
	contacts[index & 0x7].set_phone_number();
	contacts[index & 0x7].set_darkest_secret();
	std::cout << ">>> Input is completed! <<<" << std::endl;
	std::cout << "\t***" << std::endl;
	this->index++;
	if (this->size < SIZE_LIMIT)
		this->size++;
}

void	Phonebook::search_contact(void)
{
	std::string	str;
	int			index;
	static int	tries;

	if (!tries)
		Phonebook::show_contacts();
	if (Phonebook::size == 0)
	{
		std::cout << std::endl;
		std::cout << "--- The Phonebook is empty ---" << std::endl;
		std::cout << std::endl;
		return ;
	}
	std::cout << "Which index? " << std::endl;
	std::getline(std::cin, str);
	index = atoi(str.c_str());
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
	{
		std::cerr << "Error:\nInput corrupted.\nGiving up... Bye!" << std::endl;
		exit(1);
	}
	else if (!str[0] || str[0] < 48 || str[0] > 47 + Phonebook::size || str[1])
	{
		
		++tries;
		if (tries < 3)
		{
			std::cerr << "Error:\ninvalid index" << std::endl
				<< "Enter index from 0 to " << size - 1 << "!"
				<< std::endl << 3 - tries << " tries remaining" << std::endl;
			Phonebook::search_contact();
		}
		else
		{
			tries = 0;
			std::cerr << "Error:\ninvalid index 3 times." << std::endl
				<< "Learn how to type a single digit numbers." << std::endl
				<< "Going back." << std::endl << std::endl;
		}
	}
	else
	{
		tries = 0;
		Phonebook::show_one_contact(index);
	}
}

void	Phonebook::show_contacts(void)
{
	int	i;

	std::cout << std::endl;
	std::cout << "\t\tPhonebook content:" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (Phonebook::size == 0)
		return ;
	i = 0;
	while (i < Phonebook::size)
	{
		std::cout << "|" << std::right << std::setw(10) << i;
		std::cout << "|";
		if (contacts[i].get_first_name().length() > 10)
			std::cout << std::right << std::setw(10)
				<< contacts[i].get_first_name().substr(0, 9) + '.';
		else
			std::cout << std::right << std::setw(10)
				<< contacts[i].get_first_name();
		std::cout << "|";
		if (contacts[i].get_last_name().length() > 10)
			std::cout << std::right << std::setw(10)
				<< contacts[i].get_last_name().substr(0, 9) + '.';
		else
			std::cout << std::right << std::setw(10)
				<< contacts[i].get_last_name();
		std::cout << "|";
		if (contacts[i].get_nickname().length() > 10)
			std::cout << std::right << std::setw(10)
				<< contacts[i].get_nickname().substr(0, 9) + '.';
		else
			std::cout << std::right << std::setw(10)
				<< contacts[i].get_nickname();
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << std::endl;
}

void	Phonebook::show_one_contact(int index)
{
	std::cout << "\t***" << std::endl;
	std::cout << "INDEX:\t\t " << index << std::endl;
	std::cout << "FIRST NAME:\t "
		<< contacts[index].get_first_name() << std::endl;
	std::cout << "LAST NAME:\t "
		<< contacts[index].get_last_name() << std::endl;
	std::cout << "NICKNAME:\t "
		<< contacts[index].get_nickname() << std::endl;
	std::cout << "PHONE NUMBER:\t "
		<< contacts[index].get_phone_number() << std::endl;
	std::cout << "DARKEST SECRET:\t "
		<< contacts[index].get_darkest_secret() << std::endl;
	std::cout << "\t***" << std::endl << std::endl;
}
