/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:12 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 13:19:06 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class	AAnimal
{
	protected:
		std::string		_type;

	public:
		AAnimal();//default
		AAnimal(std::string const & type);//param
		AAnimal(AAnimal const & src); // copy
		virtual ~AAnimal(); // destructor

		AAnimal & operator=(AAnimal const & rhs);

		std::string		getType() const;
		virtual void	makeSound() const = 0;
		virtual Brain	*getBrain() const = 0;


};

#endif
