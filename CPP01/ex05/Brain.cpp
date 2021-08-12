/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:25:59 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:00 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

std::string	Brain::identify(void) const
{
	std::ostringstream	os;

	os << this;
	return (os.str());
}
