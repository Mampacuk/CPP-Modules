#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

class	Logger
{
	public:
		Logger(std::string _filename);
		void		log(std::string const &dest, std::string const &message);
	private:
		std::string	_filename;
		void		logToConsole(std::string message);
		void		logToFile(std::string message);
		std::string	makeLogEntry(std::string message);
};

#endif