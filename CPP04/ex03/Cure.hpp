/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:41 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:41 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &copy);
		~Cure();
		using		AMateria::operator=;
		Cure		*clone(void)	const;
		void		use(ICharacter &target);
};

#endif