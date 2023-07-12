#ifndef FORM_HPP
#define FORM_HPP

#include <ostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
 public:
  Form();
  Form(const std::string name, int necessaryNote, int necessaryNoteExec);
  Form(Form const& other);
  Form& operator=(Form const& other);
  ~Form();

  const std::string& getName() const;
  bool getSigned() const;
  int getNecessaryNote() const;
  int getNecessaryNoteExec() const;
  void verifyException(int grade);
  void beSigned(Bureaucrat& bureaucrat);

  class GradeTooHighException : public std::exception {
   public:
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char* what() const throw();
  };

 private:
  const std::string name;
  bool sig;
  const int necessaryNote;
  const int necessaryNoteExec;
};

std::ostream& operator<<(std::ostream& out, Form const& instance);

#endif