/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:19:59 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 08:19:59 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const& src);
        Animal &operator=(Animal const& src);
        virtual ~Animal();

        const std::string getType() const;
        virtual void makeSound() const;
    protected:
        std::string type;
};

#endif