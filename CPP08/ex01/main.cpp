/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:56:24 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/14 17:15:35 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main()
{
	srand(time(0));

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span small_span(1);

	try
	{
		small_span.addNumber(1);
		small_span.addNumber(2);
	}
	catch (const std::overflow_error &e)
	{
		std::cout << "attempted to add beyond capacity" << std::endl;
	}
	try
	{
		small_span.longestSpan();
	}
	catch (const std::logic_error &e)
	{
		std::cout << "attempted to generate a span with less than 2 elements" << std::endl;
	}
	
	std::vector<int>	v;
	for (int i = 0; i < 10000; i++)
		v.push_back(rand() - RAND_MAX / 2);
	
	Span	big_span(10000);

	big_span.addNumber(v.begin(), v.end());
	std::cout << "longest span: " << big_span.longestSpan() << std::endl;
	std::cout << "shortest span: " << big_span.shortestSpan() << std::endl;
}
