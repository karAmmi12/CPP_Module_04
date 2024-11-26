/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:41 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 18:26:26 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"



class Cure : public AMateria
{
	public:
		Cure(); //Default constructor
		Cure(Cure const & src); //Copy constructor
		virtual ~Cure(); //Destructor
		Cure & operator=(Cure const & src); //Assignation operator
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
