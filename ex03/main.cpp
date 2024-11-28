/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:59 by kammi             #+#    #+#             */
/*   Updated: 2024/11/28 16:00:26 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}


// int	main()
// {
// 	std::cout << "=== Initialisation de la source de Materia ===" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	std::cout << "MateriaSource initialisée et Materias apprises." << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "=== Création du personnage principal ===" << std::endl;
// 	ICharacter* me = new Character("me");
// 	if (me)
// 		std::cout << "Personnage principal créé: " << me->getName() << std::endl;
// 	else
// 		std::cout << "Erreur lors de la création du personnage principal." << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "=== Création et équipement des Materias ===" << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	if (tmp)
// 	{
// 		me->equip(tmp);
// 		std::cout << "Materia 'ice' équipée." << std::endl;
// 	}
// 	else
// 		std::cout << "Erreur lors de la création de la Materia 'ice'." << std::endl;

// 	tmp = src->createMateria("cure");
// 	if (tmp)
// 	{
// 		me->equip(tmp);
// 		std::cout << "Materia 'cure' équipée." << std::endl;
// 	}
// 	else
// 		std::cout << "Erreur lors de la création de la Materia 'cure'." << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "=== Création du personnage secondaire ===" << std::endl;
// 	ICharacter* bob = new Character("bob");
// 	if (bob)
// 		std::cout << "Personnage secondaire créé: " << bob->getName() << std::endl;
// 	else
// 		std::cout << "Erreur lors de la création du personnage secondaire." << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "=== Utilisation des Materias ===" << std::endl;
// 	if (me && bob)
// 	{
// 		me->use(0, *bob); // Utilise Ice sur Bob
// 		std::cout << "Materia 'ice' utilisée sur " << bob->getName() << std::endl;
// 		me->use(1, *bob); // Utilise Cure sur Bob
// 		std::cout << "Materia 'cure' utilisée sur " << bob->getName() << std::endl;
// 	}
// 	else
// 		std::cout << "Erreur lors de l'utilisation des Materias." << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "=== Tests supplémentaires ===" << std::endl;

// 	// Test de déséquipement
// 	std::cout << "=== Déséquipement de la première Materia ===" << std::endl;
// 	me->unequip(0);
// 	std::cout << "Materia à l'index 0 déséquipée." << std::endl;
// 	me->use(0, *bob); // Ne devrait rien faire car la Materia a été déséquipée
// 	std::cout << "Tentative d'utilisation de la Materia déséquipée à l'index 0." << std::endl;
// 	std::cout << std::endl;

// 	// Test de rééquipement
// 	std::cout << "=== Rééquipement de la Materia Ice ===" << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	std::cout << "Materia 'ice' rééquipée." << std::endl;
// 	me->use(0, *bob); // Utilise Ice sur Bob
// 	std::cout << "Materia 'ice' utilisée sur " << bob->getName() << std::endl;
// 	std::cout << std::endl;

// 	// Test de dépassement de l'inventaire
// 	std::cout << "=== Test de dépassement de l'inventaire ===" << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	std::cout << "Materia 'ice' équipée." << std::endl;
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	std::cout << "Materia 'cure' équipée." << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp); // Ne devrait pas s'équiper car l'inventaire est plein
// 	std::cout << "Tentative d'équipement d'une Materia supplémentaire 'ice' (devrait échouer)." << std::endl;
// 	std::cout << std::endl;

// 	// Test de création de Materia inconnue
// 	std::cout << "=== Test de création de Materia inconnue ===" << std::endl;
// 	tmp = src->createMateria("unknown");
// 	if (!tmp)
// 		std::cout << "Erreur lors de la création de la Materia 'unknown'." << std::endl;
// 	std::cout << std::endl;

// 	std::cout << "=== Nettoyage de la mémoire ===" << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	std::cout << "Mémoire nettoyée." << std::endl;

// 	return 0;
// }
