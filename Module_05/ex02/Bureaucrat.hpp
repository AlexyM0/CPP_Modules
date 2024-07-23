#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &src);
        ~Bureaucrat();

        int getGrade(void)  const;
        void incrementGrade(void);
        void decrementGrade(void);
        std::string getName(void) const;
        void checkGrade(void);
        void executeForm(AForm const & form) const;
        void signForm(AForm &form) const;

        class GradeTooHighException : public std::exception
        {
            public:
				virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
             public:
				virtual const char* what() const throw();
        };
    private:
        Bureaucrat();
        Bureaucrat &     operator=(Bureaucrat const & rhs);
        const std::string _name;
        int     _grade;

};

std::ostream &operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif