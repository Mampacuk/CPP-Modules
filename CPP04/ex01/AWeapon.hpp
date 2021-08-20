#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class	AWeapon
{
	private:
		std::string	_name;
		int			_damage;
		int			_apcost;
	public:
		AWeapon(void);
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		~AWeapon(void);
		AWeapon			&operator=(const AWeapon &rhs);
		std::string		getName(void)	const;
		int				getAPCost(void)	const;
		int				getDamage(void)	const;
		virtual void	attack(void)	const = 0;
};

#endif