/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumamB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:07:45 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/27 12:07:45 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (this->weaponName)
        std::cout << this->name << " attacks with his " << this->weaponName->getType() << "\n";
    else
        std::cout << "Not weapon\n";    
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponName = &weapon;
}