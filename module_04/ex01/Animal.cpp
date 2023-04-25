/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:19:48 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 08:19:48 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type){
    this->type = type;
    std::cout << "Animal parametric constructor called\n";
}

Animal::Animal(Animal const& src){
    if (this != &src)
        *this = src;
    std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(Animal const& src){
    this->type = src.type;
    return *this;
}

const std::string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << "makeSound Animal called\n";
}

Animal::~Animal(){
    std::cout << "Animal default destructor called\n";
}