#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class  Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExe;
public:
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExe);
	Form(const Form &other);
	Form& operator=(const Form& other);
	~Form();

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExe() const;
	
	void		beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream & os, Form const &other);

#endif