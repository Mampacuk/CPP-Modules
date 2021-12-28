/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:04 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:05 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human
{
	public:
		const Brain	&getBrain(void)	const;
		std::string	identify(void)	const;
	private:
		const Brain	_brain;
};

#endif