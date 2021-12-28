/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:01:36 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/27 17:01:36 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template <typename T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const T	&max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
