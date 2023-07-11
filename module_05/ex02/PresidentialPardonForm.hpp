/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:22:05 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/23 21:22:05 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <stdlib.h>

#include <cstdlib>
#include <ctime>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
 public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(PresidentialPardonForm const& src);
  PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
  ~PresidentialPardonForm();

  void execute(Bureaucrat const& executor) const;

  class GradeTooLowExeception : public std::exception {
   public:
    char const* what() const throw();
  }

  private : std::string target;
};