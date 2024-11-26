/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:02:11 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 15:36:15 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string		_type;

	public:
		WrongAnimal();//default
		WrongAnimal(std::string const & type);//param
		WrongAnimal(WrongAnimal const & src); // copy
		virtual ~WrongAnimal(); // destructor

		WrongAnimal & operator=(WrongAnimal const & rhs);

		std::string		getType() const;
		void	makeSound() const;
};

#endif
