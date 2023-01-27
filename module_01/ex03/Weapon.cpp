/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:02:12 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/27 12:02:12 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->weaponType = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
    this->weaponType = type;
}

const std::string &Weapon::getType()
{
    return (this->weaponType);
}