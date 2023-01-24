/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:58:55 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/23 14:58:55 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include "Colors.hpp"
# include "Utils.hpp"

PhoneBook::PhoneBook()
{
    content = "";
}

int    PhoneBook::addContactInfo(Contact *elem)
{
    std::string contactInfo[] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};
    int     i;

    i = -1;
	printMessage("| Adding new contact\n", PURPLES);
    while (++i < 5)
    {
        std::cout << "| - " << contactInfo[i] << "\n";
        std::getline(std::cin, content);
        if (content == "" || content == " " || content == "\n" || content == "\t" ||content == "\v" || content == "\f" || content == "\r")
        {   
			printMessage("| Empty field. Fill the field!\n", REDN);
            return (0);
        }
		(*elem).addField(i, content);
    }
	return (1);
}

void	PhoneBook::searchContact(Contact person[8], int index)
{
	int			i;
	int			j;
	std::string	elem;
    std::string contactInfo[] = {"First name", "Last name", "Nickname", "Phone number", "Darkest secret"};

	if (index > 0)
	{
		i = 0;
		printMessage("| Searching contact\n", PURPLES);
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << "\n";
		std::cout << "| ";
		std::cout << std::setfill(' ') << std::setw(10) << "Index" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "First Name" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Last name" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << " | " << "\n";
		while (i < index)
		{
			j = 0;
			std::cout << "| " << std::setfill(' ') << std::setw(10) << i << " | ";
			while (j < 3)
			{
				elem = person[i].getField(j);
				if (elem.size() > 10)
				{
					elem.resize(9);
					elem += ".";
				}
				std::cout << std::setw(10) << elem << " | ";
                j++;
			}
			std::cout << "\n";
            i++;
		}
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << "\n";
		printMessage("| Enter index to see contact info: ", WHITEN);
		std::cin >> i;
		if (std::cin.good() && i >= 0 && i <= index - 1)
		{
			j = 0;
			while (j <= 4)
            {
				std::cout << "| - " << contactInfo[j] << ": " << person[i].getField(j) << "\n";
                j++;
            }
		}
		else
		{
			std::cin.clear();
			std::cout << "| Invalid index" << "\n";
		}
		std::cin.ignore(10000, '\n');
	}
	else
		std::cout << "| No contacts" << "\n";
}