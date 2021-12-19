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

int	main()
{
	ShrubberyCreationForm	shrub("home");
	Bureaucrat				Mica("Mica Hilson", 145);
	Bureaucrat				Brian("Brian Ellison", 137);
	Bureaucrat				Karin("Karin Markides", 1);

	std::cout << Mica << std::endl << Brian << std::endl << Karin << std::endl;
	std::cout << shrub << std::endl;
	Karin.executeForm(shrub);
	Mica.signForm(shrub);
	Mica.executeForm(shrub);
	Brian.executeForm(shrub);
}
