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

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weaponName = NULL;
}

void HumanB::attack()
{
    if (!this->weaponName)
    {
        std::cout << this->name << " not weapon\n";
        return ;
    }
    std::cout << this->name << " attacks with his " << this->weaponName->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponName = &weapon;
}