/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:06:27 by jocardos          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/01/27 01:33:14 by jocardos         ###   ########.fr       */
=======
/*   Updated: 2023/01/26 12:26:13 by jocardos         ###   ########.fr       */
>>>>>>> module_01
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "Colors.hpp"

void    printMessage(std::string str, std::string color)
{
    std::cout << color << str << DEFAULT;
}

<<<<<<< HEAD
void    printStart()
=======
void printStart()
>>>>>>> module_01
{
    printMessage("Welcome PhoneBook\n", BLUEI);
    printMessage("Type a command to start\n", BLUEI);
    printMessage("COMMANDS:\n", BLUEI);
    printMessage("=> ADD: add a new contact\n", BLUEI);
    printMessage("=> SEARCH:  display a specific contact\n", BLUEI);
    printMessage("=> EXIT: Exit the program\n", BLUEI);
}
<<<<<<< HEAD

int verifyingField(std::string content)
{
    const char *str;
    int i;

    str = content.c_str();
    i = 0;
    while (std::isspace(str[i]) || str[i] == '\0')
    {
        if (str[i] == '\0')
        {
            printMessage("| Empty field. Fill the field to add a contact!\n", REDN);
            printMessage("| Contact not added ❌\n", REDN);
            return (0);
        }
        i++;
    }
	return (1);
}
=======
>>>>>>> module_01
