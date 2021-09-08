#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid(void)
{

}

KoalaSteroid::~KoalaSteroid(void)
{

}

KoalaSteroid::KoalaSteroid(const KoalaSteroid &copy)
{
	(void)copy;
}

KoalaSteroid	&KoalaSteroid::operator=(const KoalaSteroid &rhs)
{
	(void)rhs;
	return (*this);
}

std::string	KoalaSteroid::getName(void) const
{
	return (std::string("KoalaSteroid"));
}

std::string	beMined(DeepCoreMiner *deep_one)
{
	(void)deep_one;
	return (std::string("* mining deep... got Meium! *"));
}

std::string	beMined(StripMiner *strip_one)
{
	(void)strip_one;
	return (std::string("* mining deep... got Tartarite! *"));
}