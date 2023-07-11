/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:48:05 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/25 18:48:05 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
 public:
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const& src);
  ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
  ~ShrubberyCreationForm();

  void execute(Bureaucrat const& executor) const;

  class GradeTooLowException : public std::exception {
   public:
    const char* what() const throw();
  };

 private:
  std::string target;
};