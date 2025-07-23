#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
    _check = other._check;
	std::cout << "Copy Constructor Called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		_check = other._check;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): 
    AForm("presidential pardon", 25, 5, target) {};

void PresidentialPardonForm::executeForm(std::string target) const
{  
    std::cout << target + " has been pardoned by Zaphod Beeblebrox\n";
}