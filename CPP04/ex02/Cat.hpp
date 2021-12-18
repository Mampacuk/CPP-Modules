/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:23:11 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 10:23:11 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat&);
		using Animal::operator=;
		void	makeSound() const;
	private:
		Brain	*_brain;
};

#endif
