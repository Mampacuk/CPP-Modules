#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
	public:
		Weapon(void);
		Weapon(std::string	_type);
		const std::string	&getType(void)	const;
		void				setType(std::string _type);
	private:
		const std::string	&_type;
};

#endif