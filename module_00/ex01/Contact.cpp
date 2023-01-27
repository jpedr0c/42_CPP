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
		firstName = content;
	else if (field == "last name")
		lastName = content;
	else if (field == "nickname")
		nickname = content;
	else if (field == "phone number")
		phoneNumber = content;
	else if (field == "darkest secret")
		darkestSecret = content;
}

std::string Contact::getField(std::string field)
{
	if (field == "first name")
		return (firstName);
	else if (field == "last name")
		return (lastName);
	else if (field == "nickname")
		return (nickname);
	else if (field == "phone number")
		return (phoneNumber);
	else if (field == "darkest secret")
		return (darkestSecret);
	return ("");
}