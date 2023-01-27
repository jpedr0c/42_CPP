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
	currentIndex = 0;
	checkIndex = 0;
}

void	PhoneBook::addContactInfo()
{
	std::string tmpFirstName;
	std::string tmpLastName;
	std::string tmpNickname;
	std::string tmpPhoneNumber;
	std::string tmpDarkestSecret;

	printMessage("| Adding new contact\n", PURPLES);

	std::cout << "| - Enter first name\n";
	std::getline(std::cin, tmpFirstName);
	if (!verifyingField(tmpFirstName))
		return ;

	std::cout << "| - Enter last name\n";
	std::getline(std::cin, tmpLastName);
	if (!verifyingField(tmpLastName))
		return ;

	std::cout << "| - Enter nickname\n";
	std::getline(std::cin, tmpNickname);
	if (!verifyingField(tmpNickname))
		return ;

	std::cout << "| - Enter phone number\n";
	std::getline(std::cin, tmpPhoneNumber);
	if (!verifyingField(tmpPhoneNumber))
		return ;

	std::cout << "| - Enter dark secret\n";
	std::getline(std::cin, tmpDarkestSecret);
	if (!verifyingField(tmpDarkestSecret))
		return ;
	else
	{
		person[currentIndex].setField("first name", tmpFirstName);
		person[currentIndex].setField("last name", tmpLastName);
		person[currentIndex].setField("nickname", tmpNickname);
		person[currentIndex].setField("phone number", tmpPhoneNumber);
		person[currentIndex].setField("darkest secret", tmpDarkestSecret);
	    printMessage("| Contact Added ✔️\n", GREENN);
	}

	currentIndex++;
	if (currentIndex == 8)
		currentIndex = 0;
	if (checkIndex < 8)
		checkIndex++;

}

void	PhoneBook::printInfoFormatted(std::string elem)
{
	if (elem.size() > 10)
	{
		elem.resize(9);
		elem += ".";
	}
	std::cout << std::setw(10) << elem << " | ";
}

void	PhoneBook::searchContact()
{
	int	index;
	int i;
	std::string elem;

	if (checkIndex > 0)
	{
		i = 0;
		printMessage("| Searching contact\n", PURPLES);
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << "\n";
		std::cout << "| ";
		std::cout << std::setfill(' ') << std::setw(10) << "Index" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "First Name" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Last name" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Nickname" << " | " << "\n";

		while (i < checkIndex)
		{
			std::cout << "| " << std::setfill(' ') << std::setw(10) << i << " | ";
			elem = person[i].getField("first name");
			printInfoFormatted(elem);
			elem = person[i].getField("last name");
			printInfoFormatted(elem);
			elem = person[i].getField("nickname");
			printInfoFormatted(elem);
			std::cout << "\n";
			i++;
		}
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << "\n";
		printMessage("| Enter index to see contact info: ", WHITEN);
		std::cin >> index;
		if (std::cin.good() && index >= 0 && index <= checkIndex - 1)
		{
			std::cout << "| - First name: " << person[index].getField("first name") << "\n";
			std::cout << "| - Last name: " << person[index].getField("last name") << "\n";
			std::cout << "| - Nickname: " << person[index].getField("nickname") << "\n";
			std::cout << "| - Phone number: " << person[index].getField("phone number") << "\n";
			std::cout << "| - Darkest secret: " << person[index].getField("darkest secret") << "\n";
		}
		else
		{
			std::cin.clear();
			printMessage("| Invalid index\n", REDN);
		}
		std::cin.ignore(10000, '\n');
	}
	else
		std::cout << "| No contacts" << "\n";
}
