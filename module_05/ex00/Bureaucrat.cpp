#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
  std::cout << "Bureaucrat default constructor called\n";
  this->grade = grade;
  verifyException(this->grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) {
  std::cout << "Bureaucrat copy constructor called\n";
  *this = src;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src) {
  (std::string) this->name = src.getName();
  this->grade = src.getGrade();
  return (*this);
}

const std::string Bureaucrat::getName() const {
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

std::ostream& operator<<(std::ostream& ofs, Bureaucrat const& src) {
  ofs << src.getName() << ", Bureaucrat grade " << src.getGrade();
  return (ofs);
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat default destructor called\n";
}