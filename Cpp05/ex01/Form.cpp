#include "Form.hpp"

Form::Form() : _name("Form"), _gradeToSign(1), _gradeToExecute(1)
{
	_signed = false;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	_signed = false;
}

Form::Form(Form const &src)
	: _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	*this = src;
}

Form& Form::operator=(Form const &src)
{
	if (this != &src)
	{
		_signed = src.isSigned();
	}
	return (*this);
}

Form::~Form() { }

std::string Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

void Form::setSigned()
{
	_signed = true;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat &bu)
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

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream&os, const Form& f)
{
	std::string isSigned = f.isSigned() ? "true" : "false";
	return os << f.getName() << " " << isSigned << " " << f.getGradeToSign()
				<< " " << f.getGradeToExecute();
}
