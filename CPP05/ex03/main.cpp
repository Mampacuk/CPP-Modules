/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:02:11 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:02:11 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int	main()
{
	srand(time(0));
	ShrubberyCreationForm	shrub("PlanetExpress");
	RobotomyRequestForm		robotomy("Bender");
	PresidentialPardonForm	pardon("Turanga Leela");

	Bureaucrat				Mica("Mica Hilson", 145);
	Bureaucrat				Brian("Brian Ellison", 137);
	Bureaucrat				Karin("Karin Markides", 1);

	std::cout << Mica << std::endl << Brian << std::endl << Karin << std::endl;
	std::cout << shrub << std::endl;
	Karin.executeForm(shrub);
	Mica.signForm(shrub);
	Mica.executeForm(shrub);
	Brian.executeForm(shrub);
	Karin.executeForm(shrub);
	std::cout << shrub << std::endl;

	std::cout << std::endl;

	std::cout << robotomy << std::endl;
	Brian.signForm(robotomy);
	Karin.signForm(robotomy);
	Karin.executeForm(robotomy);
	Karin.executeForm(robotomy);
	Karin.executeForm(robotomy);

	std::cout << std::endl;

	std::cout << pardon << std::endl;
	Karin.signForm(pardon);
	Karin.executeForm(pardon);
}
