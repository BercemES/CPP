/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 11:43:38 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 11:43:41 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class  AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExe;
	
	virtual void 		action() const = 0;
public:
	AForm();
	AForm(const std::string name, int gradeToSign, int gradeToExe);
	AForm(const AForm &other);
	AForm& operator=(const AForm& other);
	virtual ~AForm();

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExe() const;
	
	void		beSigned(const Bureaucrat& bureaucrat);

	void		execute(Bureaucrat const & executor) const;

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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream & os, AForm const &other);

#endif