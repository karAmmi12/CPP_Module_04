/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:46 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:25:24 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

	public:
		Dog();//default
		Dog(Dog const & src); // copy
		virtual ~Dog(); // destructor

		Dog & operator=(Dog const & rhs);
		virtual void	makeSound() const;
};


#endif
