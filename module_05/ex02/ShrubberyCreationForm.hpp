#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm( std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const& src);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const& src);
        ~ShrubberyCreationForm();

        void            execute(Bureaucrat const& executor) const;
        
        class gradeTooLowException : public std::exception {
            public:
                char const* what() const throw();
        };
        
    private:
        std::string target;
};

#endif