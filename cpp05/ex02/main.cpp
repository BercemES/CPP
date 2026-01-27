#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	std::cout << BLUE "TEST 1: INVALID" RESET << std::endl;
	try { Bureaucrat  invalid1("invalid1", 170); }
	catch (std::exception& e)
		{std::cout << RED "Exception caught: " << e.what() << RESET << std::endl;}
	try { Bureaucrat  invalid2("invalid2", 0); }
	catch (std::exception& e)
		{std::cout << RED "Exception caught: " << e.what() << RESET << std::endl;}
	
	std::cout << std::endl;
	std::cout << YELLOW << std::string(50, '*')<< RESET <<std::endl;
	std::cout << std::endl;
	std::cout << BLUE "TEST 2: FORM1" RESET << std::endl;
	try
    {
        Bureaucrat  boss("Boss", 1);
        Bureaucrat  specialist("Specialist", 50);
        Bureaucrat  officer("Officer", 100);

        Form    form1("Form1", 50, 5);
		
        std::cout << boss;
        std::cout << specialist;
        std::cout << officer;
		std::cout << std::endl;
        std::cout << form1;
		std::cout << std::endl;

		officer.signForm(form1);
		std::cout << form1;
		std::cout << std::endl;

		specialist.signForm(form1);
		std::cout << form1;
		std::cout << std::endl;

		boss.signForm(form1);
		std::cout << form1;
		std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << RED "Exception caught: " << e.what() << RESET << std::endl;
    }

	std::cout << std::endl;
	std::cout << YELLOW << std::string(50, '*')<< RESET <<std::endl;
	std::cout << std::endl;
	std::cout << BLUE "TEST 3: FORM2" RESET << std::endl;
	try
    {
        Bureaucrat  boss("Boss", 1);
        Bureaucrat  specialist("Specialist", 50);
        Bureaucrat  officer("Officer", 100);

        Form    form2("Form2", 120, 45);
		
		std::cout << std::endl;
        std::cout << boss;
        std::cout << specialist;
        std::cout << officer;
		std::cout << std::endl;
        std::cout << form2;
		std::cout << std::endl;

		officer.signForm(form2);
		std::cout << form2;
		std::cout << std::endl;

		specialist.signForm(form2);
		std::cout << form2;
		std::cout << std::endl;

		boss.signForm(form2);
		std::cout << form2;
		std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << RED "Exception caught: " << e.what() << RESET << std::endl;
    }

	return 0;
}
