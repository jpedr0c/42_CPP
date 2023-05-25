/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:19:57 by jocardos          #+#    #+#             */
/*   Updated: 2023/05/25 13:19:57 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

class RobotomyRequestForm : public AForm{
    public:
      RobotomyRequestForm(std::string target);
      RobotomyRequestForm(RobotomyRequestForm const& src);
      RobotomyRequestForm &operator=(RobotomyRequestForm const& src);
      ~RobotomyRequestForm();

      void execute(Bureaucrat const& executor) const;
      class gradeTooLowException : public std::exception{
        public:
          char const* what() const throw();
      }

    private:
      std::string target;
};