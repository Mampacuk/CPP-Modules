/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:24:44 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:25:18 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak(void)
{
	std::string	*panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
