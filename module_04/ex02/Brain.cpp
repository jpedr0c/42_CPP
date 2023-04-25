/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:45:41 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/03 23:45:41 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++)
        this->idea[i] = "My idea: ";
    std::cout << "Brain default constructor called\n";
}

Brain::Brain(Brain const& src){
    if (this != &src)
        *this = src;
    std::cout << "Brain copy constructor called\n";
}

Brain &Brain::operator=(Brain const& src){
    for (int i = 0; i < 100; i++)
        this->idea[i] = src.getIdea(i);
    return (*this);
}

std::string Brain::getIdea(int idx) const{
    return (this->idea[idx]);
}

std::ostream &operator<<(std::ostream& ofs, Brain const& b){
    for (int i = 0; i < 100; i++)
        ofs << b.getIdea(i);
    return (ofs);
}

Brain::~Brain(){
    std::cout << "Brain default destructor called\n";
}