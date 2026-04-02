/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:06:36 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:06:38 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElement(const T& content) {
    std::cout << content << " ";
}

void	doubleIt(int &x)
{
	x *= 2;
}

void	reverseString(std::string &str)
{
	size_t n = str.length();
    char	temp;
	
	for (size_t i = 0; i < n / 2; i++) {
        temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
    }
}

int main ()
{
	int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Print Original(int);" << std::endl;
	::iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "DoubleIt;" << std::endl;
	::iter(intArray, 5, doubleIt);
	::iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "CONST Array;" << std::endl;
	const int intConstArray[] = {1, 2, 3, 4, 5};

	std::cout << "Print Original(char);" << std::endl;
	::iter(intConstArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Because the function uses the `const` function, it won't compile if the comment is removed." << std::endl;
	//::iter(intConstArray, 5, doubleIt);
	//::iter(intConstArray, 5, printElement<int>);
    //std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Char Array;" << std::endl;
	std::string charArray[] = {"Bercem", "Ekinci", "Selduk"};
    std::cout << "Print Original;" << std::endl;
	::iter(charArray, 3, printElement<std::string>);
    std::cout << std::endl;

    std::cout << "reverseString;" << std::endl;
	::iter(charArray, 3, reverseString);
	::iter(charArray, 3, printElement<std::string>);
    std::cout << std::endl;
}