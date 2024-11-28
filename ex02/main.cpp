/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:38 by kammi             #+#    #+#             */
/*   Updated: 2024/11/28 15:59:16 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define NUM_ANIMALS 6

int main(void) {
	AAnimal *animals[NUM_ANIMALS];

	std::string ideas[6] = {
		"Chasser les souris",
		"Manger des croquettes",
		"Faire une sieste au soleil",
		"Aboyer après le facteur",
		"Gronder les meubles",
		"Creuser un trou dans le jardin"
	};

	// Création des animaux et assignation des idées
	std::cout << "=== Création des animaux et assignation des idées ===" << std::endl;
	for (int i = 0; i < NUM_ANIMALS; i++) {
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();

		animals[i]->makeSound();
		animals[i]->getBrain()->setIdea(0, ideas[i]);
		std::cout << animals[i]->getType() << " idea: " << animals[i]->getBrain()->getIdea(0) << std::endl;
	}
	std::cout << std::endl;

	// Tests de copie et d'affectation pour Dog
	std::cout << "=== Tests de copie et d'affectation pour Dog ===" << std::endl;
	Dog originalDog;
	originalDog.getBrain()->setIdea(0, "Jouer avec une balle");
	std::cout << "Original Dog idea: " << originalDog.getBrain()->getIdea(0) << std::endl;

	Dog copiedDog(originalDog);
	std::cout << "Copied Dog idea: " << copiedDog.getBrain()->getIdea(0) << std::endl;

	Dog assignedDog;
	assignedDog = originalDog;
	std::cout << "Assigned Dog idea: " << assignedDog.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

	// Tests de copie et d'affectation pour Cat
	std::cout << "=== Tests de copie et d'affectation pour Cat ===" << std::endl;
	Cat originalCat;
	originalCat.getBrain()->setIdea(0, "Grimper aux arbres");
	std::cout << "Original Cat idea: " << originalCat.getBrain()->getIdea(0) << std::endl;

	Cat copiedCat(originalCat);
	std::cout << "Copied Cat idea: " << copiedCat.getBrain()->getIdea(0) << std::endl;

	Cat assignedCat;
	assignedCat = originalCat;
	std::cout << "Assigned Cat idea: " << assignedCat.getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

	// Suppression des animaux
	std::cout << "=== Suppression des animaux ===" << std::endl;
	for (int i = 0; i < NUM_ANIMALS; i++)
		delete animals[i];

	// Tests de compilation pour les classes abstraites
	// car AAnimal est une classe abstraite et ne peut pas être instanciée.

	// AAnimal abstractAnimal;
	// AAnimal *abstractAnimalPtr = new AAnimal();

	return 0;
}

