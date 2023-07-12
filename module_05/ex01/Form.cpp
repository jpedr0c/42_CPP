#include "Form.hpp"

Form::Form() : name("default"), sig(false), necessaryNote(150), necessaryNoteExec(150) {}

Form::Form(std::string name, const int necessaryNote, const int necessaryNoteExec) : name(name), sig(0), necessaryNote(necessaryNote), necessaryNoteExec(necessaryNoteExec) {
  verifyException(necessaryNote);
  verifyException(necessaryNoteExec);
  std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const& other) : name(other.name), sig(other.sig), necessaryNote(other.necessaryNote), necessaryNoteExec(other.necessaryNoteExec) {
  std::cout << "Form copy constructor called" << std::endl;
  *this = other;
}

Form& Form::operator=(Form const& other) {
  if (this == &other)
    return (*this);
  return (*this);
}

const std::string& Form::getName() const {
  return (this->name);
}

bool Form::getSigned() const {
  return (this->sig);
}

int Form::getNecessaryNote() const {
  return (this->necessaryNote);
}

int Form::getNecessaryNoteExec() const {
  return (this->necessaryNoteExec);
}

const char* Form::GradeTooHighException::what(void) const throw() {
  return ("Grade exceeds the maximum limit. Please select a lower grade.");
}

const char* Form::GradeTooLowException::what(void) const throw() {
  return ("Grade falls below the minimum requirement. Please choose a higher grade.");
}

void Form::verifyException(int grade) {
  try {
    if (grade < 1)
      throw GradeTooHighException();
    else if (grade > 150)
      throw GradeTooLowException();
  } catch (std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }
}

void Form::beSigned(Bureaucrat& bureaucrat) {
  if (bureaucrat.getGrade() > this->necessaryNote) {
    std::cout << bureaucrat.getName() << " couldn't sign " << this->name << ". Because: ";
    throw GradeTooLowException();
  }
  this->sig = true;
  std::cout << bureaucrat.getName() << " has signed " << this->name << std::endl;
}

std::ostream& operator<<(std::ostream& out, Form const& instance) {
  out << instance.getName() << " ";
  out << instance.getSigned() << " ";
  out << instance.getNecessaryNote() << " ";
  out << instance.getNecessaryNoteExec() << " ";

  return (out);
}

Form::~Form() {
  std::cout << "Form destructor called" << std::endl;
}