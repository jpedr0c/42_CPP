#ifndef AFORM_HPP
#define AFORM_HPP

#include <ostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm {
 public:
  AForm();
  AForm(const std::string name, int necessaryNote, int necessaryNoteExec);
  AForm(AForm const& other);
  AForm& operator=(AForm const& other);
  ~AForm();

  const std::string& getName() const;
  bool getSigned() const;
  int getNecessaryNote() const;
  int getNecessaryNoteExec() const;
  void setName(std::string name);
  void setSigned(bool sig);
  void setNecessaryNote(const int necessaryNote);
  void setNecessaryNoteExec(const int necessaryNoteExec);
  void verifyException(int grade);
  void beSigned(Bureaucrat& bureaucrat);

  virtual void execute(Bureaucrat const& executor) const = 0;

  class GradeTooHighException : public std::exception {
   public:
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char* what() const throw();
  };

  class NotSignedException : public std::exception {
   public:
    const char* what() const throw();
  };

 private:
  std::string name;
  bool sig;
  const int necessaryNote;
  const int necessaryNoteExec;
};

std::ostream& operator<<(std::ostream& out, AForm const& instance);

#endif