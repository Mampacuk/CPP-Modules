/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 20:06:51 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/30 21:05:02 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class	PhoneBook
{
	public:
		PhoneBook(void);
		void			displayEntries(void)	const;
		void			displayEntry(int i)		const;
		int				get_size(void)			const;
		void			addEntry(std::string fields[3]);
	private:
		unsigned int	_size;
		int				_insert_id;
		Contact			_contacts[8];
};

#endif
