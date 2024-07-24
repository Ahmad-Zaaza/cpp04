/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:32 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:19:07 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog " << type << " parameteraized constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->_brain;
};
Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = original;
}

Dog &Dog::operator=(Dog const &original)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this != &original)
	{
		this->_type = original._type;
		*_brain = *original._brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
};