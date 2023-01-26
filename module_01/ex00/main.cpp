/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:16:56 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/26 10:16:56 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*	newZombie(std:: string name);
void	randomChump(std::string name);

int main(void)
{
    Zombie *zombie = newZombie("marvin");
    zombie->announce();
    randomChump("JP");
    delete zombie;
    return (0);
}