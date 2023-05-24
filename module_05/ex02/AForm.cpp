/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:48:07 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/23 20:48:07 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::gradeTooLowException::what() const throw(){
  return ("Grade very low, sorry!");
}

AForm::AForm(){
  this->necessaryNote = 0;
  this->necessaryNoteExec = 0;
  std::cout << "AForm default constructor called\n";
}

AForm::AForm(AForm const& src){
  this->necessaryNote = src.necessaryNote;
  this->necessaryNoteExec = src.necessaryNoteExec;
  std::cout << "AForm copy constructor called\n";
  *this = src;
}

AForm &AForm::operator=(AForm const& src){
  this->name = src.getName();
  this->sig = src.getSigned();
  return (*this);
}

std::string AForm::getName() const{
  return (this->name);
}

bool AForm::getSigned() const{
  return (this->sig);
}

const int AForm::getNecessaryNote() const{
  return (this->necessaryNote);
}

const int AForm::getNecessaryNoteExec() const{
  return (this->necessaryNoteExec);
}

void AForm::beSigned(Bureaucrat& src){
  try{
    if (src.getGrade() <= this->necessaryNote)
      this->setSigned(1);
    else
      throw gradeTooLowException();
  }
  catch (const std::exception& e){
    std::cout << e.what() << std::endl;
  }
}

void AForm::setSigned(int sig){
  this->sig = (bool)sig;
}

std::ostream& operator<<(std::ostream& out, AForm const& src){
  out << src.getName() << " ";
  out << src.getSigned() << " ";
  out << src.getNecessaryNote() << " ";
  out << src.getNecessaryNoteExec() << " ";

  return (out);
}

void    AForm::setName(std::string name){
  this->name = name;
}

void    AForm::setSigned(bool sig){
  this->sig = sig;
}

void    AForm::setNecessaryNote(int necessaryNote){
  *const_cast<int*>(&this->necessaryNote) = necessaryNote;
}

void    AForm::setNecessaryNoteExec(int necessaryNoteExec){
  *const_cast<int*>(&this->necessaryNoteExec) = necessaryNoteExec;
}

AForm::~AForm(){
  std::cout << "AForm default destructor called\n";
}