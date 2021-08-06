#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB
{
	public:
		HumanB(std::string _name);
		void	attack(void)	const;
		void	setWeapon(Weapon _weapon);
	private:
		std::string	_name;
		Weapon		_weapon;
};

#endif