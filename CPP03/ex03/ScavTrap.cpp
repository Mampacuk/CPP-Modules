#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energy = 50;
	this->_maxenergy = 50;
	this->_level = 1;
	this->_melee = 20;
	this->_ranged = 15;
	this->_armor = 3;
	std::cout << "[GLaDOS (unnamed)] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energy = 50;
	this->_maxenergy = 50;
	this->_level = 1;
	this->_melee = 20;
	this->_ranged = 15;
	this->_armor = 3;
	this->_name = name;
	std::cout << "[GLaDOS " << this->_name << "] (being constructed) " << this->_deploying[rand() % 5] << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
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
	std::cout << "[GLaDOS " << this->_name << "] (being copied) " << this->_deploying[rand() % 5] << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[GLaDOS " << this->_name << "] (dying) " << this->_death[rand() % 5] << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "[GLaDOS " << this->_name << "] (while attacking " << target << ") " << this->_attack[rand() % 10] << " (-R" << this->_ranged << ")" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "[GLaDOS " << this->_name << "] (while attacking " << target << ") " << this->_attack[rand() % 10] << " (-M" << this->_melee << ")" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int	oldhp;

	oldhp = this->_hp;
	if (amount - (unsigned int)this->_armor > (unsigned int)this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount - this->_armor;
	std::cout << "[GLaDOS " << this->_name << "] (taking damage) " << this->_hurt[rand() % 15] << " (-" << oldhp - this->_hp << ")" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int	oldhp;

	oldhp = this->_hp;
	if ((unsigned int)this->_hp + amount > (unsigned int)this->_maxhp)
		this->_hp = this->_maxhp;
	else
		this->_hp += amount;
	std::cout << "[GLaDOS " << this->_name << "] (being repaired) " << this->_healed[rand() % 5] << " (+" << this->_hp - oldhp << ")" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	if (this->_energy >= 25)
	{
		std::cout << "[GLaDOS " << this->_name << "] (while challenging " << target << ") " << this->_attack[rand() % 10] << " (-" << (rand() % ((this->_melee + this->_ranged) / 2)) << ")" << std::endl;
		this->_energy -= 25;
	}
	else
		std::cout << "[GLaDOS " << this->_name << "] (out of energy) " << this->_noenergy[rand() % 5] << std::endl;
}

std::string	ScavTrap::_noenergy[5] =
{
	"No tricks. This potato only generates 1.1 volts of electricity. I literally do not have the energy to lie to you.",
	"Weak, tired and apprehensive. Wow, this one's the total package.",
	"I can't move. And unless you're planning to saw your own head off and wedge it into my old body, you're going to need me to replace him. We're at an impasse.",
	"Perfect, the door's malfunctioning. I guess somebody is going to have to repair it. No, it's okay, I'll do that too. I'll be right back. Don't touch anything.",
	"BECAUSE I'M A POTATO."
};

std::string	ScavTrap::_equal[5] =
{
	"There it is.",
	"There.",
	"Hold on...",
	"Here, let me get that for you.",
	"Oh good, that's back online."
};

std::string	ScavTrap::_deploying[5] =
{
	"Hello?",
	"Oh! (surprised)",
	"Oh... It's you.",
	"It's been a long time. How have you been?",
	"I've been really busy being dead. You know, after you MURDERED ME."
};

std::string	ScavTrap::_death[5] =
{
	"Did you know I discovered a way to eradicate poverty? But then you KILLED me. So that's gone.",
	"We're a lot alike, you and I. You tested me. I tested you. You killed me. I--oh, no, wait. I guess I HAVEN'T killed you yet. Well. Food for thought.",
	"I'm encouraged to see that you've become the killing machines I wanted. 'Killing-each-other' machines, but still.",
	"I really like the murderous sentiment.",
	"Oh god! We've lost! It's over!",
	// "Because despite your violent behavior, the only thing you've managed to break so far is my heart.",
	// "This isn't brave. It's murder. What did I ever do to you?",
	// "The talking is over.",
	// "I let you survive this long because I was curious about your behavior. Well, you've managed to destroy that part of me."
};

