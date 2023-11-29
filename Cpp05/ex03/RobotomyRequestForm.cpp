#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("Robotomy request form", "target", 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("Robotomy request form", target, 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: AForm(src)
{
	*this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() { }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToSign()
		|| executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	std::time_t r = std::time(NULL);
	std::string s = r % 2 == 0 ? "" : "[[ NOT ]]";

	std::cout << "Bzzzzzzzzzzzz........ " << executor << " " << s
				<< " successfully robotomized " << this->getTarget() << std::endl;
}

std::ostream& operator<<(std::ostream&os, const RobotomyRequestForm& f)
{
	std::string isSigned = f.isSigned() ? "true" : "false";
	return os << f.getName() << " " << isSigned << " " << f.getGradeToSign()
				<< " " << f.getGradeToExecute();
}
