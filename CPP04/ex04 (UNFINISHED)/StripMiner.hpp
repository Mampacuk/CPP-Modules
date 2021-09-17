#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class	StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		~StripMiner(void);
		StripMiner(const StripMiner &copy);
		StripMiner	&operator=(const StripMiner &rhs);
		void		mine(IAsteroid *asteroid);
};

#endif