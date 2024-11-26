/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:44 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 17:51:30 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const & src)
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & src)
{
	//std::cout << "Ice assignation operator called" << std::endl;
	if (this != &src)
		AMateria::operator=(src);
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
