/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:21:14 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 20:21:14 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::gradeTooLowException::what() const throw(){
    return ("Grade very low, sorry!");
}

Form::Form(std::string name, const int necessaryNote, const int necessaryNoteExec){
    this->name = name;
    this->sig = 0;
    this->necessaryNote = necessaryNote;
    this->necessaryNoteExec = necessaryNoteExec;
    std::cout << "Form default constructor called\n";
}

Form::Form(Form const& src){
    this->necessaryNote = src.necessaryNote;
    this->necessaryNoteExec = src.necessaryNoteExec;
    std::cout << "Form copy constructor called\n";
    *this = src;
}

Form &Form::operator=(Form const& src){
    this->name = src.getName();
    this->sig = src.getSigned();
    return (*this);
}

std::string Form::getName() const{
    return (this->name);
}

bool Form::getSigned() const{
    return (this->sig);
}

const int Form::getNecessaryNote() const{
    return (this->necessaryNote);
}

const int Form::getNecessaryNoteExec() const{
    return (this->necessaryNoteExec);
}

void Form::beSigned(Bureaucrat& src){
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

void Form::setSigned(int sig){
    this->sig = (bool)sig;
}

std::ostream& operator<<(std::ostream& out, Form const& src){
    out << src.getName() << " ";
    out << src.getSigned() << " ";
    out << src.getNecessaryNote() << " ";
    out << src.getNecessaryNoteExec() << " ";

    return (out);
}

Form::~Form(){
    std::cout << "Form default destructor called\n";
}