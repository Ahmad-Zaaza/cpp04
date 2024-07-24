/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:24 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:19:26 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
	std::cout << "Brain parametarized constructor" << std::endl;
}

Brain::Brain(Brain const &original)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = original;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &original)
{
	if (this != &original)
	{
		for (unsigned int i = 0; i < 100; i += 1)
		{
			this->_ideas[i] = original._ideas[i];
		}
	}
	return (*this);
}
