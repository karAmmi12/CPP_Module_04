/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:38 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 12:27:03 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
// # include "Brain.hpp"

class	Animal
{
	protected:
		std::string		_type;

	public:
		Animal();//default
		Animal(std::string const & type);//param
		Animal(Animal const & src); // copy
		virtual ~Animal(); // destructor

		Animal & operator=(Animal const & rhs);

		std::string		getType() const;
		virtual void	makeSound() const;
		//virtual Brain	*getBrain() const = 0;

};

#endif


