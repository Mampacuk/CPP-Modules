#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	NinjaTrap : public ClapTrap
{
	private:
		static std::string	_deploying[5];
		static std::string	_death[5];
		static std::string	_attack[10];
		static std::string	_equal[5];
		static std::string	_hurt[15];
		static std::string	_healed[5];
		static std::string	_noenergy[5];
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &copy);
		~NinjaTrap(void);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		using	ClapTrap::operator=;
		void	ninjaShoebox(const NinjaTrap &target);
		void	ninjaShoebox(const ClapTrap &target);
		void	ninjaShoebox(const ScavTrap &target);
		void	ninjaShoebox(const FragTrap &target);
};

#endif