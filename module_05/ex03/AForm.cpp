#include "AForm.hpp"

AForm::AForm() : name("default"), sig(false), necessaryNote(150), necessaryNoteExec(150) {}

AForm::AForm(std::string name, const int necessaryNote, const int necessaryNoteExec) : name(name), sig(0), necessaryNote(necessaryNote), necessaryNoteExec(necessaryNoteExec) {
  verifyException(necessaryNote);
  verifyException(necessaryNoteExec);
  std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(AForm const& other) : name(other.name), sig(other.sig), necessaryNote(other.necessaryNote), necessaryNoteExec(other.necessaryNoteExec) {
  std::cout << "AForm copy constructor called" << std::endl;
  *this = other;
}

AForm& AForm::operator=(AForm const& other) {
  if (this == &other)
    return (*this);
  return (*this);
}

const std::string& AForm::getName() const {
  return (this->name);
}

bool AForm::getSigned() const {
  return (this->sig);
}

int AForm::getNecessaryNote() const {
  return (this->necessaryNote);
}

int AForm::getNecessaryNoteExec() const {
  return (this->necessaryNoteExec);
}

void AForm::setName(std::string name) {
  this->name = name;
}

void AForm::setSigned(bool sig) {
  this->sig = sig;
}

void AForm::setNecessaryNote(int necessaryNote) {
  *const_cast<int*>(&this->necessaryNote) = necessaryNote;
}

void AForm::setNecessaryNoteExec(int const necessaryNoteExec) {
  *const_cast<int*>(&this->necessaryNoteExec) = necessaryNoteExec;
}

const char* AForm::GradeTooHighException::what(void) const throw() {
  return ("Grade exceeds the maximum limit. Please select a lower grade.");
}

const char* AForm::GradeTooLowException::what(void) const throw() {
  return ("Grade falls below the minimum requirement. Please choose a higher grade.");
}

const char* AForm::NotSignedException::what(void) const throw() {
  return ("AForm cannot be executed because it's not signed");
}

void AForm::verifyException(int grade) {
  try {
    if (grade < 1)
      throw GradeTooHighException();
    else if (grade > 150)
      throw GradeTooLowException();
  } catch (std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
  if (bureaucrat.getGrade() > this->necessaryNote) {
    std::cout << bureaucrat.getName() << " couldn't sign " << this->name << ". Because: ";
    throw GradeTooLowException();
  }
  this->sig = true;
  std::cout << bureaucrat.getName() << " has signed " << this->name << std::endl;
}

std::ostream& operator<<(std::ostream& out, AForm const& instance) {
  out << instance.getName() << " ";
  out << instance.getSigned() << " ";
  out << instance.getNecessaryNote() << " ";
  out << instance.getNecessaryNoteExec() << " ";

  return (out);
}

AForm::~AForm() {
  std::cout << "AForm destructor called" << std::endl;
}