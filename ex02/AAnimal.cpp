/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:06 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 13:23:35 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Constructors and destructors

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(std::string const &type): _type(type)
{
	std::cout << "AAnimal parametric constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}
//	Operators Overload

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "AAnimal assignation operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

//getters

std::string	AAnimal::getType() const
{
	return this->_type;
}

// Member functions

void	AAnimal::makeSound() const
{
	std::cout << "Animal sound." << std::endl;
}


