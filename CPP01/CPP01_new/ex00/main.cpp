/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:33 by aisraely          #+#    #+#             */
/*   Updated: 2021/11/03 19:59:45 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*Avo = newZombie("debil");
	Zombie	*Hakob = newZombie("durak");
	Zombie	*Shahen = newZombie("boba");

	randomChump("Gevorg");
	randomChump("Vlad");
	
	delete Shahen;
	delete Hakob;
	delete Avo;
}
