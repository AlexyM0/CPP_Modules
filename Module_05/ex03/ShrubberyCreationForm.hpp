#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

class ShrubberyCreationForm : public AForm
{
     public:

            ShrubberyCreationForm(std::string name);
            ShrubberyCreationForm(ShrubberyCreationForm const & src);
           ~ShrubberyCreationForm();
            ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
            
            std::string getTarget(void) const;
            bool execute(Bureaucrat const & executor) const;

     private:
            std::string _target;
            ShrubberyCreationForm();

};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif