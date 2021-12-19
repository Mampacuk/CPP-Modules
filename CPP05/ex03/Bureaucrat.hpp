/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:02:07 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:02:07 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		const std::string	&getName() const;
		int					getGrade() const;
		void				signForm(Form &form) const;
		void				executeForm(const Form &form);
		void				promote();
		void				demote();
	private:
		Bureaucrat();
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		const std::string	_name;
		int					_grade;
};

# include "Form.hpp"

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif