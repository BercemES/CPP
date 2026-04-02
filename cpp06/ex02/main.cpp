/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:05:03 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:05:05 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base * generate(void)
{
	int	r = std::rand() % 3;
	if (r == 0)
		return (new A);
	else if (r == 1)
		return (new B);
	else
		return (new C);
	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
        return;
	}
	catch(const std::exception& e) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
    	std::cout << "B" << std::endl;
		(void)b;
		return;
	}
	catch(const std::exception& e) {}
	try
	{
		C& c = dynamic_cast<C&>(p);
    	std::cout << "C" << std::endl;
		(void)c;
		return;
	}
	catch(const std::exception& e){}
}

int main()
{
	srand(time(NULL));

	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "Test " << i + 1 << ";" << std::endl;
		Base* obj = generate();
		std::cout << "object pointed to by obj;" << std::endl;
		identify(obj);
		std::cout << "object referenced to by obj;" << std::endl;
		identify(*obj);
		delete obj;
	}
}