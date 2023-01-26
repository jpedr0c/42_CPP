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

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    int nZombies = 5;
    Zombie *horde = zombieHorde(nZombies, "JP");

    for (int i = 0; i < nZombies; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}