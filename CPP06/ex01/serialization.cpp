/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 22:18:10 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 22:18:10 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
