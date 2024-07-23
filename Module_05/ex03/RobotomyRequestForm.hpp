#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#pragma once

#include <iostream>
#include "AForm.hpp"
#include <time.h>

class RobotomyRequestForm : public AForm
{
     public:

           RobotomyRequestForm(std::string name);
           ~RobotomyRequestForm();
            RobotomyRequestForm(RobotomyRequestForm const & src);
            RobotomyRequestForm &     operator=(RobotomyRequestForm const & rhs);
            std::string getTarget(void) const;
            bool 	execute(Bureaucrat const & executor) const;

     private:
            RobotomyRequestForm();
            std::string _target;
};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs);

#endif