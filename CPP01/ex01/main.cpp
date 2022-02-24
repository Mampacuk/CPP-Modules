/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:33 by aisraely          #+#    #+#             */
/*   Updated: 2022/02/24 19:47:55 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*_42yerevan_students = zombieHorde(42, "zombie");
	
	for (size_t i = 0; i < 42; i++)
		_42yerevan_students[i].announce();
	
	delete [] _42yerevan_students;
}
