/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:08:52 by okraus            #+#    #+#             */
/*   Updated: 2024/05/04 18:20:50 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Contact.class.hpp"

#define SIZE_LIMIT		8
#define	CELL_WIDTH		10

class	Phonebook
{
	private:
		unsigned int	index;
		int				size;
		Contact			contacts[8];
		void			show_contacts(void);
		void			show_one_contact(int index);
	public:
		Phonebook(void);
		void			add_contact(void);
		void			search_contact(void);
};

#endif