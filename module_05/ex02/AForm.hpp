/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:47:58 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/23 20:47:58 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>
#include <string>

class Bureaucrat;

class AForm{
  public:
    AForm();
    AForm(std::string name, const int necessaryNote, const int necessaryNoteExec);
    AForm(AForm const& src);
    AForm &operator=(AForm const& src);
    ~AForm();

    void beSigned(Bureaucrat& src);
    std::string getName() const;
    bool getSigned() const;
    const int getNecessaryNote() const;
    const int getNecessaryNoteExec() const;

    void setName(std::string name);
    void setSigned(bool sig);
    void setNecessaryNote(const int necessaryNote);
    void setNecessaryNoteExec(const int necessaryNoteExec);

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

std::ostream& operator<<(std::ostream& out, AForm const& src);

#endif