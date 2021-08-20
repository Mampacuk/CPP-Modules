#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int	main(void)
{
	Character	*me = new Character("me");

	std::cout << *me;

	Enemy		*b = new RadScorpion();
	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	Enemy		*a = new SuperMutant();
	me->attack(a);
	me->attack(a);
	me->attack(a);
	me->attack(a);
	me->attack(a);
	me->attack(a);
	return (0);
}