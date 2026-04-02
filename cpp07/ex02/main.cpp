/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:06:55 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 18:57:21 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    std::cout << "THE OTHER TESTS" << std::endl;
    Array<int> a(3);
    a[0] = 10; a[1] = 20; a[2] = 30;
    std::cout << "Arrat a: " << a[0] << " " << a[1] << " " << a[2] << std::endl;

    std::cout << "Copy;" << std::endl;
    Array<int> b = a;
    b[0] = 42;

    std::cout << "Array b (Copy): " << b[0] << " " << b[1] << " " << b[2] << std::endl;
    std::cout << "Array a (Control): " << a[0] << " " << a[1] << " " << a[2] <<std::endl;

    
    std::cout << "Array size: " << a.size() << std::endl;

    try {
		std::cout << "Error: index ";
        std::cout << a[5] << std::endl;
    } catch (const std::exception& e) {
		std::cout << "catch: " << e.what() << std::endl;
    }
	
	std::cout << "Const;" << std::endl;
	const Array<int> constArr(3);
	try {
	    std::cout << constArr[0] << std::endl;
	} catch (const std::exception& e) {
	    std::cout << "const catch: " << e.what() << std::endl;
	}

	try {
	    std::cout << constArr[6] << std::endl;
	} catch (const std::exception& e) {
	    std::cout << "const catch: " << e.what() << std::endl;
	}
	
    return 0;
}