#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(std::string &name, int grade);
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		const std::string	&getName(void)	const;
		int					getGrade(void)	const;
		void				promote(void);
		void				demote(void);
	private:
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("GradeTooHighException: The grade is higher than the maximum possible grade (0).");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("GradeTooLowException: The grade is lower than the minimum possible grade (150).");
				}
		};
		const std::string	&_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif