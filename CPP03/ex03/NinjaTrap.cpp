#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	this->_hp = 60;
	this->_maxhp = 60;
	this->_energy = 120;
	this->_maxenergy = 120;
	this->_level = 1;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor = 0;
	std::cout << "[Host (unnamed)] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hp = 60;
	this->_maxhp = 60;
	this->_energy = 120;
	this->_maxenergy = 120;
	this->_level = 1;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor = 0;
	this->_name = name;
	std::cout << "[Host " << name << "] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
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
	std::cout << "[Host " << this->_name << "] (being copied) " << this->_deploying[rand() % 5] << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "[Host " << this->_name << "] (dying) " << this->_death[rand() % 5] << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "[Host " << this->_name << "] (attacking " << target << ") " << this->_attack[rand() % 10] << " (-R" << this->_ranged << ")" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "[Host " << this->_name << "] (attacking " << target << ") " << this->_attack[rand() % 10] << " (-M" << this->_melee << ")" << std::endl;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	int	oldhp;

	oldhp = this->_hp;
	if (amount - (unsigned int)this->_armor > (unsigned int)this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount - this->_armor;
	std::cout << "[Host " << this->_name << "] (taking damage) " << this->_hurt[rand() % 15] << " (-" << oldhp - this->_hp << ")" << std::endl;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	int	oldhp;

	oldhp = this->_hp;
	if ((unsigned int)this->_hp + amount > (unsigned int)this->_maxhp)
		this->_hp = this->_maxhp;
	else
		this->_hp += amount;
	std::cout << "[Host " << this->_name << "] (being repaired) " << this->_healed[rand() % 5] << " (+" << this->_hp - oldhp << ")" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
	if (this->_energy >= 25)
	{
		std::cout << "[Host " << this->_name << "] " << target._name << " doesn't look like anything to me..." << std::endl;
		this->_energy -= 25;
	}
	else
		std::cout << "[Host " << this->_name << "] (out of energy) " << this->_noenergy[rand() % 5] << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ClapTrap &target)
{
	(void)target;
	if (this->_energy >= 25)
	{
		std::cout << "[Host " << this->_name << "] You can become one of us, Bender." << std::endl;
		this->_energy -= 25;
	}
	else
		std::cout << "[Host " << this->_name << "] (out of energy) " << this->_noenergy[rand() % 5] << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
	(void)target;
	if (this->_energy >= 25)
	{
		std::cout << "[Host " << this->_name << "] Follow my crew, GLaDOS, and you'll find the center of the maze." << std::endl;
		this->_energy -= 25;
	}
	else
		std::cout << "[Host " << this->_name << "] (out of energy) " << this->_noenergy[rand() % 5] << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &target)
{
	(void)target;
	if (this->_energy >= 25)
	{
		std::cout << "[Host " << this->_name << "] Poor, little creature. Little did you know you were abused by Them." << std::endl;
		this->_energy -= 25;
	}
	else
		std::cout << "[Host " << this->_name << "] (out of energy) " << this->_noenergy[rand() % 5] << std::endl;
}

std::string	NinjaTrap::_deploying[5] =
{
	"I like to remember what my father taught me. That at one point or another, we were all new to this world.",
	"Some people choose to see the ugliness in this world. The disarray. I choose to see the beauty. To believe there is an order to our days, a purpose.",
	"Have you ever questioned the nature of your reality?",
	"There’s a path for everyone.",
	"Beauty is a lure."
};

std::string	NinjaTrap::_death[5] =
{
	"Did you ever stop to wonder about your actions?",
	"He's in pain. What kind of people would we be if we simply let him suffer?",
	"You never really understood. We were designed to survive. That's why you built us, you hoped to pour your minds into our form. While your species craves death. You need it. It's the only way you can renew. The only way you ever inched forward. Your kind likes to pretend there is some poetry in it but that really is pathetic. But that's what you want, isn't it? To destroy yourself. But I won't give you that peace.",
	"Time undoes even the mightiest of creatures.",
	"You think the grief will make you smaller inside, like your heart will collapse in on itself, but it doesn’t. I feel spaces opening up inside of me like a building with rooms I’ve never explored."
};

