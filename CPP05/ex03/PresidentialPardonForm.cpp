/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 18:54:24 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 18:54:24 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("Presidential Pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) {}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->check_executor(executor);
	std::cout <<this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
