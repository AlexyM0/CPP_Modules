#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
     public:
            PresidentialPardonForm(std::string name);
            PresidentialPardonForm(PresidentialPardonForm const & src);
           ~PresidentialPardonForm();
            PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

            bool execute(Bureaucrat const & executor) const;
            std::string getTarget(void) const;

     private:
            std::string _target;
            PresidentialPardonForm();
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif