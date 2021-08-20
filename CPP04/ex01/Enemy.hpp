#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class	Enemy
{
	private:
		std::string	_type;
		int			_hp;
	public:
		Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &copy);
		virtual			~Enemy(void);
		Enemy			&operator=(const Enemy &rhs);
		std::string		getType(void)	const;
		int				getHP(void)		const;
		void			setHP(int hp);
		virtual void	takeDamage(int amount);
};

#endif