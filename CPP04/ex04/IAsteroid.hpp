#ifndef IASTEROID_HPP
# define IASTEROID_HPP

# include <string>
# include "StripMiner.hpp"
# include "DeepCoreMiner.hpp"

class	IAsteroid
{
	public:
		virtual				~IAsteroid(void) {}
		virtual std::string	beMined(IMiningLaser*)					const = 0;
		virtual std::string	beMinedByStripMiner(StripMiner*)		const = 0;
		virtual std::string	beMinedByDeepCoreMiner(DeepCoreMiner*)	const = 0;
		virtual std::string	getName(void)							const = 0;
};

#endif