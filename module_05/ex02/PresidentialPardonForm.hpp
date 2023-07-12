#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <stdlib.h>

#include <cstdlib>
#include <ctime>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
 public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(PresidentialPardonForm const& src);
  PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
  ~PresidentialPardonForm();

  void execute(Bureaucrat const& executor) const;

  class GradeTooLowException : public std::exception {
   public:
    char const* what() const throw();
  };

 private:
  std::string target;
};

#endif