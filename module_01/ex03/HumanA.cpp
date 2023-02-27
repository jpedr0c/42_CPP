/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:04:21 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/27 12:04:21 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weaponName(weapon)
{
    this->humanAName = name;
    this->weaponName = weapon;
}

void HumanA::attack()
{
    std::cout << this->humanAName << " attacks with his " << this->weaponName.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weaponName = weapon;
}