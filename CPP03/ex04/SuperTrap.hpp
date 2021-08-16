#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		using	FragTrap::_hp;
		using	FragTrap::_maxhp;
		using	NinjaTrap::_energy;
		using	NinjaTrap::_maxenergy;
		using	NinjaTrap::_melee;
		using	FragTrap::_ranged;
		using	FragTrap::_armor;
		using	FragTrap::_deploying;
		using	FragTrap::_death;
		using	NinjaTrap::_attack;
		using	NinjaTrap::_equal;
		using	FragTrap::_healed;
		using	NinjaTrap::_hurt;
		using	NinjaTrap::_noenergy;
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &copy);
		~SuperTrap(void);
		using	FragTrap::takeDamage;
		using	FragTrap::beRepaired;
		using	FragTrap::rangedAttack;
		using	NinjaTrap::meleeAttack;
};

#endif