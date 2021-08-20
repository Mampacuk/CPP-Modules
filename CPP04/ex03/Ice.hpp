#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &copy);
		~Ice(void);
		using			AMateria::operator=;
		Ice				*clone(void)	const;
		virtual void	use(ICharacter &target);
};

#endif