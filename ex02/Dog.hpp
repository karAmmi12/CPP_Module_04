/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:33 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 13:27:39 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain*	_brain;

	public:
		Dog();//default
		Dog(Dog const & src); // copy
		virtual ~Dog(); // destructor

		Dog & operator=(Dog const & rhs);
		virtual void	makeSound() const;
		Brain* getBrain() const;
};

#endif
