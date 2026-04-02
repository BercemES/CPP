/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:03:51 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:03:53 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	(void)other;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
	(void)other;
	return *this;
}
ScalarConverter::~ScalarConverter(){}


void ScalarConverter::printAll(double d) 
{
	std::cout << "char: ";
	if (std::isnan(d) || std::isinf(d) || d < 0 || d > 127)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(d)))
		std::cout << "Non displayable" << std::endl;
	else
        std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: ";
	if (std::isnan(d) || std::isinf(d) 
		|| (d > std::numeric_limits<int>::max() 
			|| d < std::numeric_limits<int>::min())) 
        std::cout << "impossible" << std::endl;
    else 
	{
        std::cout << static_cast<int>(d) << std::endl;
	}
	std::cout << "float: ";
	if (std::isnan(d) || std::isinf(d))
		std::cout << static_cast<float>(d) << "f" << std::endl;
	else
	{
		std::cout << d << (d - static_cast<int>(d) == 0 ? ".0f" : "f") << std::endl;
	}
	std::cout << "double: ";
	if (std::isnan(d) || std::isinf(d))
		std::cout << static_cast<float>(d) << std::endl;
	else
	{
		std::cout << d << (d - static_cast<int>(d) == 0 ? ".0" : "") << std::endl;
	}
}

void ScalarConverter::convert(std::string value) {
	if (isChar(value))
	{
		if (value.length() == 3)
       		printAll(static_cast<double>(value[1]));
		else
			printAll(static_cast<double>(value[0]));
		return;
	}
	else if (isInt(value))
	{
		printAll(std::atof(value.c_str()));
		return ;
	}
	else if (isFloat(value))
	{
		printAll(std::atof(value.c_str()));
		return ;
	}
	else if (isDouble(value))
	{
		printAll(std::atof(value.c_str()));
		return ;
	}
	else
		std::cout << "Error: Unknown type" << std::endl;	
}


bool ScalarConverter::isInt(const std::string& str) {
	size_t	i = 0;
	
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	for (;i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

bool ScalarConverter::isFloat(const std::string& str) {
	if (str == "nanf" || str == "+inff" 
		|| str == "-inff" || str == "inff")
		return true;
	if (str.empty() || str[str.length() - 1] != 'f'
		|| str == "+f" || str == "-f" || str == "f")
		return false;
	
	size_t	i = 0;
	bool	dot_flag = false;
	bool	digit_flag = false;
	
	if (str[i] == '+' || str[i] == '-')
		i++;
	for (; i < str.length() - 1; i++)
	{
		if (str[i] == '.')
		{
			if (dot_flag == 1)
				return false;			
			dot_flag = true;
		}
		else if (isdigit(str[i]))
			digit_flag = 1;
		else
			return false;	
	}
	if (!digit_flag)
		return false;
	return true;
}

bool ScalarConverter::isDouble(const std::string& str){
	if (str == "nan" || str == "+inf" 
		|| str == "-inf" || str == "inf")
		return true;
	if (str.empty() || str[str.length() - 1] == 'f'
		|| str == "+f" || str == "-f" || str == "f")
		return false;
	
	size_t	i = 0;
	bool	dot_flag = false;
	bool	digit_flag = false;
	
	if (str[i] == '+' || str[i] == '-')
		i++;
	for (; i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			if (dot_flag == 1)
				return false;			
			dot_flag = true;
		}
		else if (isdigit(str[i]))
			digit_flag = 1;
		else
			return false;	
	}
	if (!digit_flag)
		return false;
	return true;
}

bool ScalarConverter::isChar(const std::string& str) {
	if (str.length() == 1 && !isdigit(str[0]))
		return (isprint(str[0]));
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
        return (isprint(str[1]));
	return (0);	 
}