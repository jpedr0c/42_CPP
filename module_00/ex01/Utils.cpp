/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:06:27 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/24 15:06:27 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "Colors.hpp"

void    printMessage(std::string str, std::string color)
{
    std::cout << color << str << DEFAULT;
}

void printStart()
{
    printMessage("Welcome PhoneBook\n", BLUEI);
    printMessage("Type a command to start\n", BLUEI);
    printMessage("COMMANDS:\n", BLUEI);
    printMessage("=> ADD: add a new contact\n", BLUEI);
    printMessage("=> SEARCH:  display a specific contact\n", BLUEI);
    printMessage("=> EXIT: Exit the program\n", BLUEI);
}
