#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	Character		*me = new Character("me");
	AMateria		*tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter	*bob = new Character("bob");
	
	std::cout << me->getItem(0)->getType() << " originally has " <<  me->getItem(0)->getXP() << " xp" << std::endl;
	me->use(0, *bob);
	std::cout << me->getItem(0)->getType() << " now has " <<  me->getItem(0)->getXP() << " xp" << std::endl;
	me->use(1, *bob);
	std::cout << me->getItem(1)->getType() << " now has " <<  me->getItem(1)->getXP() << " xp" << std::endl;
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(NULL);
	
	std::cout << "the inventory now: " << me->getItem(0)->getType() << "; " << me->getItem(1)->getType() << "; " << me->getItem(2)->getType() << std::endl;
	
	me->unequip(-1);
	me->unequip(5);
	me->unequip(1);

	std::cout << "the inventory now: " << me->getItem(0)->getType() << "; " << me->getItem(1)->getType() << std::endl;

	Character	*Claudette = new Character(*me);
	Character	*Dwight = new Character();

	*Dwight = *Claudette;

	std::cout << "Dwight's 1st item is at " << Dwight->getItem(0) << " while mine is at " << me->getItem(0) << " while Claudette's at " << Claudette->getItem(0) << std::endl;
	
	delete Dwight;
	delete Claudette;
	delete bob;
	delete me;
	delete src;

	return (0);
}