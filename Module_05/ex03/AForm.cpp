#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
    checkGrade(this->_gradeToExecute);
	checkGrade(this->_gradeToSign);
}

AForm::AForm (AForm const &src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _signed(src._signed)
{

}
AForm::~AForm()
{

}

std::string AForm::getName(void) const
{
    return (this->_name);
}

bool AForm::getSigned(void) const
{
    return (this->_signed);
}

int AForm::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int AForm::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
    o << "Form name: " << rhs.getName() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;

}

void	AForm::checkGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if(grade > 150)
		throw AForm::GradeTooLowException("");
}

void AForm::displayInfo()
{
	std::cout << this->_name <<"\n" << this->_signed << "\n" << this->_gradeToExecute << "\n" << this->_gradeToSign << std::endl;
}

bool AForm::beSigned(Bureaucrat const &Bureaucrat)
{
	if (this->_signed == true)
		return false;
	if (Bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException("to sign the form");
	else
	{
		this->_signed = true;
		return true;
	}
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is to high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
}


AForm::GradeTooLowException::GradeTooLowException(std::string const &msg): _msg(msg)
{
	if (this->_msg.empty())
		this->_msg = "Grade is to low";
	else
		_msg = "Grade is to low: " + _msg;
}

bool AForm::checkIsExecutable(int bureaucrat_grade) const
{
	if (this->_signed == false)
		throw AForm::FormIsNotSigned();
	if (bureaucrat_grade > this->_gradeToExecute)
		throw AForm::GradeTooLowException("to execute the form");
	return true;
}


const char* AForm::FormIsNotSigned::what() const throw()
{
	return ("Form is not signed");
}

