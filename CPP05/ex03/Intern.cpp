/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:09:31 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 19:09:31 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern&) {}

Intern	&Intern::operator=(const Intern&) { return (*this); }

Form	*Intern::makePresidentialPardon(const std::string &target) const
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeRobotomyRequest(const std::string &target) const
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makeShrubberyCreation(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}


Form	*Intern::makeForm(const std::string &name, const std::string &target) const
{
	Form *(Intern::*forms[])(const std::string&) const =
	{
		&Intern::makePresidentialPardon,
		&Intern::makeRobotomyRequest,
		&Intern::makeShrubberyCreation
	};
	const char	*forms_names[] =
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	for (size_t i = 0; i < 3; i++)
		if (name == forms_names[i])
			return ((this->*forms[i])(target));
	std::cout << "Intern was requested an unknown form" << std::endl;
	return (NULL);
}
