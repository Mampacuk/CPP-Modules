/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:45:11 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/08 13:45:11 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		filename;
	std::string		s1;
	std::string		s2;
	char			buffer;
	std::string		strbuffer;
	int				i;
	bool			sed;

	if (argc != 4 || argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "[sed] Either an invalid number of arguments was provided, or some of them are empty." << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ifs.open(filename);
	ofs.open(filename + ".replace");
	if (ifs.fail() || ofs.fail())
	{
		std::cout << "[sed] Failed to either open the given file or create an output file." << std::endl;
		return (1);
	}
	while (!ifs.eof())
	{
		buffer = ifs.get();
		if (ifs.eof())
			break ;
		if (buffer != s1[0])
			ofs << buffer;
		else
		{
			if (s1.length() == 1)
			{
				if (!ifs.eof())
					ofs << s2;
			}
			else
			{
				sed = true;
				i = 1;
				strbuffer = buffer;
				while (!ifs.eof())
				{
					buffer = ifs.get();
					if (!ifs.eof())
						strbuffer += buffer;
					if (buffer != s1[i] || ifs.eof())
					{
						sed = false;
						break ;
					}
					if (i == s1.length() - 1)
						break ;
					i++;
				}
				if (sed)
					ofs << s2;
				else
					ofs << strbuffer;
			}
		}
	}
	ifs.close();
	ofs.close();
}