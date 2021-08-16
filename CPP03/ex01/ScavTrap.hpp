#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

class	ScavTrap
{
	private:
		int					_hp;
		int					_maxhp;
		int					_energy;
		int					_maxenergy;
		int					_level;
		std::string			_name;
		int					_melee;
		int					_ranged;
		int					_armor;
		static std::string	_deploying[6];
		static std::string	_death[9];
		static std::string	_attack[17];
		static std::string	_equal[5];
		static std::string	_hurt[22];
		static std::string	_healed[5];
		static std::string	_noenergy[5];
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap &rhs);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const &target);
};



#endif