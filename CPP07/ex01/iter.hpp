/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:24:28 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/14 16:47:30 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void	iter(T *arr, size_t len, void func(const T&))
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif
