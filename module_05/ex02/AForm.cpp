#include "AForm.hpp"

char const* AForm::gradeTooLowException::what( void ) const throw() {
    return ("Grade very low, sorry!");
}

AForm::AForm() : necessaryNote(0), necessaryNoteExec(0) {
}

AForm::AForm(std::string name, const int necessaryNote, const int necessaryNoteExec) : name(name), sig(0), necessaryNote(necessaryNote), necessaryNoteExec(necessaryNoteExec) {
    std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(AForm const& src) : necessaryNote(src.necessaryNote), necessaryNoteExec(src.necessaryNoteExec) {
    std::cout << "AForm copy constructor called" << std::endl;
    *this = src;
}

AForm &AForm::operator=(AForm const& src) {
    this->name = src.getName();
    this->sig = src.getSigned();

    return (*this);
}

std::string AForm::getName() const {
    return (this->name);
}

bool AForm::getSigned() const {
    return (this->sig);
}

int   AForm::getNecessaryNote() const {
    return (this->necessaryNote);
}

int   AForm::getNecessaryNoteExec() const {
    return (this->necessaryNoteExec);
}

void    AForm::beSigned(Bureaucrat& src) {
    try {
        if (src.getGrade() <= this->necessaryNote) {
        this->setSigned(1);
    }
    else {
        throw gradeTooLowException();
    }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

void    AForm::setSigned(int sig) {
    this->sig = (bool)sig;
}

std::ostream&	operator<<(std::ostream& out, AForm const& src) {
    out << src.getName() << " ";
    out << src.getSigned() << " ";
    out << src.getNecessaryNote() << " ";
    out << src.getNecessaryNoteExec() << " ";

    return (out);
}

void    AForm::setName( std::string name ) {
    this->name = name;
}

void    AForm::setSigned( bool sig ) {
    this->sig = sig;
}

void    AForm::setNecessaryNote( int necessaryNote ) {
    *const_cast<int*>(&this->necessaryNote) = necessaryNote;
}

void    AForm::setNecessaryNoteExec( int const necessaryNoteExec ) {
    *const_cast<int*>(&this->necessaryNoteExec) = necessaryNoteExec;
}


AForm::~AForm() {
    std::cout << "AForm destructor called" << std::endl;
}