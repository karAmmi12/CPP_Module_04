/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:33:10 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 18:54:15 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource(); //Default constructor
		MateriaSource(MateriaSource const & src); //Copy constructor
		virtual ~MateriaSource(); //Destructor
		MateriaSource & operator=(MateriaSource const & src); //Assignation operator
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
