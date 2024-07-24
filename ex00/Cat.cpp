/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:24:59 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:25:52 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Cat " << type << " parameteraized constructor called" << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	*this = original;
}
Cat &Cat::operator=(const Cat &original)
{
	if (this != &original)
	{
		this->_type = original._type;
	}
	return (*this);
}
Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
};

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
};