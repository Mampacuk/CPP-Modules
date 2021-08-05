#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
	private:
		int					n;
		Zombie				*zombies;
		static std::string	_namepool[8];
		static std::string	_typepool[8];
};

#endif
