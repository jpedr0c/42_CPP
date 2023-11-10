#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <stdlib.h>

#include <cstdlib>
#include <ctime>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
 public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const& src);
  RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
  ~RobotomyRequestForm();

  void execute(Bureaucrat const& executor) const;

  class GradeTooLowException : public std::exception {
   public:
    char const* what() const throw();
  };

 private:
  std::string target;
};

#endif