#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{

}

DeepCoreMiner::~DeepCoreMiner(void)
{

}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &copy)
{
	(void)copy;
}

DeepCoreMiner	&DeepCoreMiner::operator=(const DeepCoreMiner &rhs)
{
	(void)rhs;
	return (*this);
}

void	DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << asteroid->beMined(this) << std::endl;
}