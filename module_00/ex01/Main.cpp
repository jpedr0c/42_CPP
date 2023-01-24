/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:00:48 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/23 18:00:48 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Utils.hpp"
#include "Colors.hpp"

int main (int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        printMessage("Wrong amount of arguments!!\n", REDN);
        return (0);
    }
    Contact person[8];
    PhoneBook newPhoneBook;
    std::string cmd;
    int index;

    index = 0;
    printStart();
    while (1)
    {
        std::cout << "> ";
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << "\n";
            return (0);
        }
        if (cmd == "ADD")
            if (index < 8)
            {
                if (newPhoneBook.addContactInfo(&person[index]))
                {
                    printMessage("| Contact Added ✔️\n", GREENN);
                    index++;
                }
                else
                    printMessage("| Contact not added ❌\n", REDN);
            }
            else
                printMessage("| Phonebook is full ❌\n", REDN);
        else if (cmd == "SEARCH")
            newPhoneBook.searchContact(person, index);
        else if (cmd == "EXIT")
            break;
        else if (cmd.empty() == false)
            printMessage("| Command not found `" + cmd + "`\n", REDN);
    }
    return (0);
}