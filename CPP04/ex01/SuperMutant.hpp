#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(const SuperMutant &copy);
		~SuperMutant(void);
		using			Enemy::operator=;
		virtual void	takeDamage(int amount);
};

#endif