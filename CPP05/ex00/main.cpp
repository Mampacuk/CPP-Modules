#include "Bureaucrat.hpp"

int	main(void)
{
	std::string	name1("Morgan Proctor");
	std::string	name2("Hermes Conrad");
	std::string	name3("Beholder Monster");
	std::string	name4("Warden Vogel");

	Bureaucrat	Morgan(name1, 19);
	std::cout << Morgan << " appeared!" << std::endl;
	Bureaucrat	Hermes(name2, 34);
	std::cout << Hermes << " appeared!" << std::endl;
	Bureaucrat	Monster(name3, 0);
	Bureaucrat	Vogel(name4, 151);
	Bureaucrat	noname;
	std::cout << noname << " appeared!" << std::endl;
	Hermes.promote();
	Hermes.promote();
	std::cout << "Now, Hermes' grade is " << Hermes.getGrade() << std::endl;
	Morgan.demote();
	std::cout << "Now, Morgan's grade is " << Morgan.getGrade() << std::endl;
}