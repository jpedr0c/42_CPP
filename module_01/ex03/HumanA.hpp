/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:56:31 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/27 11:56:31 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
    private:
        std::string humanAName;
        Weapon &weaponName;
    public:
        HumanA(const std::string& name, Weapon& weapon);
        ~HumanA();
        void attack();
};

#endif