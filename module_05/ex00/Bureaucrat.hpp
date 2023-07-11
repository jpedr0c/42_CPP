#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
 public:
  Bureaucrat();
  Bureaucrat(const std::string name, int grade);
  Bureaucrat(Bureaucrat const& src);
  Bureaucrat& operator=(Bureaucrat const& src);
  ~Bureaucrat();

  const std::string getName() const;
  int getGrade() const;

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