/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:45:47 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/03 22:45:47 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(WrongCat const& src);
        WrongCat operator=(WrongCat const& src);
        ~WrongCat();

        const std::string getType() const;
        void makeSound() const;
};

#endif