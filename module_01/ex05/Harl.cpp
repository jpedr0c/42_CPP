/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:32:07 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 02:32:07 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void    Harl::complain(std::string level) {
    if (level == "debug" || level == "DEBUG")
        this->debug(); 
    else if (level == "info" || level == "INFO")
        this->info();
    else if (level == "warning" || level == "WARNING")
        this->warning();
    else if (level == "error" || level == "ERROR")
        this->error();
    else
        std::cout << "Usage: ./harl [debug|info|warning|error]\n";
}

void    Harl::debug(void) {
    std::cout << "--DEBUG--\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::info(void) {
    std::cout << "--INFO--\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void) {
    std::cout << "--WARNING--\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void) {
    std::cout << "--ERROR--\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}