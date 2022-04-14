/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:01:55 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/14 16:57:12 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void	ft_print(const T &x)
{
	std::cout << x << std::endl;
}

void	ft_print2(const int &x)
{
	std::cout << x << std::endl;
}

int	main()
{
	int	hello[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::cout << "Calling ft_print():" << std::endl;
	iter(hello, 10, ft_print);
	std::cout << "Calling ft_print2():" << std::endl;
	iter(hello, 10, ft_print2);
}
