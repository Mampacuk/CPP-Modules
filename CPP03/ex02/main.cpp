#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	srand(time(0));
	ScavTrap	glados1("Caroline");
	ScavTrap	glados2;

	glados1.takeDamage(100);
	glados1.takeDamage(5);
	glados2 = glados1;
	glados2.beRepaired(1000);
	glados2.rangedAttack("Chell");
	glados2.meleeAttack("Cave Johnson");
	glados2.takeDamage(10000);
	glados2.challengeNewcomer("Mel");
	glados2.challengeNewcomer("Atlas");
	glados2.challengeNewcomer("P-body");
	glados2.challengeNewcomer("Bird");
	glados2.challengeNewcomer("Companion Cube");

	std::cout << std::endl;

	FragTrap	turret1("Rick");
	FragTrap	turret2;
	
	turret1.takeDamage(100);
	turret1.takeDamage(5);
	turret2 = turret1;
	turret2.beRepaired(1000);
	turret2.rangedAttack("Alpha");
	turret2.meleeAttack("Beta");
	turret2.takeDamage(10000);
	turret2.vaulthunter_dot_exe("Negan");
	turret2.vaulthunter_dot_exe("Wolf");
	turret2.vaulthunter_dot_exe("The Governor");
	turret2.vaulthunter_dot_exe("Shane Walsh");
	turret2.vaulthunter_dot_exe("Jadis");
}