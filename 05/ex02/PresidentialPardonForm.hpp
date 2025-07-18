#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    public:
        PresidentialPardonForm(): AForm("presi", 25, 5) {};
        void executeForm(std::string target);
        ~PresidentialPardonForm(){};
};
