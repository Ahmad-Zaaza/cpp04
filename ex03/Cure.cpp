/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:29:07 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:45:37 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const std::string &type) : AMateria(type)
{
	std::cout << "Cure parameterized constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src._type)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
	return ;
}

// Assignation operator
Cure &Cure::operator=(const Cure &original)
{
	std::cout << "Cure copy assignment called" << std::endl;
	if (this != &original)
		this->_type = original._type;
	return (*this);
}

Cure *Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " 's wounds *" << std::endl;
}
