/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:50:24 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/26 18:50:24 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
    	ScavTrap();
    	ScavTrap(std::string name);
    	ScavTrap(const ScavTrap &scav);
    	~ScavTrap();

    	ScavTrap &operator=(const ScavTrap &scav);

    	void  attack(const std::string &target);
    	void  guardGate();
};

#endif