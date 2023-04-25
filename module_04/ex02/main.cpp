/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:16:45 by jocardos          #+#    #+#             */
/*   Updated: 2023/04/25 10:16:45 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	// const AAnimal *animal = new AAnimal();
    // animal->makeSound();
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    const AAnimal    *meta[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            meta[i] = new Cat();
            if (meta[i] == NULL)
            {
                std::cerr << "Cat allocation failed\n";
                std::cerr << "Exiting process now\n";
                return(1);
            }
        }
        else
        {
            meta[i] = new Dog();
            if (meta[i] == NULL)
            {
                std::cerr << "Dog allocation failed\n";
                std::cerr << "Exiting process now\n";
                return(1);
            }
        }
    }
    std::cout << std::endl;

    return (0);
}