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

#include "PhoneBook.hpp"
#include "Utils.hpp"
#include "Colors.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc > 1)
    {
        printMessage("Wrong amount of arguments!!\n", REDN);
        return (0);
    }
	PhoneBook	newPhonebook;
	std::string	cmd;
    printStart();
	while (1)
    {
		printMessage("> ", WHITE);
        std::getline(std::cin, cmd);
		if (cmd == "ADD")
			newPhonebook.addContactInfo();
        else if (cmd == "SEARCH")
			newPhonebook.searchContact();
        else if (cmd == "EXIT")
        {
            printMessage("| Exiting...\n", PURPLE);
			break ;
        }
        else if (cmd.empty() == false)
            printMessage("| Command not found `" + cmd + "`\n", REDN);
	}
    return (0);
}