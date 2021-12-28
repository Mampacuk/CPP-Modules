/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 20:32:24 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/27 20:32:24 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : Span(0) {}

Span::Span(unsigned int n)
{
	this->_span.reserve(n);
}

Span::~Span() {}

Span::Span(const Span &copy) : Span(copy._span.capacity())
{
	this->_span = copy._span;
}

Span	&Span::operator=(const Span &rhs)
{
	this->_span.reserve(rhs._span.capacity());
	this->_span = rhs._span;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_span.size() == this->_span.capacity())
		throw std::overflow_error("cannot add to a full span");
	this->_span.push_back(num);
	std::sort(this->_span.begin(), this->_span.end());
}

int	Span::shortestSpan() const
{
	if (this->_span.size() < 2)
		throw std::logic_error("a span should be calculated with at least 2 numbers in the set");
	return (this->_span[1] - this->_span[0]);
}

int	Span::longestSpan() const
{
	if (this->_span.size() < 2)
		throw std::logic_error("a span should be calculated with at least 2 numbers in the set");
	return (this->_span.back() - this->_span.front());
}
