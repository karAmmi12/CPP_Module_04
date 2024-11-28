/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:31 by kammi             #+#    #+#             */
/*   Updated: 2024/11/28 13:35:06 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("default")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src) //: _name(src._name)
{
	// for (int i = 0; i < 4; i++)
	// {
	// 	if (src._inventory[i])
	// 		_inventory[i] = src._inventory[i]->clone();
	// 	else
	// 		_inventory[i] = NULL;
	// }
	*this = src;

}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "No materia to equip." << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			// std::cout << "Materia: " << m->getType() << " equipped." << std::endl;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >=  4)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << "No materia at index " << idx << "." << std::endl;
		return;
	}
	std::cout << "Materia at index " << idx << " unequipped." << std::endl;
	delete _inventory[idx];
	_inventory[idx] = NULL;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (!_inventory[idx])
	{
		std::cout << "No materia at index " << idx << "." << std::endl;
		return;
	}
	_inventory[idx]->use(target);
}
