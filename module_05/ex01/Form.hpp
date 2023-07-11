#ifndef FORM_HPP
# define FORM_HPP

#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
    public:
        Form(std::string name, const int necessaryNote, const int necessaryNoteExec);
        Form(Form const& src);
        Form &operator=(Form const& src);
        ~Form();

        void    beSigned(Bureaucrat& src);
    
        std::string     getName() const;
        bool            getSigned() const;
        int       getNecessaryNote() const;
        int       getNecessaryNoteExec() const;

        void            setSigned(int sig);

        class gradeTooHighException : public std::exception {
            public:
                char const* what() const throw();
        };

        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };

    private:
        std::string name;
        bool        sig;
        const int   necessaryNote;
        const int   necessaryNoteExec;
};

std::ostream&	operator<<(std::ostream& out, Form const& src);

#endif