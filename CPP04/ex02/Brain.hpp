/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:15:58 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 13:15:58 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &copy);
		Brain	&operator=(const Brain &rhs);
	private:
		std::string	ideas[100];
};

#endif
