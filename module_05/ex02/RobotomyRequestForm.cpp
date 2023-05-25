/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:32:25 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/25 14:32:25 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm::gradeTooLowException::what() const throw(){
  return ('Execute failed!');
}

// ? Dá para alterar a forma como é usada o AForm?
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm('Robotomy Request Form', 72, 45){
  this->target = target;
  std::cout << 'RobotomyRequestForm default constructor called\n';
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src){
  std::cout << 'RobotomyRequestForm copy constructor called\n';
  if (this != src)
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const& src){
  this->setName(src.getName());
  this->setSigned(src.getSigned());
  this->setNecessaryNote(src.getNecessaryNote());
  this->setNecessaryNoteExec(src.getNecessaryNoteExec());
  this->target = src.target;

  return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const{
  try{
    if (AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec())){
      srand(time(NULL));
      std::cout << 'Sshhhhzzz';
      int random = rand() % 2;

      if (random)
        std::cout << this->target << ' has been robotomized successfully\n';
      else
        std::cout << this->target << ' has not been robotomized\n'; 
    }
    else
      throw AForm::gradeTooLowException();
  }
  catch (std::exception &e){
    std::cerr << e.what() << std::endl;
  }
}

RobotomyRequestForm::~RobotomyRequestForm(){
  std::cout << 'RobotomyRequestForm destructor called\n';
}