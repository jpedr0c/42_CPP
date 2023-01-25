/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:03:25 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/23 14:03:25 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkSecret;
	public:
		Contact();
		std::string GetFirstName();
		void SetFirstName(std::string firstName);
		std::string GetLastName();
		void SetLastName(std::string lastName);
		std::string GetNickname();
		void SetNickname(std::string nickname);
		std::string GetPhoneNumber();
		void SetPhoneNumber(std::string phoneNumber);
		std::string GetDarkSecret();
		void SetDarkSecret(std::string darkSecret);
};

#endif