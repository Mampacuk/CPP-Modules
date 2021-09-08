#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class	DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		~DeepCoreMiner(void);
		DeepCoreMiner(const DeepCoreMiner &copy);
		DeepCoreMiner	&operator=(const DeepCoreMiner &rhs);
		void			mine(IAsteroid *asteroid);
};

#endif