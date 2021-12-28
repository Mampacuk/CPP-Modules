/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 19:28:45 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/27 19:28:45 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>
#include <set>
#include <iostream>

int	main()
{
	int myints[] = {16, 2, 77, 29, 13, 2, 2, 4, 1, -1, 2};

	std::set<int>		set;
	std::deque<int>		deque;
	std::vector<int>	vector;
	std::list<int>		list;

	for (size_t i = 0; i < sizeof(myints) / sizeof(int); i++)
	{
		set.insert(myints[i]);
		deque.push_front(myints[i]);
		vector.push_back(myints[i]);
		list.push_back(myints[i]);
	}

	std::cout << "set is:";
	for (std::set<int>::iterator it = set.begin(); it != set.end(); it++)
		std::cout << ' ' << *it;
	
	std::set<int>::iterator set_it = easyfind(set, 2);

	std::cout << std::endl << "easyfind() returned " << *set_it << " and it's followed by " << *(++set_it) << std::endl;

	std::cout << "deque is:";
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++)
		std::cout << ' ' << *it;
	
	std::deque<int>::iterator deque_it = easyfind(deque, 2);

	std::cout << std::endl << "easyfind() returned " << *deque_it << " and it's followed by " << *(++deque_it) << std::endl;

	std::cout << "vector is:";
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << ' ' << *it;
	
	std::vector<int>::iterator vector_it = easyfind(vector, 2);

	std::cout << std::endl << "easyfind() returned " << *vector_it << " and it's followed by " << *(++vector_it) << std::endl;

	std::cout << "list is:";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << ' ' << *it;
	
	std::list<int>::iterator list_it = easyfind(list, 2);

	std::cout << std::endl << "easyfind() returned " << *list_it << " and it's followed by " << *(++list_it) << std::endl;

	std::cout << "is easyfind(set, 10000) == set.end()? " << (easyfind(set, 10000) == set.end() ? "yes" : "no") << std::endl; 
}