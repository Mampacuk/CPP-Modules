#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class	FragTrap
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
		static std::string	_death[15];
		static std::string	_attack[12];
		static std::string	_equal[5];
		static std::string	_hurt[28];
		static std::string	_healed[5];
		static std::string	_noenergy[5];
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		FragTrap	&operator=(FragTrap &rhs);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const &target);
};



#endif