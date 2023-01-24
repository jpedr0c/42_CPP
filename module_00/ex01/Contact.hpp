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

# include <string>

class   Contact
{
    private:

    std::string  firstName;
    std::string  lastName;
    std::string  nickname;
    std::string  phoneNumber;
    std::string  darkestSecret;

    public:
    Contact();
    void        addField(int field, std::string content);
    std::string getField(int field);
};

#endif