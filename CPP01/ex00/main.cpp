#include "Pony.hpp"

Pony	*ponyOnTheHeap(void)
{
	Pony	*heappony;

	heappony = new Pony("Lisa", 5);
	return (heappony);
}

void	ponyOnTheStack(void)
{
	Pony	stackpony("Beanie", 7);
}

int	main(void)
{
	Pony	*pony;

	pony = ponyOnTheHeap();
	delete pony;
	ponyOnTheStack();
}