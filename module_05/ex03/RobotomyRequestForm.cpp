#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm::GradeTooLowException::what() const throw() {
  return ("Execute failed!");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45) {
  this->target = target;
  std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : AForm(src) {
  std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
  if (this != &src) {
    *this = src;
  }
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src) {
  this->setName(src.getName());
  this->setSigned(src.getSigned());
  this->setNecessaryNote(src.getNecessaryNote());
  this->setNecessaryNoteExec(src.getNecessaryNoteExec());
  this->target = src.target;

  return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  try {
    if (AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec())) {
      srand(time(NULL));
      std::cout << "Sshhhhzzz shhzzz...";
      int randomNumber = rand() % 2;

      if (randomNumber == 1)
        std::cout << this->target << " has been robotmized" << std::endl;
      else
        std::cout << "robotomy failed" << std::endl;
    } else
      throw GradeTooLowException();
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}