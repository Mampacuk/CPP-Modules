/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:22:09 by aisraely          #+#    #+#             */
/*   Updated: 2022/04/02 21:33:33 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <cctype>
#include <typeinfo>
#include <sstream>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <errno.h>

static bool	ft_parse_char(std::string &line)
{
	std::cout << "char: " << (isprint(line[1]) ? line : "Non displayable") << std::endl;
	std::cout << "int: " << static_cast<int>(line[1]) << std::endl;
	std::cout << "float: " << static_cast<float>(line[1]) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(line[1]) << std::endl;
	return (true);
}

template <typename T>
static const char	*ft_deduce_type()
{
	if (!strcmp(typeid(T).name(), "c"))
		return ("char");
	else if (!strcmp(typeid(T).name(), "d"))
		return ("double");
	else if (!strcmp(typeid(T).name(), "f"))
		return ("float");
	else if (!strcmp(typeid(T).name(), "i"))
		return ("int");
	return (NULL);
}

template <typename T, typename V>
static bool	ft_detect_pseudo(V value)
{
	if (isnan(value) || isinf(value))
	{
		std::cout << ft_deduce_type<T>() << ": impossible" << std::endl;
		return (true);
	}
	return (false);
}

template <typename T, typename V>
static bool	ft_detect_overflow(V value)
{
	if (!isnan(value) && !isinf(value))
		if (!(value >= std::numeric_limits<T>::min() && value <= std::numeric_limits<T>::max()))
		{
			std::cout << ft_deduce_type<T>() << ": impossible" << std::endl;
			return (true);
		}
	return (false);
}

static bool	ft_parse_int(std::string &line)
{
	long long	value;
	const char	*ptr = line.c_str();

	value = strtol(ptr, NULL, 10);
	if (!ft_detect_overflow<char, long long>(value))
		std::cout << "char: " << (isprint(static_cast<char>(value)) ? (std::string("\'") + static_cast<char>(value) + "\'") : "Non displayable") << std::endl;
	if (!ft_detect_overflow<int, long long>(value))
		std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
	return (true);
}

static bool	ft_parse_float(std::string &line)
{
	double		value;
	const char	*ptr = line.c_str();

	value = strtod(ptr, NULL);
	if (!ft_detect_pseudo<char, double>(value) && !ft_detect_overflow<char, double>(value))
		std::cout << "char: " << (isprint(static_cast<char>(value)) ? (std::string("\'") + static_cast<char>(value) + "\'") : "Non displayable") << std::endl;
	if (!ft_detect_pseudo<int, double>(value) && !ft_detect_overflow<int, double>(value))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	if (!ft_detect_overflow<float, double>(value))
		std::cout << "float: " << value << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
	return (true);
}

static bool	ft_parse_double(std::string &line)
{
	double		value;
	const char	*ptr = line.c_str();

	errno = 0;
	value = std::strtod(ptr, NULL);
	if (!ft_detect_pseudo<char, double>(value) && !ft_detect_overflow<char, double>(value))
		std::cout << "char: " << (isprint(static_cast<char>(value)) ? (std::string("\'") + static_cast<char>(value) + "\'") : "Non displayable") << std::endl;
	if (!ft_detect_pseudo<int, double>(value) && !ft_detect_overflow<int, double>(value))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	if (!ft_detect_overflow<float, double>(value))
		std::cout << "float: " << static_cast<float>(value) << 'f' << std::endl;
	if (errno == ERANGE)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << value << std::endl;
	return (true);
}

static bool	ft_isdigitstr(std::string line)
{
	if (line.empty())
		return (false);
	for (std::string::iterator it = line.begin(); it != line.end(); it++)
		if (!isdigit(*it))
			return (false);
	return (true);
}

static bool	ft_ispseudoliteral_float(std::string &line)
{
	return (line == "-inff" || line == "+inff" || line == "nanf");
}

static bool	ft_ispseudoliteral_double(std::string &line)
{
	return (line == "-inf" || line == "+inf" || line == "nan");
}

static bool	ft_strisunique(std::string str, const char *needle)
{
	return (str.find(needle) != std::string::npos && str.find(needle) == str.rfind(needle));
}

static std::string	ft_remove_scientific_notation(std::string line)
{
	// if both present, it's an invalid input
	if (ft_strisunique(line, "e+") && ft_strisunique(line, "e-"))
		return ("");
	// select which which notation is present to erase it
	// is e+ unique and e- absent? is e- uniquee and e+ absent?
	const char	*key = ft_strisunique(line, "e+") && line.find("e-") == std::string::npos ?
		"e+" : (ft_strisunique(line, "e-") && line.find("e+") == std::string::npos ? "e-" : NULL);
	// std::cout << std::boolalpha << "ft_strisunique(line, e+)? " << ft_strisunique(line, "e+") << " line.find(e-) == std::string::npos? " << (line.find("e-") == std::string::npos) << " ft_strisunique(line, e-)? " << ft_strisunique(line, "e-") << "line.find(e+) == std::string::npos?" << (line.find("e+") == std::string::npos) << std::endl;
	// std::cout << "the key is " << key << std::endl;
	if (key)
	{
		// e+/- is at the end, wrong notation
		if (!line.find(key))
			return ("");
		// take out e+/-
		return (line.erase(line.find(key), 2));
	}
	// no e+/- were encountered
	return (line);
}

bool	ft_identify(std::string line)
{
	if (line.empty())
		return (false);
	std::cout << std::fixed << std::setprecision(1);
	/*
	 * Check for `char`
	 */
	if (line.length() == 3 && line[0] == '\'' && line[2] == '\'')
		return (ft_parse_char(line));
	/*
	 * Check for floating types 
	 */
	if (ft_ispseudoliteral_float(line))
		return (ft_parse_float(line));
	else if (ft_ispseudoliteral_double(line))
		return (ft_parse_double(line));
	// ensure length is at least 3, there's a dot and it's unique and not situated at the end of the string
	if (line.length() > 2 && ft_strisunique(line, ".") && line.find('.') != line.length() - 1)
	{
		// discard the minus if present and check whether the portion before dot purely consists of digits
		if (!ft_isdigitstr((line[0] == '-' ? line.substr(1) : line).substr(0, line.find('.'))))
			return (false);
		// if there's 'f' at the end we're dealing with float
		if (*line.rbegin() == 'f')
		{
			// check the portion after the dot for consisting of digits, excluding the 'f'
			if (!ft_isdigitstr(ft_remove_scientific_notation(line.substr(line.find('.') + 1, line.length() - line.find('.') - 2))))
				return (false);
			return (ft_parse_float(line));
		}
		// check the portion after the dot for consisting of digits
		if (!ft_isdigitstr(ft_remove_scientific_notation(line.substr(line.find('.') + 1, line.length() - line.find('.') - 1))))
			return (false);
		return (ft_parse_double(line));
	}
	// if the length of the line bigger than 1? if yes, then discard the minus, if present
	if (!ft_isdigitstr(line.length() > 1 ? (line[0] == '-' ? line.substr(1) : line) : line))
		return (false);
	return (ft_parse_int(line));
}
