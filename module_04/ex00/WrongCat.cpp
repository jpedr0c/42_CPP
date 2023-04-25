/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:48:25 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/03 22:48:25 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal("WrongCat"){
    if (this != &src)
        *this = src;
    std::cout << "WrongCat copy constructor called\n";
}

WrongCat WrongCat::operator=(WrongCat const &src){
    this->type = src.type;
    return (*this);
}

const std::string WrongCat::getType() const{
    return (this->type);
}

void WrongCat::makeSound() const{
    std::cout << "Miaw\n";
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat default constructor called\n";
}