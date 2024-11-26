/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:55 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 12:50:09 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

// Constructors and destructors

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

// Operators Overload

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat assignation operator called." << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

// Member functions

void	WrongCat::makeSound() const
{
	std::cout << "WrongMeow WrongMeow." << std::endl;
}
