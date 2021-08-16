#include "FragTrap.hpp"

int	main(void)
{
	srand(time(0));
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