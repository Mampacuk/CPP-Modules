#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

# include "IAsteroid.hpp"
# include "DeepCoreMiner.hpp"
# include "StripMiner.hpp"

class	AsteroKreog : public IAsteroid
{
	public:
		AsteroKreog(void);
		~AsteroKreog(void);
		AsteroKreog(const AsteroKreog &copy);
		AsteroKreog				&operator=(const AsteroKreog &rhs);
		std::string				getName(void)					const;
		virtual std::string		beMined(IMiningLaser *miner)	const;
		virtual std::string		beMinedByDeepCoreMiner(DeepCoreMiner *deep_one)	const;
		virtual std::string		beMinedByStripMiner(StripMiner *strip_one)		const;
};

#endif