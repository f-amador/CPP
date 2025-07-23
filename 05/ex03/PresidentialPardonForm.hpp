// PresidentialPardonForm.hpp
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(): AForm("presidential pardon", 25, 5, "default") {};
    PresidentialPardonForm(const PresidentialPardonForm & other);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
    
    ~PresidentialPardonForm() {};
    void executeForm(std::string target) const;
};

#endif