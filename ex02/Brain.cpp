/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:17:24 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/27 12:03:21 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(Brain const& substitue)
{
	std::cout << "Constructor copie Brain called" << std::endl;
	 for(int i = 0; i <= 100; i++)
	 	_ideas[i] = substitue._ideas[i];
}

Brain&	Brain::operator=(Brain const& substitue)
{
	if (this != &substitue)
	{
		 for(int i = 0; i <= 100; i++)
		 	_ideas[i] = substitue._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
}