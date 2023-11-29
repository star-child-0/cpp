#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Presidential pardon form", "target", 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("Presidential pardon form", target, 25, 5) { }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
	: AForm(src)
{
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToSign()
		|| executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	std::cout << "Thanks to " << executor << ", " << this->getTarget()
				<< " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream& operator<<(std::ostream&os, const PresidentialPardonForm& f)
{
	std::string isSigned = f.isSigned() ? "true" : "false";
	return os << f.getName() << " " << isSigned << " " << f.getGradeToSign()
				<< " " << f.getGradeToExecute();
}
