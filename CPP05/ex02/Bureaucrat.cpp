/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:02:03 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:02:03 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The grade is higher than the maximum possible grade (1).");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
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

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::promote()
{
	if (this->_grade - 1 >= 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::demote()
{
	if (this->_grade + 1 <= 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " succeeded in signing `" << form.getName() << "`" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " failed to sign `" << form.getName()
			<< "` because his/her grade is too low" << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes `" << form.getName() << "`" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " failed to execute `" << form.getName() << "`. Reason: " << e.what() << std::endl;
	}
	
}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
