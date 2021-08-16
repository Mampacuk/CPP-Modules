#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energy = 100;
	this->_maxenergy = 100;
	this->_level = 1;
	this->_melee = 30;
	this->_ranged = 20;
	this->_armor = 5;
	std::cout << "[Turret (unnamed)] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energy = 100;
	this->_maxenergy = 100;
	this->_level = 1;
	this->_melee = 30;
	this->_ranged = 20;
	this->_armor = 5;
	this->_name = name;
	std::cout << "[Turret " << this->_name << "] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->_hp = copy._hp;
	this->_maxhp = copy._maxhp;
	this->_energy = copy._energy;
	this->_maxenergy = copy._maxenergy;
	this->_level = copy._level;
	this->_name = copy._name;
	this->_melee = copy._melee;
	this->_ranged = copy._ranged;
	this->_armor = copy._ranged;
	std::cout << "[Turret " << this->_name << "] (being copied) " << this->_deploying[rand() % 5] << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[Turret " << this->_name << "] (dying) " << this->_death[rand() % 5] << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "[Turret " << this->_name << "] (attacking) " << this->_attack[rand() % 10] << target << "! (-R" << this->_ranged << ")" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "[Turret " << this->_name << "] (attacking) " << this->_attack[rand() % 10] << target << "! (-M" << this->_melee << ")" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int	oldhp;

	oldhp = this->_hp;
	if (amount - (unsigned int)this->_armor > (unsigned int)this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount - this->_armor;
	std::cout << "[Turret " << this->_name << "] (taking damage) " << this->_hurt[rand() % 15] << " (-" << oldhp - this->_hp << ")" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int	oldhp;

	oldhp = this->_hp;
	if ((unsigned int)this->_hp + amount > (unsigned int)this->_maxhp)
		this->_hp = this->_maxhp;
	else
		this->_hp += amount;
	std::cout << "[Turret " << this->_name << "] (being repaired) " << this->_healed[rand() % 5] << " (+" << this->_hp - oldhp << ")" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energy >= 25)
	{
		std::cout << "[Turret " << this->_name << "] (special attack) " << this->_attack[rand() % 10] << target << "! (-" << (rand() % ((this->_melee + this->_ranged) / 2)) << ")" << std::endl;
		this->_energy -= 25;
	}
	else
		std::cout << "[Turret " << this->_name << "] (out of energy) " << this->_noenergy[rand() % 5] << std::endl;
}

std::string	FragTrap::_noenergy[5] =
{
	"Not... enough... energy...",
	"Resources do not suffice.",
	"Can't perform the operation.",
	"Illegal operation.",
	"Illegal hardware instruction."
};

std::string	FragTrap::_equal[5] =
{
	"I was copied.",
	"I have a twin now.",
	"Finally, equality was achieved.",
	"Why would you reassign me?",
	"You are a monster."
};

std::string	FragTrap::_deploying[5] =
{
	"Hello.",
	"Deploying.",
	"Preparing to dispense product.",
	"Activated.",
	"There you are."
	// "Who's there?"
};

std::string	FragTrap::_death[5] =
{
	"Critical error.",
	"Shutting down.",
	"I don't blame you.",
	"I don't hate you.",
	"Why..."
	// "No hard feelings.",
	// "Ahahaha.",
	// "Sorry, we're closed.",
	// "Goodbye.",
	// "Sleep mode activated.",
	// "Your business is appreciated.",
	// "Hibernating.",
	// "Goodnight.",
	// "Resting.",
	// "Nap time."
};

std::string	FragTrap::_attack[10] =
{
	"Hi, ",
	"Target acquired, name: ",
	"Firing at you, ",
	"Hello friend ",
	"Gotcha, ",
	"There you are, ",
	"I see you, ",
	"Dispensing product on ",
	"Preparing to destroy ",
	"Demolition commenced. Target: "
	// "Feeding with bullets ",
	// "Erasing existence of "
};

std::string	FragTrap::_hurt[15] =
{
	"Arrrrgh!",
	"Owwww!",
	"Can't... breathe...",
	"Excuse me, you're squishing me.",
	"Um, hello?",
	"Help! Being squished!",
	"Ow!",
	"Owww!",
	"Owwwww!",
	"It burns.",
	"I'm on fire.",
	"I'm on fire ow.",
	"Please stop.",
	"You've made your point.",
	"OK, you win."
	// "This is not good.",
	// "Ow ow ow!",
	// "Hey! It's me!",
	// "Don't shoot!",
	// "Stop shooting!",
	// "Aaaah.",
	// "Ow ow ow ow owww.",
	// "Why?",
	// "I did everything you asked!",
	// "I don't understand!",
	// "I'm fine!",
	// "AHHHHHHHHH!",
	// "Wheeeeee-OH NO!"
};

std::string	FragTrap::_healed[5] =
{
	"Whee.",
	"Hooray.",
	"I feel better.",
	"This is good.",
	"I love it."
};