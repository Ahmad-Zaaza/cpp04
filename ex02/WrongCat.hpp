/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:25:13 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/24 09:23:50 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP

# define WRONG_CAT_HPP

# include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(const std::string &type);
	WrongCat(const WrongCat &);
	WrongCat &operator=(const WrongCat &);
	~WrongCat();
	void makeSound() const;
};

#endif