#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    public:
        PresidentialPardonForm(){};
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(){};
};
