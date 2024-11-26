/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:25 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 13:27:48 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
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
