/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:38:53 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/03 22:38:53 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type){
    std::cout << "WrongAnimal parametric constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
    if (this != &src)
        *this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src){
    this->type = src.type;
    return (*this);
}

std::string const WrongAnimal::getType() const{
    return (this->type);
}

void WrongAnimal::makeSound() const{
    std::cout << "makeSound WrongAnimal called\n"; 
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal default descructor called\n";
}