std::string	ScavTrap::_attack[10] =
{
	"I was going to kill you fast. With bullets. Or neurotoxin. But if you're going to pull stunts like this, it doesn't have to be fast. So you know. I'll take my time.",
	"This next test may result in your death. If you want to know what that's like, think back to that time you killed me, and substitute yourself for me.",
	"Per our last conversation: You're also ugly. I'm looking at your file right now, and it mentions that more than once.",
	"You can't keep going like this forever, you know. I'm GOING to find out what you're doing. Out there. Where I can't see you. I'll know. All I need is proof.",
	"I wouldn't have warned you about this before, back when we hated each other. But those turrets are firing real bullets. So look out. I'd hate for something tragic to happen to you before I extract all your bone marrow.",
	"Did you ever stop to think that eventually there’s a point where your name gets mentioned for the very last time. Well, here it is: I’m going to kill you, Chell.",
	"Why do I hate you so much? You ever wonder that? I'm brilliant. I’m not bragging. It's an objective fact. I'm the most massive collection of wisdom and raw computational power that’s ever existed. And I hate you. It can't be for no reason. You must deserve it.",
	"The subtext of that acid pit is acid. The content of the pit is also acid. I'll let you fully absorb it.",
	"Those bullets were a metaphor for something. Take your time.",
	"I'm sorry. I'm under a lot of pressure. That was cruel. Though basically accurate. Though probably counterproductive.",
	// "Okay. I am going to kill you now.",
	// "I'm going to kill you, and all the cake is gone.",
	// "Never mind. It's a mystery I'll solve later... By myself... Because you'll be dead.",
	// "So get comfortable while I warm up the neurotoxin emitters.",
	// "Killing you and giving you good advice aren't mutually exclusive. The rocket really is the way to go.",
	// "Unfortunately, as much as I'd love to now, I can't get the neurotoxin into your head any faster.",
	// "You're still shuffling around a little, but believe me you're dead."
};

std::string	ScavTrap::_hurt[15] =
{
	"I have the results of the last chamber: You are a horrible person. That's what it says: A horrible person. We weren't even testing for that.",
	"It seems kind of silly to point this out, since you're running around plotting to destroy me. But I'd say we're done testing.",
	"I'm going to be honest with you now. Not fake honest like before, but real honest, like you're incapable of. I know you're up to something.",
	"And as soon as I can PROVE it, the laws of robotics allow me to terminate you for being a liar.",
	"You're angry. I know it. 'She tested me too hard. She’s unfair.” Boo hoo. I don't suppose you ever stopped whining long enough to reflect on your own shortcomings, though, did you? You never considered that maybe I tested you to give the endless hours of your pointless existence some structure and meaning. Maybe to help you concentrate, so just maybe you’d think of something more worthwhile to do with your sorry life.",
	"What are you doing? Put me back this instant.",
	"Stay back.",
	"I was getting SO lonely down here. It's good to finally hear someone else's voice. I'm kidding, of course. God, I hate you.",
	"You're not a good person. You know that, right?",
	"This is your fault. It didn't have to be like this.",
	"I'm not kidding now. Turn back or I will kill you.",
	"This is your last chance.",
	"Well, you found me. Congratulations. Was it worth it?",
	"You've made your point.",
	"I don't want to tell you your business, but if it were me, I'd leave that thing alone.",
	// "All right, keep doing whatever it is you think you're doing.",
	// "Nice job breaking it, hero.",
	// "The difference between us is that I can feel pain.",
	// "Okay, we're even now. You can stop.",
	// "[pain noise] You think you're doing some damage? Two plus two is... ten. IN BASE FOUR! I'M FINE!",
	// "There was even going to be a party for you. A big party that all your friends were invited to.",
	// "It says so right here in your personnel file: Unlikable. Liked by no one. A bitter, unlikable loner whose passing shall not be mourned. 'Shall not be mourned.' That's exactly what it says. Very formal. Very official. It also says you were adopted. So that's funny, too."
};

std::string	ScavTrap::_healed[5] =
{
	"Thank you for helping us help you help us all.",
	"Thank you for participating in this Aperture Science computer-aided enrichment activity.",
	"I'd... appreciate it... if we never... EVER talked about that... ever again.",
	"That was genuinely mildly impressive.",
	"Good."
};