/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:44:31 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/23 14:44:31 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
}

void Contact::setField(std::string field, std::string content)
{
	if (field == "first name")
		_firstName = content;
	else if (field == "last name")
		_lastName = content;
	else if (field == "nickname")
		_nickname = content;
	else if (field == "phone number")
		_phoneNumber = content;
	else if (field == "darkest secret")
		_darkSecret = content;
}

std::string Contact::getField(std::string field)
{
	if (field == "first name")
		return (_firstName);
	else if (field == "last name")
		return (_lastName);
	else if (field == "nickname")
		return (_nickname);
	else if (field == "phone number")
		return (_phoneNumber);
	else if (field == "darkest secret")
		return (_darkSecret);
}

std::string Contact::GetFirstName()
{
	return (_firstName);
}

std::string Contact::GetLastName()
{
	return (_lastName);
}

std::string Contact::GetNickname()
{
	return (_nickname);
}

std::string Contact::GetPhoneNumber()
{
	return (_phoneNumber);
}

std::string Contact::GetDarkSecret()
{
	return (_darkSecret);
}