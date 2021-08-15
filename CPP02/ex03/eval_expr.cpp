#include "Fixed.hpp"

int					i;
int					opening;
int					closing;
std::string			received;
Fixed				lhs;
Fixed				rhs;
float				arg;
std::string			subexpr;
std::string			leftover;
std::string			rightover;

// WARNING: NOT ALL THE CASES ARE COVERED!

int	ft_evaluate_expression(void)
{
	int			j;
	char		operation;
	int			reiterate;
	std::string	temp;

	// attending the operations
	operation = 0;
	j = 0;
	reiterate = 0;
	while (j < subexpr.size())
	{
		if (!operation)
		{
			if (subexpr[j] == '+')
				operation = '+';
			else if (subexpr.find(" - ") != -1)
				operation = '-';
			else if (subexpr[j] == '*')
				operation = '*';
			else if (subexpr[j] == '/')
				operation = '/';
			if (operation)
				subexpr[j] = ' ';
		}
		else
		{
			if (subexpr[j] == '+'
				|| subexpr.find(" - ") != -1
				|| subexpr[j] == '*'
				|| subexpr[j] == '/')
			reiterate = true;
		}
		j++;
	}
	if (!operation)
	{
		std::cout << "[eval_expr] No operation detected." << std::endl;
		return (1);
	}
	j = 0;
	// getting first operand
	while (j < subexpr.size())
	{
		if (std::isdigit(subexpr[j]) || subexpr[j] == '-')
			break ;
		else if (!(std::isspace(subexpr[j]) || subexpr[j] == '-'))
		{
			std::cout << "[eval_expr] Invalid input (LHS parsing)." << std::endl;
			return (1);
		}
		j++;
	}
	arg = atof(subexpr.substr(j).c_str());
	lhs = Fixed(arg);
	while (std::isdigit(subexpr[j]) || subexpr[j] == '.' || subexpr[j] == '-')
		j++;
	while (j < subexpr.size())
	{
		if (std::isdigit(subexpr[j]) || subexpr[j] == '-')
			break ;
		else if (!(std::isspace(subexpr[j]) || subexpr[j] == '-'))
		{
			std::cout << "[eval_expr] Invalid input (RHS parsing)." << std::endl;
			return (1);
		}
		j++;
	}
	if (j == subexpr.size())
	{
		std::cout << "[eval_expr] Operand missing." << std::endl;
		return (1);
	}
	arg = atof(subexpr.substr(j).c_str());
	rhs = Fixed(arg);
	if (operation == '+')
		lhs = lhs + rhs;
	else if (operation == '-')
		lhs = lhs - rhs;
	else if (operation == '*')
		lhs = lhs * rhs;
	else if (operation == '/')
		lhs = lhs / rhs;
	if (reiterate == true)
	{
		while (std::isdigit(subexpr[j]) || subexpr[j] == '.' || subexpr[j] == '-')
			j++;
		subexpr = lhs.toString().append(subexpr.substr(j));
		if (ft_evaluate_expression())
		{
			std::cout << "[eval_expr] Invalid recursion." << std::endl;
			return (1);
		}
	}
	temp = rightover.append(lhs.toString());
	received = temp.append(leftover);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "[eval_expr] Invalid number of arguments." << std::endl;
		return (1);
	}
	received = argv[1];
	i = 0;
	opening = 0;
	closing = 0;
	while (i < received.size())
	{
		if (received[i] == '(')
			opening++;
		else if (received[i] == ')')
			closing++;
		i++;
	}
	if (opening != closing)
	{
		std::cout << "[eval_expr] Parsing error: bad parentheses." << std::endl;
		return (1);
	}
	while (!received.empty())
	{
		if (received.find_last_of('(') != -1)
		{
			if (received.find_first_of(')', received.find_last_of('(')) != -1)
			{
				subexpr = received.substr(received.find_last_of('(') + 1, received.find_first_of(')', received.find_last_of('(')) - 1);
				rightover = received.substr(0, received.find_last_of('('));
				leftover = received.substr(received.find_first_of(')', received.find_last_of('(')) + 1, std::string::npos);
				// std::cout << "Leftover is |" << leftover << "|" << std::endl;
				// std::cout << "Rightover is |" << rightover << "|" << std::endl;
				// std::cout << "subexpr is |" << subexpr << "|" << std::endl;
				received.erase(received.find_last_of('('), received.find_first_of(')', received.find_last_of('(')) + 1);
				if (ft_evaluate_expression())
				{
					std::cout << "[eval_expr] Parsing error." << std::endl;
					return (1);
				}
				// std::cout << "Evaluated an expression; result is " << lhs << std::endl;
				// std::cout << "After evaluation, received looks like |" << received << "|" << std::endl;
			}
			else
			{
				std::cout << "[eval_expr] Bad parentheses enclosure." << std::endl;
				return (1);
			}
		}
		else
		{
			subexpr = received;
			if (ft_evaluate_expression())
			{
				std::cout << "[eval_expr] Parsing error." << std::endl;
				return (1);
			}
			// std::cout << "Evaluated an expression; result is " << lhs << std::endl;
			break ;
		}
	}
	std::cout << lhs << std::endl;
}