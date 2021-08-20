#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int	main(void)
{
	ISpaceMarine 	*bob = new TacticalMarine;
	ISpaceMarine 	*jim = new AssaultTerminator;
	ISquad			*vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "vlc's " << i << " member's address is " << cur << std::endl;
	}

	std::cout << "INTRODUCING THE COPY-CONSTRUCTED" << std::endl;

	Squad			*copyconstructed = new Squad(*vlc);

	for (int i = 0; i < copyconstructed->getCount(); ++i)
	{
		ISpaceMarine* cur = copyconstructed->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << "Copyconstructed's " << i << " member's address is " << cur << std::endl;
	}

	std::cout << "vlc->getUnit(-1) returned " << vlc->getUnit(-1) << std::endl;
	std::cout << "vlc->getUnit(10) returned " << vlc->getUnit(10) << std::endl;

	ISpaceMarine	*cloned = vlc->getUnit(0)->clone();
	std::cout << "first member's clone's address is " << cloned << " whereas its address is " << vlc->getUnit(0) << std::endl;
	std::cout << "trying to push jim into vlc returned " << vlc->push(jim) << " (the size was " << vlc->getCount() << ")" << std::endl;
	std::cout << "trying to push NULL into vlc returned " << vlc->push(NULL) << " (the size was " << vlc->getCount() << ")" << std::endl;

	ISpaceMarine	*santa = new AssaultTerminator;
	ISquad			*rival = new Squad;

	rival->push(santa);

	std::cout << "ABOUT TO ASSIGN RIVAL TO VLC" << std::endl;
	vlc = rival;
	std::cout << "DONE ASSIGNING; VLC'S getCount() RETURNED " << vlc->getCount() << std::endl;

	delete vlc;

	return (0);
}