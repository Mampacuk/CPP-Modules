#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class	ICharacter;

class	AMateria
{
	protected:
		unsigned int	_xp;
		std::string		_type;
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		AMateria			&operator=(const AMateria &rhs);
		virtual				~AMateria(void);
		const std::string	&getType(void)	const; //Returns the materia type
		unsigned int		getXP(void)		const; //Returns the Materia's XP
		virtual AMateria	*clone(void)	const = 0;
		virtual void		use(ICharacter &target);
};

#include "ICharacter.hpp"

#endif