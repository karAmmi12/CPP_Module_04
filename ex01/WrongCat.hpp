/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:02:19 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 15:35:51 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

	public:
		WrongCat();//default
		WrongCat(WrongCat const & src); // copy
		virtual ~WrongCat(); // destructor

		WrongCat & operator=(WrongCat const & rhs);
		void	makeSound() const;
};
#endif
