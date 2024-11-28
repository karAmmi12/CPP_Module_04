/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:33:05 by kammi             #+#    #+#             */
/*   Updated: 2024/11/28 15:16:26 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return _inventory[i]->clone(); 
	}
	return NULL;
}
