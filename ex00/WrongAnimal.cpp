/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:57 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:34:29 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors and destructors

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << "WrongAnimal parametric constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

// Operators Overload

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal assignation operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

//getters

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

// Member functions

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}