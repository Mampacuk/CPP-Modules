/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:28:34 by aisraely          #+#    #+#             */
/*   Updated: 2022/02/24 19:48:59 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address from the object: " << &str << std::endl;
	std::cout << "Address from the pointer: " << stringPTR << std::endl;
	std::cout << "Address from the reference: " << &stringREF << std::endl;

	std::cout << "Value from the object: " << str << std::endl;
	std::cout << "Value from the pointer: " << *stringPTR << std::endl;
	std::cout << "Value from the reference: " << stringREF << std::endl;
}
