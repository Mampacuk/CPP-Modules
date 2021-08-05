/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:50:15 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/05 15:50:17 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= ('a' - 'A');
		str++;
	}
}

int	main(int argc, char **argv)
{	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		argv++;
		while (*argv)
		{
			ft_toupper(*argv);
			std::cout << *argv;
			argv++;
		}
	}
	std::cout << std::endl;
}
