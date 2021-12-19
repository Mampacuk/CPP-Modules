/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:01:53 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:01:53 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Morgan("Morgan Proctor", 19);
	std::cout << Morgan << " appeared!" << std::endl;
	Bureaucrat	Hermes("Hermes Conrad", 34);
	std::cout << Hermes << " appeared!" << std::endl;
	try
	{
		Bureaucrat	Monster("Beholder Monster", 0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	Vogel("Warden Vogel", 151);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Hermes.promote();
	Hermes.promote();
	std::cout << "Now, Hermes' grade is " << Hermes.getGrade() << std::endl;
	Morgan.demote();
	std::cout << "Now, Morgan's grade is " << Morgan.getGrade() << std::endl;
}