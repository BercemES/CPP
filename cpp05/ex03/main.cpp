#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Intern intern;

	AForm* form2 = intern.makeForm("robotomy request", "Bender");
	std::cout << std::endl;

	AForm* form1 = intern.makeForm("shrubbery creation", "Shub");
	std::cout << std::endl;

	AForm* form3 = intern.makeForm("presidential pardon", "Pres");
	std::cout << std::endl;
	
	AForm* form4 = intern.makeForm("unknown form", "Nobody");
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return 0;
}
