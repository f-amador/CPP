#include "Intern.hpp"


const std::string Intern::formNames[3] = {
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
};

AForm* (Intern::* const Intern::creators[3])(const std::string &target) = {
    &Intern::createShrubbery,
    &Intern::createRobotomy,
    &Intern::createPresidential
};

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
        for (int i = 0; i < 3; ++i) {
            if (formName == formNames[i]) {
                AForm* form = (this->*creators[i])(target);
                std::cout << "Inter creates" << formName << std::endl;
                return form;
            }
        }
        std::cerr << "ERROR: No available form of that kind!\n";
        return 0;
 }