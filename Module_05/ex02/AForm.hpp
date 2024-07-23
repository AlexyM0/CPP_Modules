#ifndef FORM_H
#define FORM_H

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>
#include "AForm.hpp"


class AForm
{
     public:
            AForm(std::string name, int gradeToSign, int gradeToExecute);
            AForm(AForm const & src);
           ~AForm();

            std::string getName(void) const;
            bool getSigned(void) const;
            int getGradeToSign(void) const;
            int getGradeToExecute(void) const;
            void	checkGrade(int grade);
            void displayInfo();
            bool 	beSigned(Bureaucrat const &Bureaucrat);

            virtual bool 	execute(Bureaucrat const & executor) const = 0;
            bool	checkIsExecutable(int bureaucrat_grade) const;

            class FormIsNotSigned: public std::exception
            {
               public:
                  virtual const char* what() const throw();
            };

         
            class GradeTooHighException: public std::exception
            {
               public:
                  virtual const char* what() const throw();
            };

            class GradeTooLowException: public std::exception
            {
               public:
                  GradeTooLowException(std::string const &msg);
                  virtual ~GradeTooLowException() throw() {};
                  virtual const char* what() const throw();
               private:
                  std::string _msg;
            };


     private:

            AForm();
            AForm &     operator=(AForm const & rhs);

            const std::string _name;
            const int _gradeToSign;
            const int _gradeToExecute;
            bool _signed;

};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif