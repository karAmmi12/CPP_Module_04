/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:21 by kammi             #+#    #+#             */
/*   Updated: 2024/11/28 13:29:25 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	//std::cout << "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & src)
{
	//std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
