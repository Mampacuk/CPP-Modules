#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:
		void		announce(void)	const;
		std::string	get_type(void)	const;
		void		set_type(std::string _type);
		void		set_name(std::string _name);
		Zombie(void);
		Zombie(std::string _name, std::string _type);
		~Zombie(void);

	private:
		std::string	_name;
		std::string	_type;
};

#endif