#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class Form;

class Bureaucrat {
 public:
  Bureaucrat(const std::string name, int grade);
  Bureaucrat(Bureaucrat const& src);
  Bureaucrat& operator=(Bureaucrat const& src);
  ~Bureaucrat();

  const std::string getName() const;
  int getGrade() const;
  void signForm(Form& src) const;

  class GradeTooHighException : public std::exception {
   public:
    const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char* what() const throw();
  };

  void verifyException(int grade);
  void upgrade();
  void downgrade();

 private:
  const std::string name;
  int grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& src);

#endif