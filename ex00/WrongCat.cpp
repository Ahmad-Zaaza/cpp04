/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:12 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:26:22 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type)
{
	std::cout << "WrongCat " << type << " parameteraized constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
	*this = original;
}
WrongCat &WrongCat::operator=(const WrongCat &original)
{
	if (this != &original)
	{
		this->type = original.type;
	}
	return (*this);
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
};

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
};