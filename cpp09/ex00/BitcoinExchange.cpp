/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:10:29 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/15 15:21:19 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other): data(other.data) {}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		this->data = other.data;
	return (*this);
}
BitcoinExchange::~BitcoinExchange() {}

std::string	BitcoinExchange::trim(std::string s) const
{
	size_t start = 0;
	size_t end = s.size();
	
	while (start < end && std::isspace(s[start]))
		start++;

	while (end > start && std::isspace(s[end - 1]))
		end--;

	return s.substr(start, end - start);
}

bool	BitcoinExchange::isValidDate(const std::string& date) const
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4|| i == 7)
			continue;
		if (!std::isdigit(date[i]))
			return (false);
	}
	
	int year = std::atoi(date.substr(0,4).c_str());
	int month = std::atoi(date.substr(5,2).c_str());
	int day = std::atoi(date.substr(8).c_str());
	if (month > 12 || month < 1 || day > 31 || day < 1 
		|| year < 2009 || year > 2026)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
		return (false);
	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	if (month == 2)
	{
		if ((isLeap && day > 29) || (!isLeap && day > 28))
			return (false);
	}
	return (true);
}

bool	BitcoinExchange::isValidValue(const double value) const
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number.\n";
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number.\n";
		return (false) ;
	}
	return (true);
}

bool	BitcoinExchange::parseValidate(const std::string& line, char delimiter, std::string& date, double& value)
{
	size_t		pos;
	std::string	strVal;
	char *end;

	if (line.empty())
		return (false);
	pos = line.find(delimiter);
	if (pos == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return (false);
	}
	date = trim(line.substr(0, pos));
	if (!isValidDate(date))
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return (false);
	}
	strVal = trim(line.substr(pos + 1));
	if (strVal.empty()) 
	{
        std::cerr << "Error: bad input => " << line << std::endl;
        return false;
    }
    value = std::strtod(strVal.c_str(), &end);
	if (*end != '\0') 
	{
        std::cerr << "Error: bad input => " << line << std::endl;
        return false;
    }
	return (true);
}

double	BitcoinExchange::findExchangeRate(const std::string& date)
{
	std::map<std::string, double>::iterator it = data.upper_bound(date);
	
	if (it == data.begin())
		return -1; 
	--it;
	return (it->second);
}

void	BitcoinExchange::loadDatabase(const std::string& filename)
{
	std::ifstream dB(filename.c_str());
	std::string	line;
	std::string	date;
	double		ex_rate;
	
	if (!dB.is_open())
		throw std::runtime_error( "Error: File cannot open!");
	if (dB.peek() == std::ifstream::traits_type::eof()) {
		throw std::runtime_error("Error: Empty database");
	}
	if (std::getline(dB, line)) {
		line = trim(line);
        if (line != "date,exchange_rate")
            throw std::runtime_error("Error: Database header mismatch.");
    }
	while (getline(dB, line))
	{
		if (!parseValidate(line, ',', date, ex_rate))
			continue ;
		this->data[date] = ex_rate;
	}
	dB.close();
}

void	BitcoinExchange::processInput(const std::string& filename)
{
	std::ifstream input(filename.c_str());
	std::string	line;
	std::string	date;
	double		value;
	double		rate;
	
	if (!input.is_open())
		throw std::runtime_error( "Error: File cannot open!");

	if (input.peek() == std::ifstream::traits_type::eof()) {
		throw std::runtime_error("Error: Empty database");
	}
	if (std::getline(input, line)) {
		line = trim(line);
		if (line != "date | value")
			throw std::runtime_error("Error: Input header mismatch.");
	}
	while (std::getline(input, line))
	{
		if (!parseValidate(line, '|', date, value))
			continue ;
		if (!isValidValue(value))
			continue;
		rate = findExchangeRate(date);
		if (rate < 0) {
			std::cerr << "Error: No exchange rate for this date => " << date << std::endl;
			continue;
		}
		std::cout << date << " => " << value << " = " << (rate * value) << std::endl;
	}
	input.close();
}
