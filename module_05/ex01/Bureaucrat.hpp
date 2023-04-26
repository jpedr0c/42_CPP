/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:39:07 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 19:39:07 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat{
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const& src);
        Bureaucrat& operator=(Bureaucrat const& src);
        ~Bureaucrat();

        const std::string getName() const;
        int getGrade() const;
        void upgrade();
        void downgrade();
        
        class gradeTooHighException : public std::exception{
            public:
                const char* what() const throw();
        };

        class gradeTooLowException : public std::exception{
            public:
                const char* what() const throw();
        };

        void verifyException(int grade);
        void signForm(Form& src) const;
    private:
        const std::string name;
        int grade;
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const& src);

#endif