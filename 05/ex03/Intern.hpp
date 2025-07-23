#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


    class Intern
    {
        static const std::string formNames[3];
        static AForm* (Intern::* const creators[3])(const std::string &target);
        
        AForm* createShrubbery(const std::string &target) { return (new ShrubberyCreationForm(target)); }
        AForm* createRobotomy(const std::string &target) { return (new RobotomyRequestForm(target)); }
        AForm* createPresidential(const std::string &target) { return (new PresidentialPardonForm(target)); }

    public:
        
        Intern() {};
        ~Intern() {};
        AForm* makeForm(const std::string& formName, const std::string& target);

    };

#endif
