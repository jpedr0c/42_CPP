/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:21:33 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 20:21:33 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>
#include <string>

class Bureaucrat;

class Form{
    public:
        Form(std::string name, const int necessaryNote, const int necessaryNoteExec);
        Form(Form const& src);
        Form &operator=(Form const& src);
        ~Form();

        void beSigned(Bureaucrat& src);
        std::string getName() const;
        bool getSigned() const;
        const int getNecessaryNote() const;
        const int getNecessaryNoteExec() const;
        void setSigned(int sig);

        class gradeTooLowException : public std::exception{
            public:
                char const* what() const throw();
        };
    private:
        std::string name;
        bool sig;
        const int necessaryNote;
        const int necessaryNoteExec;
};

std::ostream& operator<<(std::ostream& out, Form const& src);

#endif