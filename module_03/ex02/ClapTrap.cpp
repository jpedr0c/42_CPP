/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:13:24 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 20:13:24 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << this->name << " ClapTrap created\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << this->name << " ClapTrap created\n";
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    *this = clap;
    std::cout << this->name << " copy created\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " ClapTrap destroyed\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
    this->name = clap.name;
    this->hitPoints = clap.hitPoints;
    this->energyPoints = clap.energyPoints;
    this->attackDamage = clap.attackDamage;
    std::cout << this->name << " = " << clap.name << std::endl;
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't attack because is dead\n";
        return ;
    }
    if (this->energyPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't attack because it's out of energy\n";
        return ;
    }
    std::cout << this->name << " ClapTrap attack " << target << " , causing " << this->attackDamage << " damage\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't take damage because is dead\n";
        return ;
    }
    if (amount > this->hitPoints)
        amount = this->hitPoints;
    this->hitPoints -= amount;
    std::cout << this->name << " ClapTrap has taken " << amount << " damage\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " ClapTrap can't be repaired because is dead\n";
        return ;
    }
    this->hitPoints += amount;
    std::cout << this->name << " ClapTrap has repaired " << amount << " hit points\n";
}
