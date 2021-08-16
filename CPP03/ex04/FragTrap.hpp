#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	protected:
		static std::string	_deploying[5];
		static std::string	_death[5];
		static std::string	_attack[10];
		static std::string	_equal[5];
		static std::string	_hurt[15];
		static std::string	_healed[5];
		static std::string	_noenergy[5];
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		using	ClapTrap::operator=;
		void	vaulthunter_dot_exe(std::string const &target);
};



#endif