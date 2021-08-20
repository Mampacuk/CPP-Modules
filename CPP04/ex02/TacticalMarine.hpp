#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		~TacticalMarine(void);
		TacticalMarine(const TacticalMarine &copy);
		TacticalMarine	&operator=(const TacticalMarine &rhs);
		TacticalMarine	*clone(void) 		const;
		void			battleCry(void)		const;
		void			rangedAttack(void)	const;
		void			meleeAttack(void)	const;
};

#endif