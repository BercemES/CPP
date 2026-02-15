#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): 
	_name("default"), _signed(false), _gradeToSign(150), _gradeToExe(150) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExe): 
	_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) 
{
	if (_gradeToSign < 1 || _gradeToExe < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExe > 150)
		throw GradeTooLowException();

	std::cout << "AForm Constructor called with " << _name << std::endl;
}

AForm::AForm(const AForm &other):
		_name(other._name), _signed(other._signed),
		_gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe) {
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& other) {
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &other)
		this->_signed = other._signed;
	return *this;
}

AForm:: ~AForm(){
	std::cout << _name << " AForm destructor called" << std::endl;
}

std::string	AForm::getName() const {
	return (this->_name);
}
bool		AForm::getIsSigned() const {
	return (this->_signed);
}
int			AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}
int			AForm::getGradeToExe() const {
	return (this->_gradeToExe);
}

void		AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_signed)
		throw std::runtime_error("AForm already signed");
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		GradeTooLowException();
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _gradeToExe)
		throw GradeTooLowException();

	action();
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("The bureaucrat has a very high grade to sign the AForm.");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("The bureaucrat has a very low grade to sign the AForm.");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed.";
}

std::ostream &operator<<(std::ostream & os, AForm const &other) {
	os << "The AForm named \"" << other.getName() << "\" is ";
	if(other.getIsSigned() == true)
		os << "signed";
	else
		os << "not signed";
	os << "; sign grade: " << other.getGradeToSign()
	<< ", execute grade: " << other.getGradeToExe()
	<< std::endl;
	return (os);
}
