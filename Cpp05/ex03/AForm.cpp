#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _target("target"), _gradeToSign(1), _gradeToExecute(1)
{
	_signed = false;
}

AForm::AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute)
	: _name(name), _target(target), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	_signed = false;
}

AForm::AForm(AForm const &src)
	: _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
}

AForm& AForm::operator=(AForm const &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return (*this);
}

AForm::~AForm() { }

std::string AForm::getName() const
{
	return _name;
}

std::string AForm::getTarget() const
{
	return _target;
}

bool AForm::isSigned() const
{
	return _signed;
}

void AForm::setSigned()
{
	_signed = true;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bu)
{
	try
	{
		if (this->getGradeToSign() < bu.getGrade())
			throw Bureaucrat::GradeTooLowException();
		this->setSigned();
	}
	catch(const std::exception& e)
	{
		std::cerr << bu.getName() << " couldn’t sign '" << *this << "' because " << e.what() << '\n';
	}
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (_signed == false)
		throw FormNotSignedException();
	if (executor.getGrade() > _gradeToSign || executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();

	std::cout << executor << " executed " << *this << std::endl;
}


const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed, can't execute";
}

std::ostream& operator<<(std::ostream&os, const AForm& f)
{
	std::string isSigned = f.isSigned() ? "true" : "false";
	return os << f.getName() << " " << isSigned << " " << f.getGradeToSign()
				<< " " << f.getGradeToExecute();
}
