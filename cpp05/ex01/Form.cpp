#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): 
	_name("default"), _signed(false), _gradeToSign(), _gradeToExe() {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExe): 
	_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) {
	std::cout << "Form Constructor called with " << _name << std::endl;
}

Form::Form(const Form &other): _name(other._name), _signed(other._signed),
		_gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe) {
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_signed = other._signed;
	}
	return *this;
}

Form:: ~Form(){
	std::cout << _name << " Form destructor called" << std::endl;
}

std::string	Form::getName() const {
	return (this->_name);
}
bool		Form::getIsSigned() const {
	return (this->_signed);
}
int			Form::getGradeToSign() const {
	return (this->_gradeToSign);
}
int			Form::getGradeToExe() const {
	return (this->_gradeToExe);
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_signed)
		throw std::runtime_error("form already signed");
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		GradeTooLowException();
}
const char *Form::GradeTooHighException::what() const throw() {
	return ("The bureaucrat has a very high grade to sign the form.");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("The bureaucrat has a very low grade to sign the form.");
}

std::ostream &operator<<(std::ostream & os, Form const &other) {
	os << "The Form named \"" << other.getName() << "\" is ";
	if(other.getIsSigned() == true)
		os << "signed";
	else
		os << "not signed";
	os << "; sign grade: " << other.getGradeToSign()
	<< ", execute grade: " << other.getGradeToExe()
	<< std::endl;
	return (os);
}
