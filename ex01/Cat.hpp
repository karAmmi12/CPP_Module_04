/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:50 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 14:49:47 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();//default
		Cat(Cat const & src); // copy
		virtual ~Cat(); // destructor

		Cat & operator=(Cat const & rhs);
		virtual void	makeSound() const;
		Brain* getBrain() const;
};
#endif
