#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "[Bender (unnamed)] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[Bender " << this->_name << "] (dying) " << this->_death[rand() % 5] << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &rhs)
{
	this->_hp = rhs._hp;
	this->_maxhp = rhs._maxhp;
	this->_energy = rhs._energy;
	this->_maxenergy = rhs._maxenergy;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_melee = rhs._melee;
	this->_ranged = rhs._ranged;
	this->_armor = rhs._ranged;
	std::cout << "[Bender " << this->_name << "] (being assigned) " << this->_equal[rand() % 5] << std::endl;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	(void)target;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	(void)target;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	(void)amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
}

std::string	ClapTrap::_equal[5] =
{
	"Stop equalizing me!",
	"I was cloned!",
	"I have a child now. Let's sell him this goof.",
	"A mini-Bender in the town.",
	"Hey! He's mine!"
};

std::string	ClapTrap::_deploying[5] =
{
	"Hey, I'm Bender.",
	"Hey meatbags!",
	"Bender Rodríguez in the town!",
	"Kiss my shiny metal ass!",
	"Name's Bender."
};

std::string	ClapTrap::_death[5] =
{
	"I don't care.",
	"You suck!",
	"Ain't no worries.",
	"I'm dead, boo-hoo...",
	"I'm 40% dead!"
};