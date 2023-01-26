/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:05:32 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/26 10:05:32 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->nameZombie << ": was destroyed!\n";
}

void Zombie::announce()
{
    std::cout << this->nameZombie << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setNameZombie(std::string name)
{
    this->nameZombie = name;
}