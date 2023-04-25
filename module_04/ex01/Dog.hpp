/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:07:19 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 10:07:19 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(Dog const& src);
        Dog &operator=(Dog const& src);
        ~Dog();

        const std::string getType() const;
        void makeSound() const;
        Brain const* getBrain() const;
    private:
        Brain* brain;
};

#endif