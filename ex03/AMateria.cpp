/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:24:45 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:51:10 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria " << this->_type << " created" << std::endl;
}

AMateria::AMateria(AMateria const &original)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = original;
}
AMateria &AMateria ::operator=(AMateria const &original)
{
	std::cout << "AMateria copy assignment called" << std::endl;
	if (this != &original)
	{
		this->_type = original.getType();
	}
	return (*this);
}
AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}
std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
