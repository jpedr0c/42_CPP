/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 22:48:02 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/01 22:48:02 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    public:
        Animal();
        Animal(const Animal& src);
        Animal& operator=(const Animal& src);
        virtual ~Animal();

        const std::string& getType() const;
        virtual void makeSound() const;

    protected:
        std::string type;
};

#endif