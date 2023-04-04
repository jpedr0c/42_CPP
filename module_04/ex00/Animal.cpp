/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:45:02 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/03 23:22:41 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal& src){
    *this = src;

    std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& src){
    this->type = src.type;
    std::cout << "Animal assignment operator\n";
    return *this;
}

const std::string& Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << "makeSound Animal called\n";
}

Animal::~Animal(){
    std::cout << "Animal default destructor called\n";
}