/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:54:47 by jocardos          #+#    #+#             */
/*   Updated: 2023/02/22 00:54:47 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceFile.hpp"

ReplaceFile::ReplaceFile()
{
}

ReplaceFile::~ReplaceFile()
{
}

void    ReplaceFile::replaceSubstringsInFile(std::ifstream &file, const std::string &s1, const std::string &s2)
{
    std::string filename;
    std::ofstream ofs_file;

    ofs_file.open("replaceFile.txt");
    while (std::getline(file, filename))
    {
        if (filename.empty())
            return ;
        ofs_file << replaceAllOccurrences(filename, s1, s2) << std::endl;
    }
    file.close();
}

std::string ReplaceFile::replaceAllOccurrences(std::string filename, std::string s1, std::string s2)
{
    std::size_t start = 0;
    std::string newString;

    while (42)
    {
        start = filename.find(s1);
        if (start >= 1000000000)
            break ;
        filename.erase(start, s1.length());
        filename.insert(start, s2);
    }
    std::cout << filename << std::endl;
    return (filename);
}