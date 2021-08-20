#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		~AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &copy);
		AssaultTerminator	&operator=(const AssaultTerminator &rhs);
		AssaultTerminator	*clone(void)		const;
		void				battleCry(void)		const;
		void				rangedAttack(void)	const;
		void				meleeAttack(void)	const;
};

#endif