#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
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
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		using	ClapTrap::operator=;
		void	challengeNewcomer(std::string const &target);
};



#endif