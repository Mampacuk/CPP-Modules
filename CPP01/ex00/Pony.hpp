#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class	Pony
{
	public:
		Pony(std::string _name, int _age);
		~Pony(void);

	private:
		std::string	_name;
		int			_age;
};

#endif