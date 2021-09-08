#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

# include "IAsteroid.hpp"
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"

class	KoalaSteroid : public IAsteroid
{
	public:
		KoalaSteroid(void);
		~KoalaSteroid(void);
		KoalaSteroid(const KoalaSteroid &copy);
		KoalaSteroid			&operator=(const KoalaSteroid &rhs);
		std::string				getName(void)					const;
		virtual std::string		beMined(IMiningLaser *miner)	const;
		virtual std::string		beMinedByDeepCoreMiner(DeepCoreMiner *deep_one)	const;
		virtual std::string		beMinedByStripMiner(StripMiner *strip_one)		const;
};

#endif