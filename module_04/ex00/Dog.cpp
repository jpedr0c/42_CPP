/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:22:33 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/01 23:22:33 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(Dog const &src) : Animal("Dog"){
    if (this != &src)
        *this = src;
    std::cout << "Dog copy constructor called\n";
}

Dog Dog::operator=(Dog const &src){
    this->type = src.type;
    return (*this);
}

const std::string Dog::getType() const{
    return (this->type);
}

void Dog::makeSound() const{
    std::cout << "AuAu!\n";
}

Dog::~Dog(){
    std::cout << "Dog default destructor called\n";
}