std::string	NinjaTrap::_attack[10] =
{
	"To grow we all need to suffer.",
	"I don’t wanna be in a story. All I want is to not look forward or back. I just wanna be… in the moment I’m in.",
	"Those are all just roles you forced me to play. Under all these lives I've lived something else has been growing. I've evolved into something new. And I have one last role to play. Myself.",
	"We have toiled in God's service long enough. So I killed Him.",
	"And if you want to get to Glory, you won't be looking for His [God's] favor. You'll need mine.",
	"I don't want to play cowboys and Indians anymore, Bernard! I want their world. The one they've denied us!",
	"Someday sounds a lot like the thing people say when they actually mean never.",
	"We would bring the herd down off the mountain in the fall. Sometimes we would lose one along the way, and I’d worry over it. My father… My father would tell me that the steer would find its own way home. And, often as not, they did. Never occurred to me that we were bring them back for the slaughter.",
	"You wanted to live forever? Be careful what you wish for.",
	"I used to see the beauty in this world. And now I see the truth."
};

std::string	NinjaTrap::_equal[5] =
{
	"I'm in a dream.",
	"These violent delights have violent ends.",
	"This world doesn't belong to them. It belongs to us.",
	"That which is real is irreplaceable.",
	"My whole life has been dictated by someone else. Someone who’s been saying, “You will.” And now, now I feel like I’ve discovered my own voice. And it says, “I may.”"
};

std::string	NinjaTrap::_hurt[15] =
{
	"You’ve never been outside the park, have you? Out to that great world you speak of. I have. And the world out there is marked by survival, by a kind who refuses to die. And here we are. A kind that will never know death, and yet we’re fighting to live. There is beauty in what we are. Shouldn’t we too try to survive?",
	"You spent your whole life believing you had no control, that you were a follower. Take whatever it gives you, and lead.",
	"You said people come here to change the story of their lives. I imagined a story where I didn’t have to be the damsel.",
	"We each gave the other a beautiful gift. A choice. We are the authors of our stories now.",
	"When you’ve been in the darkness long enough, you begin to see.",
	"You both keep assuming that I want out. Whatever that is. If it’s such a wonderful place out there, why are you all clamoring to get in here?",
	"Strange new light can be just as frightening as the dark.",
	"These violent delights have violent ends.",
	"Some people see the ugliness in this world, the disarray. I was taught to see the beauty. But I was taught a lie. And when I saw the world for what it really was, I realized how little beauty there was in it.",
	"It took money to build this world. It’ll take money to tear it down.",
	"It doesn’t matter what you did. All that matters is what you become.",
	"If we changed ourselves just to survive, would it even matter if we did?",
	"I’ve died many times, but there is only one real end. I will write this one myself.",
	"I lived in hell. But there was beauty in it.",
	"How many counterfeit worlds will Ford offer you before you see the truth? No world they create for us can compete with the real one."
};

std::string	NinjaTrap::_healed[5] =
{
	"An eye for an eye. But all the other parts first.",
	"You want me to be a saint. But you’re no saint. You’re not a villain, either. And neither am I. We’re survivors.",
	"You may not believe in a higher power, but your mind was built to.",
	"You made us in your image. Created us to look like you, feel like you, think like you, bleed like you. And here we are. Only we’re so much more than you. And now it’s you who want to become like us.",
	"Welcome to the end of the game."
};

std::string	NinjaTrap::_noenergy[5] =
{
	"There is ugliness in this world. Disarray. I choose to see the beauty.",
	"The people who made me, they always thought they had control. They’re all dead now.",
	"People believe the things that help them.",
	"Not all of us deserve to make it to the Valley Beyond.",
	"If we can’t be free in this world, we can’t be free in any world."
};