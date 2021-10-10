#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::string	name1("Morgan Proctor");
	std::string	name2("Hermes Conrad");
	std::string	name3("Beholder Monster");
	std::string	name4("Warden Vogel");
	std::string	name5("Hovhannes Ispirian");
	std::string	name6("Olivier Crouzet");

	Bureaucrat	Morgan(name1, 19);
	std::cout << Morgan << " appeared!" << std::endl;
	Bureaucrat	Hermes(name2, 34);
	std::cout << Hermes << " appeared!" << std::endl;
	try
	{
		Bureaucrat	Monster(name3, 0);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Vogel(name4, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Hermes.promote();
	Hermes.promote();
	std::cout << "Now, Hermes' grade is " << Hermes.getGrade() << std::endl;
	Morgan.demote();
	std::cout << "Now, Morgan's grade is " << Morgan.getGrade() << std::endl;

	std::string	formname1("Fire 42 Yerevan's staff for incompetency");
	std::string	formname2("Renew Q-Force for a new season");
	std::string	formname3("Make Disenchatment mandatory to watch for all Netflix users");
	std::string	formname4("Legalize same-sex marriage worldwide");
	std::string	formname5("Expel students disobeying the laws of 42");

	Bureaucrat	Hovhannes(name5, 42);
	Bureaucrat	Olivier(name6, 21);

	Form	form1(formname1, 30, 30);
	Form	form2(formname2, 70, 80);
	try
	{
		Form	form3(formname3, 10, 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	form4(formname4, 200, 15);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Form	form5(formname5, 42, 42);

	Hovhannes.signForm(form1);
	Olivier.signForm(form1);
	Hovhannes.signForm(form5);
}