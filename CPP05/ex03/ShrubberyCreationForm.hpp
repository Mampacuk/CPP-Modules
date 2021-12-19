/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:36:59 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:36:59 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		using	Form::operator=;
		void	execute(const Bureaucrat &executor) const;
	private:
		void	draw_tree(std::ostream &o) const;
		void	draw_tree(int i, int j, int height, std::ostream &o) const;
		void	putchar(int i, int j, int height, std::ostream &o) const;
		ShrubberyCreationForm();
};

#endif
