/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:12:35 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/23 14:12:35 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
// # include "Colors.hpp"
// # include "Utils.hpp"
# include <iostream>
# include <string>
# include <iomanip>
class PhoneBook
{
	private:
		Contact				person[8];
		int					currentIndex;
		int					checkIndex;
	public:
		PhoneBook();
		void				addContactInfo();
		void				searchContact();
		std::string			extractInformation();
		void				printInfoFormatted(std::string elem);
};

#endif