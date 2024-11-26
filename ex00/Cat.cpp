/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:35 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:28:48 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors and destructors

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}
// Operators Overload

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat assignation operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

// Member functions

void	Cat::makeSound() const
{
	std::cout << "Meow Meow." << std::endl;
}



