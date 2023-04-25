/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:57:38 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/03 23:57:38 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called\n";
    this->brain = new Brain;
}

Dog::Dog(Dog const& src) : Animal("Dog"){
    if (this != &src){
        this->brain = new Brain();
        *this = src;
    }
    std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(Dog const& src){
    this->type = src.type;
    *this->brain = *src.getBrain();
    return (*this);
}

const std::string Dog::getType() const{
    return (this->type);
}

void Dog::makeSound() const{
    std::cout << "AuAu!\n";
}

Brain const* Dog::getBrain() const{
    return (this->brain);
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog default destructor called\n";
}