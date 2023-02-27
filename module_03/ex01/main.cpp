/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:04:36 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 20:04:36 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap *c1 = new ClapTrap();
	ScavTrap *c2 = new ScavTrap("Luffy");
	ScavTrap *aux = new ScavTrap();
	ScavTrap *c3 = new ScavTrap(*aux);

	std::cout << std::endl;

	c1->attack("Buggy");
	c2->attack("Arlong");
	c3->attack("Crocodile");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(50);
	c2->takeDamage(50);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	c2->guardGate();
	c3->guardGate();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete aux;
	delete c3;
}
