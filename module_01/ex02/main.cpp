/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:07:48 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/26 12:07:48 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The memory address of the string variable is " << &string << "\n";
    std::cout << "The memory address held by stringPTR is " << stringPTR << "\n";
    std::cout << "The memory address held by stringREF is " << &stringREF << "\n";
    std::cout << "The value of the string variable is " << string << "\n";
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << "\n";
    std::cout << "The value pointed to by stringREF is " << stringREF << "\n";
    return (0);
}