/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:15:14 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/08 14:15:14 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

enum	e_level
{
	debug,
	info,
	warning,
	error,
	undefined
};

e_level	ft_interpret_complaint(const std::string &level)
{
	if (level == "DEBUG")
		return (debug);
	else if (level == "INFO")
		return (info);
	else if (level == "WARNING")
		return (warning);
	else if (level == "ERROR")
		return (error);
	return (undefined);
}

int	main(int argc, char **argv)
{
	Karen	theKaren;

	if (argc != 2)
		theKaren.complain("You provided wrong number of arguments. Why should I complain when"
			" you give me the incorrect number of arguments?! This is outrageous.");
	else
	{
		std::string	level = argv[1];
		e_level		enumerated_level = ft_interpret_complaint(level);
		switch (enumerated_level)
		{
			case debug:
				theKaren.complain("debug");
				/* fall through */
			case info:
				theKaren.complain("info");
				/* fall through */
			case warning:
				theKaren.complain("warning");
				/* fall through */
			case error:
				theKaren.complain("error");
				break ;
			default:
				theKaren.complain("masks, vaccinations, gays, lockdown etc..");
		}
	}
}
