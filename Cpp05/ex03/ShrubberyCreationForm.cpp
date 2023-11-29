#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery creation form", "target", 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("Shrubbery creation form", target, 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: AForm(src)
{
	*this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->isSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToSign()
		|| executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();

	std::string cmd = TREE_CMD + this->getTarget() + "_shrubbery";
	std::system(cmd.c_str());
	std::cout << executor << " executed " << *this << std::endl;
}

std::ostream& operator<<(std::ostream&os, const ShrubberyCreationForm& f)
{
	std::string isSigned = f.isSigned() ? "true" : "false";
	return os << f.getName() << " " << isSigned << " " << f.getGradeToSign()
				<< " " << f.getGradeToExecute();
}
