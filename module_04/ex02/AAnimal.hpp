/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:14:08 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 14:14:08 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    public:
        AAnimal(std::string type);
        AAnimal(AAnimal const& src);
        AAnimal &operator=(AAnimal const& src);
        virtual ~AAnimal();

        const std::string getType() const;
        virtual void makeSound() const = 0;
    protected:
        std::string type;
        AAnimal();
};

#endif