/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:23 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:28:56 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>

class Animal
{
  protected:
	std::string _type;

  public:
	Animal(void);
	Animal(std::string type);
	virtual ~Animal();
	Animal(Animal const &);
	Animal &operator=(Animal const &);

	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif