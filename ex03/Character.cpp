/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:53 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:56:13 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character() : _name("No Name")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}
Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character(const Character& original)
{
	_name = original._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (original._inventory[i])
		{
			_inventory[i] = original._inventory[i]->clone();
		}
	}
}

Character & Character::operator=(const Character& original)
{
	if (this == &original)
		return (*this);
	_name = original._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (original._inventory[i])
		{
			_inventory[i] = original._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m->clone();
			std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
			return ;
		}
	std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		std::cout << "Character " << this->_name << " unequipped" << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't unequip" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
		std::cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't use" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}