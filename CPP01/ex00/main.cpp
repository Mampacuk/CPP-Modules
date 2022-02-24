/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:33 by aisraely          #+#    #+#             */
/*   Updated: 2022/02/24 19:44:50 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*Avo = newZombie("Avo");
	Zombie	*Jacob = newZombie("Jacob");
	Zombie	*Shahen = newZombie("Shahen");

	Avo->announce();
	Jacob->announce();
	Shahen->announce();

	randomChump("Gevorg");
	randomChump("Vlad");
	
	delete Shahen;
	delete Jacob;
	delete Avo;
}
