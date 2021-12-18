#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what(void) const
{
	return ("The grade is higher than the maximum possible grade (1).");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const
{
	return ("The grade is lower than the minimum possible grade (150).");
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade()) {}

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
	else
		throw GradeTooHighException();
}

void	Bureaucrat::demote(void)
{
	if (this->_grade + 1 <= 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
