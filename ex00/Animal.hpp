/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:32 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:19:21 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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
};

#endif


