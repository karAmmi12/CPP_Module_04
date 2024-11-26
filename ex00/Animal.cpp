/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:28 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:20:43 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

// Constructors and destructors

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal parametric constructor called." << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}
//	Operators Overload

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal assignation operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

//getters

std::string	Animal::getType() const
{
	return this->_type;
}

// Member functions

void	Animal::makeSound() const
{
	std::cout << "Animal sound." << std::endl;
}
