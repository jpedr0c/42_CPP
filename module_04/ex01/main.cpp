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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* animals[4];

	std::cout << "==========Create Dogs==========\n\n";
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog;

	std::cout << "\n==========Create Cats==========\n\n";
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat;

	std::cout << "\n==========Test sounds============\n\n";
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	std::cout << "\n==========Delete Dogs==========\n\n";
	for (int i = 0; i < 2; i++)
		delete animals[i];

	std::cout << "\n==========Delete Cats==========\n\n";
	for (int i = 2; i < 4; i++)
		delete animals[i];

	std::cout << "\n=========Test Copy============\n";
	const Dog* animal_1 = new Dog;
	const Dog* animal_2 = new Dog(*animal_1);

	std::cout << "\n========Test brain Animal_1=======\n";
	std::cout << *animal_1->getBrain() << std::endl;

	std::cout << "\n========Delete Animal_1===========\n";
	delete animal_1;
	
	std::cout << "\n========Test brain Animal_2=======\n";
	std::cout << *animal_2->getBrain() << std::endl;

	std::cout << "\n========Delete Animal_2===========\n";
	delete animal_2;

	std::cout << "\n========== Test Wrong ==========\n\n";
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << wrong_cat->getType() << " " << std::endl;
    wrong_cat->makeSound();
    wrong_animal->makeSound();
    delete wrong_cat;
    delete wrong_animal;
}