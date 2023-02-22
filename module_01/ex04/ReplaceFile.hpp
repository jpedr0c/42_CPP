/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumamB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:59:28 by jocardos          #+#    #+#             */
/*   Updated: 2023/01/27 11:59:28 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACEFILE_HPP
# define REPLACEFILE_HPP

#include <string>
#include <iostream>
#include <fstream>

class ReplaceFile
{
    private:
        std::string replaceAllOccurrences(std::string filename, std::string s1, std::string s2);
    public:
        ReplaceFile();
        ~ReplaceFile();
        void replaceSubstringsInFile(std::ifstream &file, const std::string &s1, const std::string &s2);
};

#endif