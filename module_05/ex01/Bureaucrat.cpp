/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:46:27 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 19:46:27 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::verifyException(int grade){
    try{
        if (grade < 1)
            throw gradeTooHighException();
        else if (grade > 150)
            throw gradeTooLowException();
    }
    catch (std::exception& e){
        std::cout << "Exception caught: " << e.what() << std::endl;
        if (this->grade > 150)
            this->grade = 150;
        else
            this->grade = 1;
    }
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name){
    std::cout << "Bureaucrat default constructor called\n";
    this->grade = grade;
    verifyException(this->grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const& src){
    std::cout << "Bureaucrat copy constructor called\n";
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const& src){
    (std::string)this->name = src.getName();
    this->grade = src.getGrade();
    return (*this);
}

const char* Bureaucrat::gradeTooHighException::what() const throw(){
    return ("Grade value max is 1, grade value changed 1.");
}

const char* Bureaucrat::gradeTooLowException::what() const throw(){
    return ("Grade value max is 150, grade value changed 150.");
}

const std::string Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::upgrade(){
    this->grade = this->grade + 1;
    verifyException(this->grade);
}

void Bureaucrat::downgrade(){
    this->grade = this->grade - 1;
    verifyException(this->grade);
}

void Bureaucrat::signForm(Form& src) const{
    if (src.getSigned() == 1)
        std::cout << this->getName() << " signed " << src << std::endl;
    else
        std::cout << this->getName() << " couldn't sign " << src << "because low grade\n"; 
}

std::ostream &operator<<(std::ostream& ofs, Bureaucrat const& src){
    ofs << src.getName() << ", Bureaucrat grade " << src.getGrade();
    return (ofs);
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat default destructor called\n";
}