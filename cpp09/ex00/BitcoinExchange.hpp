

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
# include <exception>
#include <string>
#include <cstdlib>
#include <algorithm>

class BitcoinExchange
{
private:
	std::map<std::string, double> data;
	bool	isValidDate(const std::string& date) const;
	bool	isValidValue(const double value) const;
	double	findExchangeRate(const std::string& date);
	std::string	trim(std::string s) const;
	bool	parseValidate(const std::string& line, char delimiter, std::string& date, double& rateValue);
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	void	loadDatabase(const std::string& filename);
	void	processInput(const std::string& filename);

};

#endif