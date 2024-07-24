/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:52 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:40:28 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Character.hpp"
# include <iostream>

class	ICharacter;

class AMateria
{
  protected:
	std::string _type;

  public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &);
	virtual ~AMateria();
	AMateria &operator=(AMateria const &);

	virtual AMateria *clone() const = 0;
	std::string const &getType() const;
	virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP