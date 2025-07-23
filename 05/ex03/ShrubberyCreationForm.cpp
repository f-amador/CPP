#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): 
    AForm("shrubbery creation", 25, 5, target) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
    _check = other._check;
	std::cout << "Copy Constructor Called\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		_check = other._check;
	return (*this);
}


void ShrubberyCreationForm::executeForm(std::string target) const
{

    std::ofstream shrub((target + "_shrubbery").c_str());
    if (!shrub.is_open())
    {
        std::cerr << "Cant open " + target  + "_shrubbery\n";
        exit(1);
    }
    shrub << 
    "       *\n"
    "      / \\\n"
    "     /   \\\n"
    "    /     \\\n"
    "   /       \\\n"
    "  /         \\\n"
    " /___________\\\n"
    "      ||\n"
    "      ||\n";
    shrub.close();
}
