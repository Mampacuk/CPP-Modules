#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
		Sorcerer(void);
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &copy);
		~Sorcerer(void);
		Sorcerer	&operator=(Sorcerer &rhs);
		std::string	get_name(void)					const;
		std::string	get_title(void)					const;
		void		polymorph(const Victim &victim)	const;
};

std::ostream	&operator<<(std::ostream &o, const Sorcerer &s);

#endif