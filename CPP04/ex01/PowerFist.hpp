#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(const PowerFist &copy);
		~PowerFist(void);
		using			AWeapon::operator=;
		virtual	void	attack(void)	const;
};

#endif