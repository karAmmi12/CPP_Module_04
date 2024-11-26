/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:53 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 15:34:20 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors and destructors

Dog::Dog(): Animal("Dog")
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
