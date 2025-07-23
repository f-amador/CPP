
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

    #include "AForm.hpp"
    
    class ShrubberyCreationForm: public AForm
    {
        public:
            ShrubberyCreationForm(): AForm("robotomy request", 25, 5, "default"){};
            ShrubberyCreationForm(const std::string &target);
            ~ShrubberyCreationForm() {};
            ShrubberyCreationForm(const ShrubberyCreationForm & other);
            ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
            void executeForm(std::string target) const;
    };
#endif