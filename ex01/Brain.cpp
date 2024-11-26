/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:41 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 13:20:23 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors and destructors

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}
Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

// Operators Overload

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignation operator called." << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

// Member functions

std::string	Brain::getIdea(int index) const
{
	return this->_ideas[index];
}

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	this->_ideas[index] = idea;
}


