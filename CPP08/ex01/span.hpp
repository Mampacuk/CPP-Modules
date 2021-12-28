/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 20:32:31 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/27 20:32:31 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <stdexcept>
# include <algorithm>
# include <vector>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &copy);
		Span	&operator=(const Span &rhs);
		void	addNumber(int num);
		template <class InputIterator>
		void	addNumber(InputIterator first, InputIterator last)
		{
			for ( ; first != last; first++)
				this->addNumber(*first);
		}
		int		shortestSpan() const;
		int		longestSpan() const;
	private:
		std::vector<int>	_span;
};

#endif