#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	protected:
		int					_hp;
		int					_maxhp;
		int					_energy;
		int					_maxenergy;
		int					_level;
		std::string			_name;
		int					_melee;
		int					_ranged;
		int					_armor;
		static std::string	_deploying[5];
		static std::string	_death[5];
		static std::string	_equal[5];
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap(void);
		ClapTrap	&operator=(ClapTrap &rhs);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif