/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:58 by okraus            #+#    #+#             */
/*   Updated: 2024/05/05 14:40:14 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <stdlib.h>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact(void);
		void		set_first_name(void);
		std::string	get_first_name(void);
		void		set_last_name(void);
		std::string	get_last_name(void);
		void		set_nickname(void);
		std::string	get_nickname(void);
		void		set_phone_number(void);
		std::string	get_phone_number(void);
		void		set_darkest_secret(void);
		std::string	get_darkest_secret(void);
		void		check_input(void);
};
#endif