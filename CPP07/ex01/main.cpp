/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:01:55 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/27 17:01:55 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	ft_print(int &num)
{
	std::cout << num << std::endl;
}

void	ft_double(int &num)
{
	num *= 2;
}

void	ft_inc(int &num)
{
	num++;
}

int	main()
{
	int	hello[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "Calling ft_print():" << std::endl;
	iter(hello, 10, ft_print);
	std::cout << "Calling ft_double():" << std::endl;
	iter(hello, 10, ft_double);
	iter(hello, 10, ft_print);
	std::cout << "Calling ft_inc():" << std::endl;
	iter(hello, 10, ft_inc);
	iter(hello, 10, ft_print);
}
