/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:17:40 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 13:25:17 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

	public:
		Cat();//default
		Cat(Cat const & src); // copy
		virtual ~Cat(); // destructor

		Cat & operator=(Cat const & rhs);
		virtual void	makeSound() const;
};

#endif
