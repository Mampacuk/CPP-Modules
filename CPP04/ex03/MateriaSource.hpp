#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	**_sources;
		int			_size;
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource		&operator=(const MateriaSource &rhs);
		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(const std::string &type);

};

#endif