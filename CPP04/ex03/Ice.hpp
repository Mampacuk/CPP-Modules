/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:53 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:53 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &copy);
		~Ice();
		using	AMateria::operator=;
		Ice		*clone(void)	const;
		void	use(ICharacter &target);
};

#endif