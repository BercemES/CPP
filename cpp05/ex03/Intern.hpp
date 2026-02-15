#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class  Intern
{
private:
	AForm* createShrubbery(std::string target);
	AForm* createRobotomy(std::string target);
	AForm* createPresidential(std::string target);
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();

	AForm *makeForm(const std::string form_name, const std::string form_target);
};

#endif