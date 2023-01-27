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

HumanA::HumanA(const std::string& name, Weapon& weapon) : humanAName(name), weaponName(weapon) {
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->humanAName << " attacks with his " << this->weaponName.getType() << "\n";
}