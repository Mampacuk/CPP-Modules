/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:57:08 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 22:57:08 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <limits>
#include <climits>

bool	ft_identify(std::string line);

int	main(int argc, char **argv)
{
	if (argc == 2)
		if (!ft_identify(argv[1]))
			std::cout << "Invalid input" << std::endl;
}
