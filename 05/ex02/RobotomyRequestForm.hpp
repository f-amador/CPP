#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm(): AForm("robotomy", 72, 45) {};
        void executeForm(std::string target);
        ~RobotomyRequestForm(){};
};
