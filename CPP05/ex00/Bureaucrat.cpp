#include "Bureaucrat.hpp"

std::string	g_unnamed("(unnamed)");

Bureaucrat::Bureaucrat(std::string &name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(void) : _name(g_unnamed), _grade(150)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::promote(void)
{
	if (this->_grade - 1 >= 1)
		this->_grade--;
}

void	Bureaucrat::demote(void)
{
	if (this->_grade + 1 <= 150)
		this->_grade++;
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
