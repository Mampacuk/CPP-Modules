/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:53:13 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:53:13 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("Shrubbery Creation", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

void	ShrubberyCreationForm::print_node(int val, int offset, int &n, std::ostream &o) const
{
	if (n < 20)
		return ;
	bool	is_internal = rand() % 2;
	for (int i = 0; i < offset; i++)
		o << "  ";
	o << val;
	if (is_internal)
		o << " ( " ;
	o << std::endl;
	this->print_node(rand() % 80, offset + 2, ++n, o);
	this->print_node(rand() % 80, offset + 2, ++n, o);
	if (is_internal)
	{
		for (int i = 0; i < offset + 1; i++)
			o << "  ";
		o << ")" << std::endl;
	}
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::ofstream	o(this->getTarget() + "_shrubbery", std::ofstream::out);
	int				n = 0;

	this->print_node(rand() % 80, 0, n, o);
}
