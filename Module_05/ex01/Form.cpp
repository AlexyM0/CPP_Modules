#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
    checkGrade(this->_gradeToExecute);
	checkGrade(this->_gradeToSign);
}

Form::Form (Form const &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _signed(src._signed)
{

}
Form::~Form()
{

}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getSigned(void) const
{
    return (this->_signed);
}

int Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
    o << "Form name: " << rhs.getName() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;

}

void	Form::checkGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if(grade > 150)
		throw Form::GradeTooLowException("");
}

void Form::displayInfo()
{
	std::cout << this->_name <<"\n" << this->_signed << "\n" << this->_gradeToExecute << "\n" << this->_gradeToSign << std::endl;
}

bool Form::beSigned(Bureaucrat const &Bureaucrat)
{
	if (this->_signed == true)
		return false;
	if (Bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException("to sign the form");
	else
	{
		this->_signed = true;
		return true;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is to high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
}


Form::GradeTooLowException::GradeTooLowException(std::string const &msg): _msg(msg)
{
	if (this->_msg.empty())
		this->_msg = "Grade is to low";
	else
		_msg = "Grade is to low: " + _msg;
}
