/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:28 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:18:32 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat " << type << " parameteraized constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->_brain;
};
Cat::Cat(const Cat &original) : Animal(original)
{
	this->_brain = new Brain();
	*this = original;
}
Cat &Cat::operator=(const Cat &original)
{
	if (this != &original)
	{
		this->_type = original._type;
		*_brain = *original._brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
};