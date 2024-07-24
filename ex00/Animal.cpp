/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:24:58 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:25:48 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << this->getType() << " parametarized constructor called" << std::endl;
}

Animal::Animal(Animal const &original)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = original;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &original)
{
	std::cout << "Animal copy assignment called" << std::endl;
	if (this != &original)
	{
		this->_type = original._type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "generic animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}
