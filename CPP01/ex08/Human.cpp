#include "Human.hpp"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Human hit " << target << " with a golf club! Haha!" << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "Human shot " << target << " with a glass cannon! Hehe!" << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Human shouted at " << target << " with immense power! Dayumnn..." << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	void (Human::*actions[])(std::string const &) =
	{
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	char	*action_names[] =
	{
		(char*)"meleeAttack",
		(char*)"rangedAttack",
		(char*)"intimidatingShout"
	};
	for (size_t i = 0; i < 3; i++)
	{
		if (action_name == action_names[i])
		{
			(this->*actions[i])(target);
			return ;
		}
	}
	std::cout << "Human does something undefined to " << target << "!?" << std::endl;
}