/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:30 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 13:28:07 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors and destructors

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

// Operators Overload

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		delete this->_brain;
		this->_brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

// Member functions

void	Dog::makeSound() const
{
	std::cout << "Woof Woof." << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}
