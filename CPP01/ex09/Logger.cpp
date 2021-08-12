/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:39 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/11 18:26:40 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string _filename) : _filename(_filename)
{

}

std::string	Logger::makeLogEntry(std::string message)
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

void	Logger::logToConsole(std::string message)
{
	std::cout << this->makeLogEntry(message);
	std::cout << std::endl;
}

void	Logger::logToFile(std::string message)
{
	std::ofstream	ofs;

	ofs.open(this->_filename, std::ofstream::out | std::ofstream::app);
	ofs << this->makeLogEntry(message);
	ofs << std::endl;
	ofs.close();
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	void (Logger::*actions[])(std::string) =
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