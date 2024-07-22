#ifndef FORM_H
#define FORM_H

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
     public:
            Form(std::string name, int gradeToSign, int gradeToExecute);
            Form(Form const & src);
           ~Form();

            std::string getName(void) const;
            bool getSigned(void) const;
            int getGradeToSign(void) const;
            int getGradeToExecute(void) const;
            void	checkGrade(int grade);
            void displayInfo();
            bool 	beSigned(Bureaucrat const &Bureaucrat);

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

            Form();
            Form &     operator=(Form const & rhs);

            const std::string _name;
            const int _gradeToSign;
            const int _gradeToExecute;
            bool _signed;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif