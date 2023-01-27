/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:04:26 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/27 01:33:28 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include "Contact.hpp"
# include "Colors.hpp"
# include "Utils.hpp"
# include <iostream>
# include <string>
# include <iomanip>

void    printStart();
void    printMessage(std::string str, std::string color);
int     verifyingField(std::string content);


#endif