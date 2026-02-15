#ifndef PRESIDENTIALFORM_HPP
# define PRESIDENTIALFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string	_target;
	void		action() const;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	~PresidentialPardonForm();
};

#endif