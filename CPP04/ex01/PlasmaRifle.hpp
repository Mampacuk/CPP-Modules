#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &copy);
		~PlasmaRifle(void);
		using			AWeapon::operator=;
		virtual	void	attack(void)	const;
};

#endif