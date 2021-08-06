#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain;
	std::string	*brainptr;
	std::string	&brainref = brain;

	brain = "HI THIS IS BRAIN";
	brainptr = &brain;
	std::cout << *brainptr << " PRINTED BY A POINTER" << std::endl;
	std::cout << brainref << " PRINTED BY A REFERENCE" << std::endl;
}