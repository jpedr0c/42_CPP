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
# include <string>
# include <iostream>
# include <iomanip>
# include <cstdlib>

class PhoneBook
{
private:
    Contact person[8];
    std::string content;
public:
    PhoneBook();
    int    addContactInfo(Contact *elem);
    void    searchContact(Contact person[8], int i);
};


#endif