/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:32:49 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 17:45:10 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(); //Default constructor
		Ice(Ice const & src); //Copy constructor
		virtual ~Ice(); //Destructor
		Ice & operator=(Ice const & src); //Assignation operator
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
#endif
