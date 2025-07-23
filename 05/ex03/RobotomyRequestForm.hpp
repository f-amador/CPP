
#ifndef ROBOTOMYREQUEST_HPP
#define ROBOTOMYREQUEST_HPP

#include "AForm.hpp"


    class RobotomyRequestForm : public AForm
    {
        public:
            RobotomyRequestForm(): AForm("robotomy request", 25, 5, "default"){};
            RobotomyRequestForm(const std::string &target);
            ~RobotomyRequestForm() {};
            RobotomyRequestForm(const RobotomyRequestForm & other);
            RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
            void executeForm(std::string target) const;
    };

#endif