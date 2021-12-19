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

#include "Intern.hpp"
#include <ctime>

int	main()
{
	srand(time(0));

	Bureaucrat				Mica("Mica Hilson", 145);
	Bureaucrat				Brian("Brian Ellison", 137);
	Bureaucrat				Karin("Karin Markides", 1);

	Intern	intern;

	Form	*fshrub = intern.makeForm("shrubbery creation", "home");
	Form	*frobo = intern.makeForm("robotomy request", "Calculon");
	Form	*fpardon = intern.makeForm("presidential pardon", "Zapp Brannigan");
	Form	*fnull = intern.makeForm("resurrection ritual", "Luci");

	std::cout << "fshrub located at " << fshrub << std::endl;
	std::cout << "frobo located at " << frobo << std::endl;
	std::cout << "fpardon located at " << fpardon << std::endl;
	std::cout << "fnull located at " << fnull << std::endl;

	std::cout << std::endl;

	Mica.signForm(*fshrub);
	Brian.executeForm(*fshrub);
	Karin.signForm(*frobo);
	Karin.executeForm(*frobo);
	Karin.signForm(*fpardon);
	Karin.executeForm(*fpardon);

	delete fshrub;
	delete frobo;
	delete fpardon;
}
