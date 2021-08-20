#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
	private:
		Peon(void);
	public:
		Peon(std::string name);
		Peon(const Peon &copy);
		~Peon(void);
		using			Victim::operator=;
		virtual void	getPolymorphed(void)	const;
};

#endif