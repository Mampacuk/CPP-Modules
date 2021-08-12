/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:37 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:38 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
	Human	Homer;

	Homer.action("meleeAttack", "Flanders");
	Homer.action("rangedAttack", "Sideshow Bob");
	Homer.action("intimidatingShout", "Mr. Burns");
	Homer.action("kissPerson", "Marge");
}