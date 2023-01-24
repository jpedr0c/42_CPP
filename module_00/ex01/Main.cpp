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
#include "Colors.hpp"

int main (int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        std::cout << color::red << "Error in arguments\n" << color::off;
        return (0);
    }
    Contact person[8];
    PhoneBook newPhoneBook;
    std::string cmd;
    int index;

    index = 0;
    std::cout << color::bluen << "Welcome PhoneBook\n";
    std::cout << "COMANDOS:\n";
    std::cout << "=> ADD: add a new contact\n";
    std::cout << "=> SEARCH:  display a specific contact\n";
    std::cout << "=> EXIT: Exit the program\n" << color::off;
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
                newPhoneBook.addContactInfo(&person[index++]);
            else
                std::cout << "| No space left\n";
        else if (cmd == "SEARCH")
            newPhoneBook.searchContact(person, index);
        else if (cmd == "EXIT")
            break;
        else if (cmd.empty() == false)
            std::cout << "Command not found `" << cmd << "`" << "\n";
    }
    return (0);
}