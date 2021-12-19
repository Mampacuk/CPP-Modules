/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:02:32 by aisraely          #+#    #+#             */
/*   Updated: 2021/12/19 12:02:32 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class	Form
{
	private:
		const std::string	_name;
		std::string			_target;
		const int			_sign_grade;
		const int			_exec_grade;
		bool				_signed;
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			private:
				const char	*_msg;
			public:
				GradeTooLowException();
				GradeTooLowException(const char *_msg);
				virtual const char *what() const throw();
		};
		class	ExecutingUnsignedFormException : public std::exception
		{			
			public:
				virtual const char *what() const throw();
		};
	protected:
		Form();
		Form(const std::string &name, const std::string &target, int sign_grade, int exec_grade);
		Form(const Form &copy);
		void				check_executor(const Bureaucrat &executor) const;
	public:
		virtual ~Form();
		Form				&operator=(const Form &rhs);
		const std::string	&getName() const;
		const std::string	&getTarget() const;
		int					getSignGrade() const;
		int					getExecutionGrade() const;
		bool				isSigned() const;
		void				beSigned(const Bureaucrat &bureaucrat);
		virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &o, const Form &f);

#endif
