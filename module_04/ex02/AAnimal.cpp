/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:13:38 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 14:13:38 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal(std::string type){
    this->type = type;
    std::cout << "AAnimal parametric constructor called\n";
}

AAnimal::AAnimal(AAnimal const& src){
    if (this != &src)
        *this = src;
    std::cout << "AAnimal copy constructor called\n";
}

AAnimal &AAnimal::operator=(AAnimal const& src){
    this->type = src.type;
    return *this;
}

const std::string AAnimal::getType() const{
    return (this->type);
}

void AAnimal::makeSound() const{
    std::cout << "makeSound AAnimal called\n";
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal default destructor called\n";
}