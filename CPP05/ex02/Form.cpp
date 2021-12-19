/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:02:20 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:02:20 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("The grade is higher than the maximum possible grade (1).");
}

Form::GradeTooLowException::GradeTooLowException() : _msg("The grade is lower than the minimum possible grade (150).") {}

Form::GradeTooLowException::GradeTooLowException(const char *_msg) : _msg(_msg) {}

const char	*Form::GradeTooLowException::what() const throw()
{
	return (this->_msg);
}

const char	*Form::ExecutingUnsignedFormException::what() const throw()
{
	return ("Cannot execute an unsigned form.");
}

Form::Form() : _name(), _target(), _sign_grade(1), _exec_grade(1), _signed(false) {}

Form::Form(const std::string &name, const std::string &target, int sign_grade, int exec_grade)
: _name(name), _target(target), _sign_grade(sign_grade), _exec_grade(exec_grade), _signed(false)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _target(copy._target), _sign_grade(copy._sign_grade),
_exec_grade(copy._exec_grade), _signed(copy._signed) {}

Form::~Form() {}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	this->_target = rhs._target;
	return (*this);
}

const std::string	&Form::getName(void) const
{
	return (this->_name);
}

const std::string	&Form::getTarget(void) const
{
	return (this->_target);
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
	o << "signed, targeting " << f.getTarget() << ", requires Grade " << f.getSignGrade() << " to sign and " << f.getExecutionGrade() << " to execute" << std::endl;
	return (o);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_sign_grade)
		throw GradeTooLowException("Bureaucrat is not authorized to sign due to their grade being too low");
	this->_signed = true;
}

void	Form::check_executor(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->_exec_grade)
		throw GradeTooLowException("Bureaucrat is not authorized to sign due to their grade being too low");
	if (!this->_signed)
		throw ExecutingUnsignedFormException();
}