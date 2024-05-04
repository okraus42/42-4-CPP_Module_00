/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myawesomephonebook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:52:35 by okraus            #+#    #+#             */
/*   Updated: 2024/05/04 18:19:17 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

static void	phone_loop(Phonebook phonebook)
{
	std::string	cmd;

	while (1)
	{
		std::cout << "Input Command (EXIT, ADD, SEARCH):\t";
		std::getline(std::cin, cmd);
		if (std::cin.eof() || std::cin.bad() || std::cin.fail())
		{
			std::cerr << "Error\nInput corrupted.\nGiving up... Bye!" << std::endl;
			exit(1);
		}
		if (cmd == "SEARCH")
			phonebook.search_contact();
		else if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cerr << cmd << " is a wrong command." << std::endl
				<< "Input next: ADD / SEARCH / EXIT" << std::endl << std::endl;
	}
	std::cout << std::endl << "Exiting PhoneBook!" << std::endl;
}

int main(int ac, char **av)
{
	Phonebook	phonebook;

	(void)av;
	if (ac > 1)
	{
		std::cerr << "Error\nUsage:\n./phonebook" << std::endl;
		return (1);
	}
	std::cout << std::endl;
	std::cout << "My Awesome PhoneBook 4.2" << std::endl;
	std::cout << std::endl;
	phone_loop(phonebook);
	return (0);
}
