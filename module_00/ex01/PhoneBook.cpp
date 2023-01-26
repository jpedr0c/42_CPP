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
	printMessage("| Adding new contact\n", PURPLES);
	std::cout << "| - Enter first name\n";
	person[currentIndex].SetFirstName(extractInformation());
	std::cout << "| - Enter last name\n";
	person[currentIndex].SetLastName(extractInformation());
	std::cout << "| - Enter nickname\n";
	person[currentIndex].SetNickname(extractInformation());
	std::cout << "| - Enter phone number\n";
	person[currentIndex].SetPhoneNumber(extractInformation());
	std::cout << "| - Enter dark secret\n";
	person[currentIndex].SetDarkSecret(extractInformation());

	currentIndex++;
	if (currentIndex == 8)
		currentIndex = 0;
	if (checkIndex < 8)
		checkIndex++;

}


// std::string PhoneBook::ExtractInformation()
// {
// 	std::string information;
// 	std::getline(std::cin, information);
// 	if (information == "" || information == " " || information == "\n" || information == "\t" || information == "\v" || information == "\f" || information == "\r")
// 	{
// 		printMessage("| Empty field. Fill the field!\n", REDN);
// 		return (NULL);
// 	}
// 	return (information);
// }

std::string PhoneBook::extractInformation()
{
	std::string information;
	for (;;) {
		std::getline(std::cin, information);
		if (!information.empty()) {
			return (information);
		}
		printMessage("| Empty field. Fill the field!\n", REDN);
	}
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
			elem = person[i].GetFirstName();
			printInfoFormatted(elem);
			elem = person[i].GetLastName();
			printInfoFormatted(elem);
			elem = person[i].GetNickname();
			printInfoFormatted(elem);
			std::cout << "\n";
			i++;
		}
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << "\n";
		printMessage("| Enter index to see contact info: ", WHITEN);
		std::cin >> index;
		if (std::cin.good() && index >= 0 && index <= checkIndex - 1)
		{
			std::cout << "| - First name: " << person[index].GetFirstName() << "\n";
			std::cout << "| - Last name: " << person[index].GetLastName() << "\n";
			std::cout << "| - Nickname: " << person[index].GetNickname() << "\n";
			std::cout << "| - Phone number: " << person[index].GetPhoneNumber() << "\n";
			std::cout << "| - Darkest secret: " << person[index].GetDarkSecret() << "\n";
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
