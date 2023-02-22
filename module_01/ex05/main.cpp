/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:39:47 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 02:39:47 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;
    if (argc != 2) {
        std::cout << "Usage: ./harl [debug|info|warning|error]\n";
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}