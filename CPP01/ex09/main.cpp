/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:46 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:24:19 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int	main(void)
{
	Logger	logger1("test1-empty");
	Logger	logger2("test2-non-empty");
	Logger	logger3("test3-non-existent");

	logger1.log("file", "hello world");
	logger1.log("console", "bye world");

	logger2.log("file", "appended");
	logger2.log("console", "do it do it do it!");

	logger3.log("file", "I'm drowning!");
	logger3.log("console", "And I'm Elfo!");

	logger1.log("abort", "I like guys");
}