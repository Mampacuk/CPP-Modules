#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	srand(time(0));
	// ScavTrap	glados1("Caroline");

	// glados1.takeDamage(100);
	// glados1.takeDamage(5);
	// glados2 = glados1;
	// glados2.beRepaired(1000);
	// glados2.rangedAttack("Chell");
	// glados2.meleeAttack("Cave Johnson");
	// glados2.takeDamage(10000);
	// glados2.challengeNewcomer("Mel");
	// glados2.challengeNewcomer("Atlas");
	// glados2.challengeNewcomer("P-body");
	// glados2.challengeNewcomer("Bird");
	// glados2.challengeNewcomer("Companion Cube");

	// std::cout << std::endl;

	// FragTrap	turret1("Rick");
	
	// turret1.takeDamage(100);
	// turret1.takeDamage(5);
	// turret2 = turret1;
	// turret2.beRepaired(1000);
	// turret2.rangedAttack("Alpha");
	// turret2.meleeAttack("Beta");
	// turret2.takeDamage(10000);
	// turret2.vaulthunter_dot_exe("Negan");
	// turret2.vaulthunter_dot_exe("Wolf");
	// turret2.vaulthunter_dot_exe("The Governor");
	// turret2.vaulthunter_dot_exe("Shane Walsh");
	// turret2.vaulthunter_dot_exe("Jadis");

	// ClapTrap	bender;

	// NinjaTrap	dolores("Dolores Abernathy");
	// NinjaTrap	halores("Charlotte Hale");

	// dolores.beRepaired(1);
	// dolores.meleeAttack("Ford");
	// dolores.rangedAttack("Arnold");
	// dolores.takeDamage(10);
	// dolores.ninjaShoebox(bender);
	// dolores.ninjaShoebox(halores);
	// dolores.ninjaShoebox(glados1);
	// dolores.ninjaShoebox(turret1);

	SuperTrap	super1("Halores");
	ClapTrap	bender;

	super1.takeDamage(100000);
	super1.vaulthunter_dot_exe("Serac");
	super1.ninjaShoebox(bender);
	super1.vaulthunter_dot_exe("Maeve");
	super1.vaulthunter_dot_exe("Armistice");
	// notice that there's only 20 energy points left, so this'll result in
	// "out of energy prompt"
	super1.vaulthunter_dot_exe("Logan");
	super1.vaulthunter_dot_exe("Theresa");
	super1.meleeAttack("Bernard");
	super1.rangedAttack("Caleb");
	super1.beRepaired(100000);
	super1.takeDamage(10);
}