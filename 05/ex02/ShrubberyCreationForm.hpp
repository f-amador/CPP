#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    public:
        ShrubberyCreationForm(): AForm("shrub", 145, 137) {};
        ~ShrubberyCreationForm() {};
        void executeForm(std::string target);
};
