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
# include "PhoneBook.hpp"
# include "Colors.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickname = "";
    phoneNumber = "";
    darkestSecret = "";
}

void    Contact::addField(int field, std::string content)
{
    switch (field)
    {
    case 0:
        firstName = content;
        break;
    case 1:
        lastName = content;
        break;
    case 2:
        nickname = content;
        break;
    case 3:
        phoneNumber = content;
        break;
    case 4:
        darkestSecret = content;
        break;
    default:
        break;
    }
}

std::string Contact::getField(int field)
{
    switch (field)
    {
    case 0:
        return (firstName);
        break;
    case 1:
        return (lastName);
        break;
    case 2:
        return (nickname);
        break;
    case 3:
        return (phoneNumber);
        break;
    case 4:
        return (darkestSecret);
        break;
    default:
        break;
    }
    return (NULL);
}