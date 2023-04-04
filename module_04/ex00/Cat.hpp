/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:13:52 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/01 23:13:52 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat& src);
        ~Cat();

        void makeSound() const;
};

#endif