/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/05 14:40:35 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

// Constructor

Contact::Contact(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";	
}

// Getters

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

// Checker

void	Contact::check_input(void)
{
	if (std::cin.eof() || std::cin.bad() || std::cin.fail())
	{
		std::cerr << "Error\nInput corrupted.\nGiving up... Bye!" << std::endl;
		exit(1);
	}
}

// Setters

void	Contact::set_first_name(void)
{
	std::cout << "Enter the first name" << std::endl;
	std::getline(std::cin, Contact::first_name);
	check_input();
}

void	Contact::set_last_name(void)
{
	std::cout << "Enter the last name" << std::endl;
	std::getline(std::cin, Contact::last_name);
	check_input();
}

void	Contact::set_nickname(void)
{
	std::cout << "Enter the nickname" << std::endl;
	std::getline(std::cin, Contact::nickname);
	check_input();
}

void	Contact::set_phone_number(void)
{
	std::cout << "Enter the phone number" << std::endl;
	std::getline(std::cin, Contact::phone_number);
	check_input();
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "Enter the darkest secret" << std::endl;
	std::getline(std::cin, Contact::darkest_secret);
	check_input();
}