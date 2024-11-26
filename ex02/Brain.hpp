/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:46:18 by kammi             #+#    #+#             */
/*   Updated: 2024/11/26 12:59:59 by kammi            ###   ########.fr       */
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
