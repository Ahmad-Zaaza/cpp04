/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:29:11 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:46:09 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructors
Ice::Ice(void)
{
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}


Ice::Ice(const std::string &type) : AMateria(type)
{
	std::cout << "Ice parameterized constructor called" << std::endl;
}

// Destructor
Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

// Copy constructor
Ice::Ice(const Ice &original) : AMateria(original._type)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = original;
	return ;
}

// Assignation operator
Ice &Ice::operator=(const Ice &original)
{
	std::cout << "Ice copy assignment called" << std::endl;
	if (this != &original)
		this->_type = original._type;
	return (*this);
}

Ice *Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
