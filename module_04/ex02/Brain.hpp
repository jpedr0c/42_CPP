/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:22:28 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 08:22:28 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    public:
        Brain();
        Brain(Brain const& src);
        Brain &operator=(Brain const& src);
        ~Brain();

        std::string getIdea(int idx) const;
    private:
        std::string idea[100];
};

std::ostream &operator<<(std::ostream& ofs, Brain const &b);

#endif