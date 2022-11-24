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

#include "Form.hpp"

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

	Bureaucrat	Hovhannes("Hovhannes Ispirian", 42);
	Bureaucrat	Olivier("Olivier Crouzet", 21);

	Form	form1("Fire 42 Yerevan's staff for incompetency", 30, 30);
	Form	form2("Renew Q-Force for a new season", 70, 80);
	try
	{
		Form	form3("Make Disenchatment mandatory to watch for all Netflix users", 10, 0);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	form4("Legalize same-sex marriage worldwide", 200, 15);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Form	form5("Expel students disobeying the laws of 42", 42, 42);

	Hovhannes.signForm(form1);
	Olivier.signForm(form1);
	Hovhannes.signForm(form5);
	std::cout << "Is form `" << form5.getName() << "` signed? " << (form5.isSigned() ? "true" : "false") << std::endl;
}