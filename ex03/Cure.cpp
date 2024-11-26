/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:38 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 17:56:00 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const & src)
{
	//std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & src)
{
	//std::cout << "Cure assignation operator called" << std::endl;
	if (this != &src)
		AMateria::operator=(src);
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

