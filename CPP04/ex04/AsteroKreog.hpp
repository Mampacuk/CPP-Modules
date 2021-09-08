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

R:7        W:8
HEREDOC PIPE

in:0     R:7  PIPE1 W:4         R:5 PIPE2  W:6       out:1
 \     /  				\     /					\   /
  cmd1                    cmd2 					cmd3

#endif