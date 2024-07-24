/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:05 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:22:47 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include "./Animal.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &);
	Dog &operator=(const Dog &);

	~Dog();
	void makeSound() const;
};

#endif