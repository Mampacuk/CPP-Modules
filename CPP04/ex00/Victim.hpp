#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim
{
	private:
		std::string	_name;
		Victim(void);
	public:
		Victim(std::string name);
		~Victim(void);
		Victim(const Victim &copy);
		Victim			&operator=(Victim &rhs);
		std::string		get_name(void)			const;
		virtual void	getPolymorphed(void)	const;
};

std::ostream	&operator<<(std::ostream &o, const Victim &v);

#endif