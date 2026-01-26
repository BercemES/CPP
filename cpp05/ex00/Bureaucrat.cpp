#include "Bureaucrat.hpp"

// Default Constructor
Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade) {
	std::cout << "Bureaucrat Constructor called with " << _name << std::endl;
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = other;
}

// Copy Assignment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_grade = other._grade;
	}
	return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {
	std::cout << _name << " Bureaucrat destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const {
	return (this->_name);
}

int			Bureaucrat::getGrade() const {
	return (this->_grade);
}

void		Bureaucrat::incrementGrade() {
	if (_grade <= 1)
		throw GradeTooLowException();
	_grade--;
}

void		Bureaucrat::decrementGrade() {
	if (_grade >= 150)
		throw GradeTooHighException();
	_grade++;
}

std::ostream &operator<<(std::ostream & os, Bureaucrat const &other) {
	os << "The bureaucrat named " << other.getName() << " has a grade of " << other.getGrade() << std::endl;
	return (os); 
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Max grade should be 150!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Min grade should be 1!");
}