#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(0) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
  verifyException(this->grade);
  std::cout << "Bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : name(other.name) {
  *this = other;
  std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other) {
  this->grade = other.getGrade();
  return (*this);
}

const std::string& Bureaucrat::getName() const {
  return this->name;
}

int Bureaucrat::getGrade() const {
  return this->grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade value max is 1, grade value changed 1.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade value max is 150, grade value changed 150.");
}

void Bureaucrat::verifyException(int grade) {
  try {
    if (grade < 1)
      throw GradeTooHighException();
    else if (grade > 150)
      throw GradeTooLowException();
  } catch (std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
    if (this->grade > 150)
      this->grade = 150;
    else
      this->grade = 1;
  }
}

void Bureaucrat::upgrade() {
  this->grade = this->grade - 1;
  verifyException(this->grade);
}

void Bureaucrat::downgrade() {
  this->grade = this->grade + 1;
  verifyException(this->grade);
}

void Bureaucrat::signForm(Form& form) {
  form.beSigned(*this);
}

std::ostream& operator<<(std::ostream& ofs, Bureaucrat const& instance) {
  ofs << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
  return (ofs);
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called\n";
}