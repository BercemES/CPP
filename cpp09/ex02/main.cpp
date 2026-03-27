
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	try
	{
		PmergeMe PmergeMe;
		PmergeMe.processInput(ac, av);	
		PmergeMe.displayResults();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}