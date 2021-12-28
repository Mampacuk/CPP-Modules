/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:39 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:27:56 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(const std::string &_filename)
{
	this->_filename = _filename;
}

std::string	Logger::makeLogEntry(const std::string &message) const
{
	time_t		now;
	char		*timestamp;
	std::string	timestampstr;
	std::string	entry;

	now = time(0);
	timestamp = ctime(&now);
	timestampstr = timestamp;
	entry = "[" + timestampstr.substr(0, timestampstr.length() -1) + "] " + message;
	return (entry);
}

void	Logger::logToConsole(const std::string &message) const
{
	std::cout << this->makeLogEntry(message);
	std::cout << std::endl;
}

void	Logger::logToFile(const std::string &message) const
{
	std::ofstream	ofs;

	ofs.open(this->_filename, std::ofstream::out | std::ofstream::app);
	ofs << this->makeLogEntry(message);
	ofs << std::endl;
	ofs.close();
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	void (Logger::*actions[])(const std::string&) const =
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};
	char	*action_names[] =
	{
		(char*)"console",
		(char*)"file"
	};
	for (size_t i = 0; i < 2; i++)
	{
		if (dest == action_names[i])
		{
			(this->*actions[i])(message);
			return ;
		}
	}
	std::cout << "Aborting: invalid destination was provided." << std::endl;
}