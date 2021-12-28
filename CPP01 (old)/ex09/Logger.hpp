/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:26:45 by aisraely          #+#    #+#             */
/*   Updated: 2021/10/31 16:21:57 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <ctime>

class	Logger
{
	public:
		Logger(const std::string &_filename);
		void		log(std::string const &dest, std::string const &message);
	private:
		std::string	_filename;
		void		logToConsole(const std::string &message)	const;
		void		logToFile(const std::string &message)		const;
		std::string	makeLogEntry(const std::string &message)	const;
};

#endif