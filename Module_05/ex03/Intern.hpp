#ifndef INTERN_H
#define INTERN_H

#pragma once

#include <string>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

#include <iostream>

class Intern
{
     public:
            Intern();
            Intern(Intern const & src);
            ~Intern();

            Intern &     operator=(Intern const & rhs);
		AForm	*makeForm(std::string form_name, std::string target_name);

     private:

};

#endif