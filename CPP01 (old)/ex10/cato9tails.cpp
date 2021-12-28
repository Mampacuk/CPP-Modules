/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cato9tails.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:41:45 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/13 14:41:46 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	int				i;
	std::string		buffer;
	std::ifstream	infile;

	if (argc == 1)
	{
		while (std::getline(std::cin, buffer))
			std::cout << buffer << std::endl;
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (argv[i][0] == '-' && argv[i][1] == '\0')
				while (std::getline(std::cin, buffer))
					std::cout << buffer << std::endl;
			else
			{
				infile.open(argv[i]);
				if (infile.fail())
				{
					std::cout << "cato9tails: " << argv[i++] << ": No such file or directory" << std::endl;
					continue ;
				}
				while (std::getline(infile, buffer))
					std::cout << buffer << std::endl;
				infile.close();
			}
			i++;
		}
	}
}