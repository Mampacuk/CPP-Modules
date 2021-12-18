/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:30 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:30 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*_inventory[4];
		int			_size;
		std::string	_name;
	public:
		~Character();
		Character();
		Character(const std::string &name);
		Character(const Character &copy);
		Character				&operator=(const Character &rhs);
		const std::string		&getName(void)			const;
		void					equip(AMateria *m);
		void					unequip(int idx);
		void					use(int idx, ICharacter& target);
		const AMateria			*getItem(int idx);
};

#endif