#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria	**_inventory;
		int			_size;
		std::string	_name;
	public:
		~Character(void);
		Character(void);
		Character(const std::string &name);
		Character(const Character &copy);
		Character					&operator=(const Character &rhs);
		virtual const std::string	&getName(void)			const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		int							getCount(void)			const;
		AMateria					**getInventory(void)	const;
		AMateria					*getItem(int idx)		const;
};

#endif