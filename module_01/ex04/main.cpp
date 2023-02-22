/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:53:06 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 00:53:06 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"
#include "Colors.hpp"

void    printMessage(std::string str, std::string color)
{
    std::cout << color << str << DEFAULT;
}

int main(int argc, char **argv)
{
    ReplaceFile replace;
    std::ifstream file;

    if (argc != 4)
    {
        printMessage("Usage: ./replace [filename] [s1] [s2]\n", RED);
        return (1);
    }
    file.open(argv[1]);
    if (!file.is_open())
    {
        printMessage("Error: File not found\n", RED);
        return (1);
    }
    replace.replaceSubstringsInFile(file, argv[2], argv[3]);
    return (0);
}