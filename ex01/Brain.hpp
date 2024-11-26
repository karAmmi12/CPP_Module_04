/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:01:44 by kammi             #+#    #+#             */
/*   Updated: 2024/11/25 14:26:41 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain(); //default
		Brain(Brain const & src); // copy
		virtual ~Brain(); // destructor

		Brain & operator=(Brain const & rhs);

		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);
};

#endif
