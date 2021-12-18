#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		const std::string	&getName(void)	const;
		int					getGrade(void)	const;
		void				promote(void);
		void				demote(void);
	private:
		Bureaucrat(void);
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

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif