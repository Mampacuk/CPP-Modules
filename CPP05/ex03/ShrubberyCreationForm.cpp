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

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("shrubbery creation", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

void	ShrubberyCreationForm::putchar(int i, int j, int height, std::ostream &o) const
{
	if (i == height - 1)
		o << '*';
	else
	{
		if (j == height - 1 + i || j == height - 1 - i)
			o << '*';
		else
		{
			if (j < height - 1 + i && j > height - 1 - i)
				o << (rand() % 2 ? '#' : ' ');
			else
				o << ' ';
		}
	}
	if (j == height * 2 - 2)
		o << std::endl;
}

void	ShrubberyCreationForm::draw_tree(std::ostream &o) const
{
	int	height = rand() % 16 + 8;
	this->draw_tree(height - 1, height * 2 - 2, height, o);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < height + 1; j++)
			o << (j < height - 2 ? ' ' : '|');
		o << std::endl;
	}
}

void	ShrubberyCreationForm::draw_tree(int i, int j, int height, std::ostream &o) const
{
	if (i < 0)
		return ;
	if (j <= 0)
		this->draw_tree(i - 1, height * 2 - 2, height, o);
	else
		this->draw_tree(i, j - 1, height, o);
	this->putchar(i, j, height, o);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::ofstream	o(this->getTarget() + "_shrubbery", std::ofstream::out);
	this->draw_tree(o);
}
