/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:04 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:23:30 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog " << type << " parameteraized constructor called" << std::endl;
}
Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = original;
}

Dog &Dog::operator=(Dog const &original)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this != &original)
	{
		this->_type = original._type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
};

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
};