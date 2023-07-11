#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm( std::string target);
        PresidentialPardonForm(PresidentialPardonForm const& src);
        PresidentialPardonForm &operator=(PresidentialPardonForm const& src);
        ~PresidentialPardonForm();

        void            execute(Bureaucrat const& executor) const;
        
        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };
        
    private:
        std::string target;
};

#endif