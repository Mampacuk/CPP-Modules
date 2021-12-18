/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:34:30 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/18 10:34:30 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal	*meta = new Animal;
	Animal	*j = new Dog;
	Animal	*i = new Cat;
	std::cout << "meta's type: " << meta->getType() << std::endl;
	std::cout << "j's type: " << j->getType() << std::endl;
	std::cout << "i's type: " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	i->operator=(*j);
	std::cout << "After `i = j;`:" << std::endl;
	std::cout << "j's type: " << j->getType() << std::endl;
	std::cout << "i's type: " << i->getType() << std::endl;
	Animal *k = new Cat(*static_cast<Cat*>(i));
	k->makeSound();
	std::cout << "k's type: " << k->getType() << std::endl;
	delete meta;
	delete j;
	delete i;
	delete k;

	std::cout << "Wrong Animal testing." << std::endl;
	WrongAnimal	*wrong = new WrongAnimal;
	WrongAnimal	*evil_cat = new WrongCat;

	std::cout << "evil_cat's type: " << evil_cat->getType() << std::endl;
	wrong->makeSound();
	evil_cat->makeSound();
	delete wrong;
	delete evil_cat;
}