#include "StripMiner.hpp"

StripMiner::StripMiner(void)
{

}

StripMiner::~StripMiner(void)
{

}

StripMiner::StripMiner(const StripMiner &copy)
{
	(void)copy;
}

StripMiner	&StripMiner::operator=(const StripMiner &rhs)
{
	(void)rhs;
	return (*this);
}

void	StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << asteroid->beMined(this) << std::endl;
}