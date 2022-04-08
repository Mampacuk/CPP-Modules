/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:01:55 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/08 16:09:31 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int	main()
{
	Array<int>	hi;

	std::cout << "hi's size: " << hi.size() << std::endl;

	Array<int>	hello(20);
	Array<int>	bye(5);

	for (int i = 0; i < bye.size(); i++)
		bye[i] = i;
	for (int i = 0; i < hello.size(); i++)
		hello[i] = -i;

	Array<int>	no(bye);
	
	std::cout << "bye:";
	for (int i = 0; i < bye.size(); i++)
		std::cout << " " << bye[i];
	std::cout << std::endl << "hello: ";
	for (int i = 0; i < hello.size(); i++)
		std::cout << " " << hello[i];
	std::cout << std::endl << "no: ";
	for (int i = 0; i < no.size(); i++)
		std::cout << " " << no[i];
	bye = hello;
	std::cout << std::endl << "bye after \"bye = hello;\":";
	for (int i = 0; i < bye.size(); i++)
		std::cout << " " << bye[i];
	hello = no;
	std::cout << std::endl << "hello after \"hello = no;\":";
	for (int i = 0; i < hello.size(); i++)
		std::cout << " " << hello[i];
}
