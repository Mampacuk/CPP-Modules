#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

int	main(void)
{
	AsteroKreog		*neptunus = new AsteroKreog();
	KoalaSteroid	*koala = new KoalaSteroid();

	IMiningLaser	*deep_one = new DeepCoreMiner();
	IMiningLaser	*strip_one = new StripMiner();


	deep_one->mine(neptunus);
	deep_one->mine(koala);
	strip_one->mine(neptunus);
	strip_one->mine(koala);

	delete neptunus;
	delete koala;
	delete deep_one;
	delete strip_one;
}