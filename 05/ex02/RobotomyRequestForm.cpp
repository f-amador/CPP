#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    static bool seeded = false;
    if (!seeded)
    {
        std::srand(std::time(0));
        seeded = true;
    }
    if (std::rand() % 2)
        std::cout << "Success: " << target << " has been robotomized!\n";
    else
        std::cout << "Failure: " << target << " robotomy failed.\n";
}