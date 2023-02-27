/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:50:27 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/26 18:50:27 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "Default";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << this->name << " ScravTrap created\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;

    std::cout << this->name << " ScravTrap created\n";
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
    *this = scav;

    std::cout << this->name << " ScavTrap copy created\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << this->name << " ScavTrap destroyed\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
    this->name = scav.name;
    this->hitPoints = scav.hitPoints;
    this->energyPoints = scav.energyPoints;
    this->attackDamage = scav.attackDamage;

    std::cout << this->name << " ScavTrap = " << scav.name << std::endl;
    return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << "ScavTrap can't attack because is dead\n";
        return ;
    }
    std::cout << this->name << " ScavTrap attack " << target << ", causing " << this->attackDamage << " points of damage!\n";
}

void    ScavTrap::guardGate()
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << "ScavTrap can't guard gate because is dead\n";
        return ;
    }
    std::cout << this->name << " ScavTrap is now guarding the gate\n";
}
