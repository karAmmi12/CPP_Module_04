/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:56 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 15:32:48 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
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
