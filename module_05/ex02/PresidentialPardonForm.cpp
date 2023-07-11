#include "PresidentialPardonForm.hpp"

const char* PresidentialPardonForm::gradeTooLowException::what() const throw() {
    return ("Execute failed!");
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("Presidential Pardon Form", 25, 5) {
    this->target = target;
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& src ) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    if (this != &src) {
        *this = src;
    }
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const& src) {
    this->setName(src.getName());
    this->setSigned(src.getSigned());
    this->setNecessaryNote(src.getNecessaryNote());
    this->setNecessaryNoteExec(src.getNecessaryNoteExec());
    this->target = src.target;

    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    try {
        if ( AForm::getSigned() && (executor.getGrade() <= AForm::getNecessaryNoteExec()) )
        {
            std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
        }
        else {
            throw gradeTooLowException();
        }     
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}