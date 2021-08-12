/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:57 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:25:58 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain;
	std::string	*brainptr;
	std::string	&brainref = brain;

	brain = "HI THIS IS BRAIN";
	brainptr = &brain;
	std::cout << *brainptr << " PRINTED BY A POINTER" << std::endl;
	std::cout << brainref << " PRINTED BY A REFERENCE" << std::endl;
}