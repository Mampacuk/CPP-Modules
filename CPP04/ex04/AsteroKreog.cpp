#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog(void)
{

}

AsteroKreog::~AsteroKreog(void)
{

}

AsteroKreog::AsteroKreog(const AsteroKreog &copy)
{
	(void)copy;
}

AsteroKreog	&AsteroKreog::operator=(const AsteroKreog &rhs)
{
	(void)rhs;
	return (*this);
}

std::string	AsteroKreog::getName(void) const
{
	return (std::string("AsteroKreog"));
}

std::string	beMined(DeepCoreMiner *deep_one)
{
	(void)deep_one;
	return (std::string("* mining deep... got Dragonite! *"));
}

std::string	beMined(StripMiner *strip_one)
{
	(void)strip_one;
	return (std::string("* mining deep... got Flavium! *"));
}