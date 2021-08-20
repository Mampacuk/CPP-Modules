#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &copy);
		~Cure(void);
		using			AMateria::operator=;
		Cure			*clone(void)	const;
		virtual void	use(ICharacter &target);
};

#endif