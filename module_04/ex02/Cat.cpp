/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:02:33 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 10:02:33 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
    std::cout << "Cat default constructor called\n";
    this->brain = new Brain;
}

Cat::Cat(Cat const& src) : AAnimal("Cat"){
    if (this != &src)
        *this = src;
    std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(Cat const& src){
    this->type = src.type;
    this->brain = new Brain(*src.getBrain());
    return (*this);
}

void Cat::makeSound() const{
    std::cout << "Miaw!\n";
}

const std::string Cat::getType() const{
    return (this->type);
}

Brain const* Cat::getBrain() const{
    return (this->brain);
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat default destructor called\n";
}