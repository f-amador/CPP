#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): 
    AForm("robotomy request", 25, 5, target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
    _check = other._check;
	std::cout << "Copy Constructor Called\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		_check = other._check;
	return (*this);
}


void RobotomyRequestForm::executeForm(std::string target) const
{
    static bool seeded = false;
    if (!seeded)
    {
        std::srand(std::time(0));
        seeded = true;
    }
    std::cout << "*BZZZZZ BZZZZZZ*\n";
    if (std::rand() % 2)
        std::cout << "Success: " << target << " has been robotomized!\n";
    else
        std::cout << "Failure: " << target << " robotomy failed.\n";
}