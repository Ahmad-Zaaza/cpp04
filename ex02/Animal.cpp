/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:15 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:34:01 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << type << " is created" << std::endl;
}

Animal::Animal(Animal const &original)
{
	std::cout << "Animal " << original._type << "copy constructor called" << std::endl;
	*this = original;
}

Animal::~Animal()
{
	std::cout << "Animal " << this->_type << " destructor called" << std::endl;
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

std::string Animal::getType() const
{
	return (this->_type);
}
