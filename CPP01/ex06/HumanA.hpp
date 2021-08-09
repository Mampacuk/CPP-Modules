#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA
{
	public:
		HumanA(std::string _name, Weapon &_weapon);
		void		attack(void)	const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif