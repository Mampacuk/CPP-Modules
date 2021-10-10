#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(std::string &name, int grade);
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		const std::string	&getName(void)			const;
		int					getGrade(void)			const;
		void				signForm(Form &form)	const;
		void				promote(void);
		void				demote(void);
	private:
		const std::string	_name;
		int					_grade;
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
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif