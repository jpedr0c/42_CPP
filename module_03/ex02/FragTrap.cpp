/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:03:00 by jocardos          #+#    #+#             */
/*   Updated: 2023/03/16 16:29:51 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << this->name << " FragTrap created\n";
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << this->name << " FragTrap created\n";
}

FragTrap::FragTrap(const FragTrap &scav)
{
    *this = scav;

    std::cout << this->name << " FragTrap copy created\n";
}

FragTrap::~FragTrap()
{
    std::cout << this->name << " FragTrap destroyed\n";
}

FragTrap &FragTrap::operator=(const FragTrap &scav)
{
    this->name = scav.name;
    this->hitPoints = scav.hitPoints;
    this->energyPoints = scav.energyPoints;
    this->attackDamage = scav.attackDamage;

    std::cout << this->name << " FragTrap = " << scav.name << std::endl;
    return (*this);
}

void    FragTrap::highFivesGuys()
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " FragTrap can't hight fives because is dead\n";
        return ;
    }
    std::cout << this->name << " FragTrap hight fives guys\n";
}