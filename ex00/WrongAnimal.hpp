/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:10 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:24:41 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP

# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal
{
  protected:
	std::string type;

  public:
	WrongAnimal(void);
	WrongAnimal(const std::string &);
	~WrongAnimal();
	WrongAnimal(WrongAnimal const &);
	WrongAnimal &operator=(WrongAnimal const &);

	std::string getType() const;
	void setType(const std::string);
	void makeSound() const;
};

#endif