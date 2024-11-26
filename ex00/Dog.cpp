/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:43 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:28:16 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors and destructors

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}



Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

// Operators Overload

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog assignation operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

// Member functions

void	Dog::makeSound() const
{
	std::cout << "Woof Woof." << std::endl;
}
