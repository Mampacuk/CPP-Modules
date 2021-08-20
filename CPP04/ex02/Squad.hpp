#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class	Squad : public ISquad
{
	private:
		int				_size;
		ISpaceMarine	**_fleet;
	public:
		Squad(void);
		~Squad(void);
		Squad(const ISquad &copy);
		Squad					&operator=(const Squad &rhs);
		virtual int				getCount(void)		const;
		virtual ISpaceMarine	**getFleet(void)	const;
		virtual ISpaceMarine	*getUnit(int id)	const;
		virtual int				push(ISpaceMarine *ship);
};

#endif