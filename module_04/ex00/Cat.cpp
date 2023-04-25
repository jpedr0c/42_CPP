/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:16:31 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/01 23:16:31 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor called\n";
}

Cat::Cat(Cat const& src) : Animal("Cat"){
    if (this != &src)
        *this = src;
    std::cout << "Cat copy constructor called\n";
}

Cat Cat::operator=(Cat const& src){
    this->type = src.type;
    return (*this);
}

const std::string Cat::getType() const{
    return (this->type);
}

void Cat::makeSound() const{
    std::cout << "Miaw!\n";
}

Cat::~Cat(){
    std::cout << "Cat default destructor called\n";
}