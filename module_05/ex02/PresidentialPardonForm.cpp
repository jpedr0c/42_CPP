#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5) {
  this->target = target;
  std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : AForm(src) {
  std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
  if (this != &src) {
    *this = src;
  }
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src) {
  this->setName(src.getName());
  this->setSigned(src.getSigned());
  this->setNecessaryNote(src.getNecessaryNote());
  this->setNecessaryNoteExec(src.getNecessaryNoteExec());
  this->target = src.target;

  return (*this);
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw() {
  return ("Execution failed: Bureaucrat's grade is too low");
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
  try {
    if (AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec()))
      std::cout << this->target << " has been pardoned by Albus Dumbledore" << std::endl;
    else
      throw GradeTooLowException();
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}