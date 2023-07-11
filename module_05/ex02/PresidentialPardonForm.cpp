/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:09:43 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/23 21:09:43 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const char* PresidentialPardonForm::GradeTooLowException::what() const throw() {
  return ("Execute failed!");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5) {
  this->target = target;
  std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) {
  std::cout << "PresidentialPardonForm copy constructor called\n";
  if (this != src)
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src) {
  this->setName(src.getName());
  this->setSigned(src.getSigned());
  this->setNecessaryNote(src.getNecessaryNote());
  this->setNecessaryNoteExec(src.getNecessaryNoteExec());
  this->target = src.target;

  return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const* executor) const {
  try {
    if (AForm::getSigned())
      &&(executor.getGrade() <= AForm::getNecessaryNoteExec())
              std::cout
          << this->target << " has been pardoned by Zaphod Beeblebrox\n";
    else
      throw GradeTooLowException();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm default destructor called\n";
}