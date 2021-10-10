#include "Form.hpp"

Form::Form(void) : _name("(unnamed)"), _sign_grade(1), _exec_grade(1), _signed(false) {}

Form::Form(std::string &name, int sign_grade, int exec_grade)
: _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade), _signed(false)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy.getName()), _sign_grade(copy.getSignGrade()),
_exec_grade(copy.getExecutionGrade()), _signed(copy.isSigned()) {}

Form::~Form(void) {}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs.isSigned();
	return (*this);
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	Form::getExecutionGrade(void) const
{
	return (this->_exec_grade);
}

bool	Form::isSigned(void) const
{
	return (this->_signed);
}

std::ostream	&operator<<(std::ostream &o, const Form &f)
{
	o << "Form `" << f.getName() << "`, ";
	if (!f.isSigned())
		o << "not ";
	o << "signed, requires Grade " << f.getSignGrade() << " to sign and " << f.getExecutionGrade() << " to execute" << std::endl;
	return (o);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	this->_signed = true;
}