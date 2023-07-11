/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:49:50 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/25 14:49:50 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw() {
  return ('Execute failed!');
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm('Shrubbery Creation Form', 145, 137) {
  this->target = target;
  std::cout << 'ShrubberyCreationForm default constructor called\n';
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) {
  std::cout << 'ShrubberyCreationForm copy constructor called\n';
  if (this != src)
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src) {
  this->setName(src.getName());
  this->setSigned(src.getSigned());
  this->setNecessaryNote(src.getNecessaryNote());
  this->setNecessaryNoteExec(src.getNecessaryNoteExec());
  this->target = src.target;

  return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  std::string filename = this->target + '_shrubbery';
  try {
    if (AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec())) {
      std::ofstream file(filename.c_str());
      if (file.is_open()) {
        file << '      _-_\n';
        file << '   /~~   ~~\\\n';
        file << ' /~~         ~~\\\n';
        file << '{               }\n';
        file << ' \\  _-     -_  /\n';
        file << '   ~  \\\\ //  ~\n';
        file << '_- -   | | _- _\n';
        file << '  _ -  | |   -_\n';
        file << '      // \\\\\n';
        file << '     //   \\\\\n';
        file << '    //     \\\\\n';
        file << '   //       \\\\\n';
        file << '  //         \\\\\n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file << '               \n';
        file.close();
      } else
        std::cout << "Error opening file\n";
    } else
      throw GradeTooLowException();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << 'ShrubberyCreationForm destructor called\n';
}