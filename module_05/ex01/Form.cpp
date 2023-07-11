#include "Form.hpp"

Form::Form(std::string name, const int necessaryNote, const int necessaryNoteExec) : name(name), sig(0), necessaryNote(necessaryNote), necessaryNoteExec(necessaryNoteExec) {
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const& src) : necessaryNote(src.necessaryNote), necessaryNoteExec(src.necessaryNoteExec) {
    std::cout << "Form copy constructor called" << std::endl;
    *this = src;
}

Form &Form::operator=(Form const& src) {
    this->name = src.getName();
    this->sig = src.getSigned();

    return (*this);
}

std::string Form::getName() const {
    return (this->name);
}

bool Form::getSigned() const {
    return (this->sig);
}

int   Form::getNecessaryNote() const {
    return (this->necessaryNote);
}

int   Form::getNecessaryNoteExec() const {
    return (this->necessaryNoteExec);
}

char const* Form::gradeTooHighException::what( void ) const throw() {
    return ("Grade exceeds the maximum limit. Please select a lower grade.");
}

char const* Form::gradeTooLowException::what( void ) const throw() {
    return ("Grade falls below the minimum requirement. Please choose a higher grade.");
}

void    Form::beSigned(Bureaucrat& src) {
    try {
        if (src.getGrade() <= this->necessaryNote)
            this->setSigned(1);
        else
            throw gradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

void    Form::setSigned(int sig) {
    this->sig = (bool)sig;
}

std::ostream&	operator<<(std::ostream& out, Form const& src) {
    out << src.getName() << " ";
    out << src.getSigned() << " ";
    out << src.getNecessaryNote() << " ";
    out << src.getNecessaryNoteExec() << " ";

    return (out);
}

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}