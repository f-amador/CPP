#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
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
