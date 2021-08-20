#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(const RadScorpion &copy);
		~RadScorpion(void);
		using 			Enemy::operator=;
		virtual void	takeDamage(int amount);
};

#endif