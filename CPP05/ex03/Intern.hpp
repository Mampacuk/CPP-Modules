/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:09:38 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 19:09:38 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern&);
		Intern	&operator=(const Intern&);
		Form	*makeForm(const std::string &name, const std::string &target) const;
	private:
		Form	*makePresidentialPardon(const std::string &target) const;
		Form	*makeRobotomyRequest(const std::string &target) const;
		Form	*makeShrubberyCreation(const std::string &target) const;
};

#endif
