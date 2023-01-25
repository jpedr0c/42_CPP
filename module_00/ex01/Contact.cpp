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

std::string Contact::GetFirstName() {
	return (_firstName);
}

void Contact::SetFirstName(std::string firstName) {
	_firstName = firstName;
}

std::string Contact::GetLastName() {
	return (_lastName);
}

void Contact::SetLastName(std::string lastName) {
	_lastName = lastName;
}

std::string Contact::GetNickname() {
	return (_nickname);
}

void Contact::SetNickname(std::string nickname) {
	_nickname = nickname;
}

std::string Contact::GetPhoneNumber() {
	return (_phoneNumber);
}

void Contact::SetPhoneNumber(std::string phoneNumber) {
	_phoneNumber = phoneNumber;
}

std::string Contact::GetDarkSecret() {
	return (_darkSecret);
}

void Contact::SetDarkSecret(std::string darkSecret) {
	_darkSecret = darkSecret;
}