#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
		int			_ap;
		AWeapon		*_weapon;
		std::string	_name;
	public:
		Character(void);
		Character(const Character &copy);
		~Character(void);
		Character(const std::string &name);
		Character	&operator=(const Character &rhs);
		void		recoverAP(void);
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName(void)		const;
		int			getAP(void)			const;
		AWeapon		*getWeapon(void)	const;
};

std::ostream	&operator<<(std::ostream &o, const Character &c);

#endif