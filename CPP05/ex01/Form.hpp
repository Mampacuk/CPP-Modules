#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_exec_grade;
		bool				_signed;
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("The grade is higher than the maximum possible grade (1).");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("The grade is lower than the minimum possible grade (150).");
				}
		};
	public:
		Form(void);
		Form(std::string &name, int sign_grade, int exec_grade);
		Form(const Form &copy);
		~Form(void);
		Form				&operator=(const Form &rhs);
		const std::string	&getName(void)			const;
		int					getSignGrade(void)		const;
		int					getExecutionGrade(void)	const;
		bool				isSigned(void)			const;
		void				beSigned(const Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &o, const Form &f);

#endif