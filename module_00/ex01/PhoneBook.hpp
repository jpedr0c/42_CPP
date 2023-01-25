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
# include <iostream>
# include <string>
# include <iomanip>

class PhoneBook
{
	private:
		Contact				_contacts[8];
		int					_current_index;
		int					_check_index;
	public:
		PhoneBook();
		void				AddContact();
		void				GetContact();
		std::string			ExtractInformation();
		void				PrintInformationFormatted(std::string information);
		void				PrintContactSelect(int index);
};

#endif