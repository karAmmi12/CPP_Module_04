/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:47 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 14:55:56 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors and destructors

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_brain = new Brain();
}
Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}
// Operators Overload

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		delete this->_brain;
		this->_brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

// Member functions

void	Cat::makeSound() const
{
	std::cout << "Meow Meow." << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}
