/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:00:15 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 10:00:15 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(Cat const& src);
        Cat &operator=(Cat const& src);
        ~Cat();

        const std::string getType() const;
        void makeSound() const;
        Brain const* getBrain() const;
    private:
        Brain* brain;
};

#endif